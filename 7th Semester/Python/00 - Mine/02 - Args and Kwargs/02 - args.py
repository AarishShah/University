def order_pizza(size, *toppings):
    print(f"Ordering a {size} pizza with the following toppings:")
    for topping in toppings:
        print(f"- {topping}")

order_pizza("large", "pepperoni", "olives")

# Python will understand that the first argument is the size of the pizza and the rest of the arguments are the toppings.