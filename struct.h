struct Items{
	int qnty;
	float price;
	char product_name[50];
};

struct Customer{
	char cust_name[50];
	int mobile_no;
};

typedef struct Items item;
typedef struct Customer cust;
