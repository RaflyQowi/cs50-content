people ={
    "Carter": "+1-617-495-1000",
    "David": "+1-949-468-2750",
    "John": "+1-832-582-7768",
    "Jane": "+1-212-555-3000"
}

input = input("Name: ")

if input in people.keys():
    print(f"Found: {people[input]}")
else:
    print("Not Found")