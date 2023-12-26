mal = []

while True:
    user = input("Enter the name you want to execute:")
    user.strip()
    
    match user:
        case "add":
            print("The output is add")
        case "print":
            print("The output is print")
        case x:
            break
print("Bye")
        