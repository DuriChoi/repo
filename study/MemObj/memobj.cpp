#include <stdio.h>
#include <cstring>

class Date{
	protected:
		int year, month, day;
	public:
		Date(int y, int m, int d) {year=y; month=m; day=d;}
		void OutDate() {printf("%d/%d/%d", year, month, day);}
};

class Product{
	private:
		char Name[64];
		char Company[32];
		Date ValidTo;
		int Price;
	public:
		Product(const char *aN, const char *aC, int y, int m, int d, int aP) : ValidTo(y,m,d){
			strcpy(Name, aN);
			strcpy(Company, aC);
			Price = aP;
		}
		void OutProduct(){
			printf("이름: %s\n", Name);
			printf("제조사: %s\n", Company);
			printf("유효기간: ");
			ValidTo.OutDate();
			puts("");
			printf("가격: %d\n", Price);
		}
};

int main(){
	Product S("새우깡","농심",2021,12,12,1800);
	S.OutProduct();

	return 0;
}
