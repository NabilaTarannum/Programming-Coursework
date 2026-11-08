class Furniture:
    def __init__(self) -> None:
        pass


class Chair(Furniture):
    def __init__(self) -> None:
        super().__init__()


wooden_chair = Chair()

print(issubclass(Chair, Furniture))
print(isinstance(wooden_chair, Chair))
print(isinstance(wooden_chair, Furniture))

# summary ---->

# Abstract class
class Book:
    def __init__(self, name) -> None:
        self.name = name

    def read(self) -> None:
        raise NotImplementedError

    def exarcise(self) -> None:
        pass


class Physics(Book):
    def __init__(self, name) -> None:
        super().__init__(name)


topon = Physics("Shahjahan Topon rana Chowdhury")
# topon.read()
topon.exarcise()
