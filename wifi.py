import subprocess

# Retrieve all Wi-Fi profiles
try:
    raw_data = subprocess.check_output(['netsh', 'wlan', 'show', 'profiles'])
    # Decode with cp1252 and split into lines
    data = raw_data.decode('cp1252').split('\n')
    profiles = [i.split(":")[1][1:-1] for i in data if "All User Profile" in i]

    print("\n{:<30}| {:<}".format("Wi-Fi Name", "Password"))
    print("-" * 42)

    # Fetch passwords for each profile
    for i in profiles:
        try:
            results = subprocess.check_output(['netsh', 'wlan', 'show', 'profile', i, 'key=clear']).decode('cp1252').split('\n')
            password = [b.split(":")[1][1:-1] for b in results if "Key Content" in b]
            print("{:<30}| {:<}".format(i, password[0] if password else "No Password Found"))
        except subprocess.CalledProcessError:
            print("{:<30}| {:<}".format(i, "Error fetching password"))
except UnicodeDecodeError:
    print("Error decoding the output, try adjusting the encoding settings.")
except Exception as e:
    print(f"An unexpected error occurred: {e}")
