def main(n):
    for i in range(n):
        meow()

def meow():
    print("meow")

if __name__ == "__main__":
    n = int(input("How many times do you want to meow: "))
    main(n)