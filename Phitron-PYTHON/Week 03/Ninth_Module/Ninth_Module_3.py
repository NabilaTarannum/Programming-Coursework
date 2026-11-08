""" def do_something(x, y):
    print(f"x : {x}, y : {y}")


do_something(12, 45)
do_something("tomato", "onion") """


""" def do_something(work):
    print("start work")
    work()
    print("end work")


def practice_coding():
    print("I am practicing python")


def learning_python():
    print("learning python class") """


# do_something(practice_coding)
# do_something(learning_python)


def do_something():
    print("inside the function do_something")

    def inner_function():
        print("inside the inner_function")

    inner_function()


# do_something()


def first_function():
    print("inside the first_function")

    def second_function():
        print("inside the inner function")

    return second_function


# first = first_function()
# first()

first_function()()
