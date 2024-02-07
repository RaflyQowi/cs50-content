def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Not an integer!")

def main():
    x = get_int("What is x: ")
    y = get_int("What is y: ")

    print(f"x + y: {x + y}")

if __name__ == "__main__":
    main()