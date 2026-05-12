class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def display_info(self):
        print(f"Product: {self.name}, Price: {self.price}, Quantity: {self.quantity}")

    def sell(self, amount):
        if self.quantity >= amount:
            self.quantity -= amount
            print(f"Sold {amount} of {self.name}")
            return amount * self.price
        else:
            print(f"Insufficient quantity of {self.name}")
            return 0


class SalesSystem:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def display_all_products(self):
        for product in self.products:
            product.display_info()

    def process_sale(self, product_name, amount):
        for product in self.products:
            if product.name == product_name:
                return product.sell(amount)

        print(f"Product {product_name} not found")
        return 0


if __name__ == "__main__":

    Product1 = Product("Laptop", 1000, 10)
    Product2 = Product("Mouse", 25, 50)
    Product3 = Product("Keyboard", 75, 25)

    sales_system = SalesSystem()

    sales_system.add_product(Product1)
    sales_system.add_product(Product2)
    sales_system.add_product(Product3)

    sales_system.display_all_products()

    total_revenue = sales_system.process_sale("Laptop", 2)
    print(f"Total revenue: {total_revenue}")

    total_revenue = sales_system.process_sale("Mouse", 5)
    print(f"Total revenue: {total_revenue}")

    total_revenue = sales_system.process_sale("Keyboard", 10)
    print(f"Total revenue: {total_revenue}")