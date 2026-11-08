def full_name(f_name, l_name):
    name = f"{f_name} {l_name}"
    return name


name = full_name(l_name="chowdhury", f_name="Choto")
# print(name)


def long_name(**kargs):
    print(kargs)


long_name(first_name="Dr.", last_name="Chowdhury", middle_name="Rahman")


def name_mixed(first_name, last_name, **name_parts):
    print(first_name, last_name, name_parts)


name = name_mixed(first_name="Dr.", last_name="Chowdhury", middle_name="Rahman")
print(name)


def all_tpes(first, *args, **kargs):
    print(first)
    for word in args:
        print(word)
    print(kargs)
    for key, value in kargs.items():
        print(key, value)


all_tpes("abd", "ddd", "kjk", "lll", "pp", name="Abul", father="babul")
