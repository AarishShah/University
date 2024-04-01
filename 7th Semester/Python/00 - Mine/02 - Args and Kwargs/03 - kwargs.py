def order_pizza(size, *toppings, **details):
    print(f"Ordering a {size} pizza with the following toppings:")

    for topping in toppings:
        print(f"- {topping}")
    print("\nDetails of the order are:")
    for key, value in details.items():
        print(f"{key}: {value}")

order_pizza("large", "pepperoni", "olives", delivery="True", tip=5)

# peproni and olives are positional arguments, delivery and tip are keyword arguments
# positional arguments are stored in a tuple, keyword arguments are stored in a dictionary