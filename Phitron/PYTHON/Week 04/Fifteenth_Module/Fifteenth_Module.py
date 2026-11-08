class Star_Hall:
    def __init__(self):
        pass

    hall_list = []

    def entry_hall(self, hall):
        self.hall_list.append(hall)


class Hall(Star_Hall):
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        super().entry_hall(self)

    def entry_show(self, id, movie_name, time):
        self.show_list.append((id, movie_name, time))
        self.seats[id] = [[False for _ in range(self.cols)] for _ in range(self.rows)]

    def book_seats(self, customer_name, phone_number, show_id, seats_for_show):
        if self.seats.get(show_id) is not None:
            for seat in seats_for_show:
                if (seat[0] > 0 and seat[0] <= self.rows) and (
                    seat[1] > 0 and seat[1] <= self.cols
                ):
                    if self.seats[show_id][seat[0] - 1][seat[1] - 1] is False:
                        self.seats[show_id][seat[0] - 1][seat[1] - 1] = True
                    else:
                        print(
                            f"Seat with row: {seat[0]}, colum: {seat[1]} already booked."
                        )
                else:
                    print(f"Seat with row: {seat[0]}, column: {seat[1]} is invalid")
        else:
            print("Id didn't match with any show!")
            return

    def view_show_list(self):
        print("\n-------------------------------------------------------\n")
        for i in self.show_list:
            print(f"MOVIE NAME: {i[1]}\tSHOW ID: {i[0]}\tTIME: {i[2]}")
        print("\n-------------------------------------------------------\n")

    def view_available_seats(self, show_id):
        if show_id in self.seats.keys():
            for i in range(len(self.seats[show_id])):
                for j in range(len(self.seats[show_id][i])):
                    if self.seats[show_id][i][j] is False:
                        print(f"{chr(65+i)}{j+1}", end="\t")
                    else:
                        print("XX", end="\t")
                print("\n")
        else:
            print("Id didn't match with any show!")


star = Hall(3, 5, "A10")
star.entry_show("ae123", "Black Adam", "Oct 26 2022 10:00 AM")
star.entry_show("ae50", "Spiderman", "Oct 28 2022 8:00 PM")


while True:
    print("1. VIEW ALL SHOWS TODAY\n2. VIEW AVAILABLE SEATS\n3. BOOK SEAT\n4. EXIT\n")
    n = input("Enter option: ")
    if int(n) == 4:
        break
    if int(n) == 1:
        star.view_show_list()
    elif int(n) == 2:
        id_n = input("ENTER SHOW ID: ")
        print("XX for already booked seats")
        print("-------------------------------------------------------\n")
        star.view_available_seats(id_n)
        print("\n-------------------------------------------------------\n")
    elif int(n) == 3:
        name_n = input("ENTER CUSTOMER NAME: ")
        phone_n = input("ENTER CUSTOMER PHONE NUMBER: ")
        show_id_n = input("ENTER SHOW ID: ")
        tickets_no = input("ENTER NUMBER OF TICKETS: ")
        tickets = []
        view_tickets = []
        for _ in range(int(tickets_no)):
            seat_no = input("ENTER SEAT NO: ")
            view_tickets.append(seat_no)
            seat_row = ord(seat_no[0]) - 64
            seat_col = int(seat_no[1])
            tickets.append((seat_row, seat_col))
        star.book_seats(name_n, phone_n, show_id_n, tickets)
        print("---------------------------------------------------------\n")
        print(
            f"CUSTOMER NAME: {name_n}\nPHONE NUMBER: {phone_n}\nSHOW ID: {show_id_n}\nTICKETS: {view_tickets}\n"
        )
        print("\n-------------------------------------------------------\n")
    else:
        print("Invalid option!")
