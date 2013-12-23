class Sales_item {

public:
  Sales_item() : units_sold(0), revenue(0.0) {}
  friend std::istream& operator>>(std::istream &in, Sales_item& item) {
    in >> item.isbn >> item.units_sold >> item.revenue;
  }
  friend std::ostream& operator<<(std::ostream &out, const Sales_item &item) {
    out << item.isbn << " " << item.units_sold << " " << item.revenue;
  }
private:
  std::string isbn;
  unsigned units_sold;
  double revenue;
};
