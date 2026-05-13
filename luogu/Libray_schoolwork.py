class Book:

    def __init__(self, book_id, title, author):
        self.book_id = book_id
        self.title = title
        self.author = author
        self.is_borrowed = False

    # 借书
    def borrow(self):
        if self.is_borrowed:
            return False

        self.is_borrowed = True
        return True

    # 还书
    def return_book(self):
        if not self.is_borrowed:
            return False

        self.is_borrowed = False
        return True

    # 获取状态
    def get_status(self):
        return "已借阅" if self.is_borrowed else "可借阅"

    # 打印对象时自动调用
    def __str__(self):
        return f"编号:{self.book_id} 书名:{self.title} 作者:{self.author} 状态:{self.get_status()}"


class Library:

    def __init__(self):
        self.books = {}

    # 添加图书
    def add_book(self, book):
        self.books[book.book_id] = book

    # 借书
    def borrow_book(self, book_id):

        if book_id not in self.books:
            print("图书不存在")
            return

        if self.books[book_id].borrow():
            print("借阅成功")
        else:
            print("该书已被借走")

    # 还书
    def return_book(self, book_id):

        if book_id not in self.books:
            print("图书不存在")
            return

        if self.books[book_id].return_book():
            print("归还成功")
        else:
            print("该书本来就没借")

    # 显示所有图书
    def show_books(self):

        if not self.books:
            print("暂无图书")
            return

        for book in self.books.values():
            print(book)


# ======================
# 主程序
# ======================

if __name__ == "__main__":

    library = Library()

    b1 = Book(1, "Python", "张三")
    b2 = Book(2, "C++", "李四")

    library.add_book(b1)
    library.add_book(b2)

    library.show_books()

    library.borrow_book(1)

    library.show_books()

    library.return_book(1)

    library.show_books()