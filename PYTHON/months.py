month_number = int(input("Enter month number (1-12): "))
months = ["January", "February", "March", "April", "May", "June", 
          "July", "August", "September", "October", "November", "December"]

if 1 <= month_number <= 12:
    print(months[month_number - 1])
else:
    print("Invalid month number")
