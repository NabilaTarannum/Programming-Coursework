def add(a, b):
    new_var = a + b
    print(new_var)


def deduct(x, y):
    return x - y


class Phone:
    color = "black"
    features = ["camera", "water proof", "can be used as a hammer"]

    def call(self):
        print("ring ring ring")

    def send_sms(self, number, text):
        return f"sending sms : {text} to : {number}"


my_phone = Phone()
my_phone.call()
sms = my_phone.send_sms("01717225544", "I missed to miss you")
print(sms)


class Calculator:
    def add(self):
        pass

    def subtract(self):
        pass

    def multiply(self):
        pass

    def divide(self):
        pass
