#include <stdio.h>
#include <conio.h>
int main(void)
{
  int item, n, total=0;
  char c;
  float g, g1, total1;
  clrscr();
  printf("         * TRIDENT *\n");
  printf("------------------------------\n");
  printf("Nariman Point, Mumbai - 400021\n");
  printf("   Contact no. - 9893547632 \n");
  printf("------------------------------\n");
  printf("Date:        Time:      Table: \n");
  printf("15/06/26     21:47      23 \n");
  printf("------------------------------\n");
  printf("Receipt no. -           245678\n");
  printf("Customer name -            XYZ\n");
  printf("Payment mode -            Cash\n");
  printf("GSTIN -        2HG3GJHK345K267\n");
  printf("------------------------------\n");
  printf("-----------MENU LIST----------\n");
  printf(" 1. Burger:           Rs.250/-\n");
  printf(" 2. Pizza:            Rs.400/-\n");
  printf(" 3. French Fries:     Rs.250/-\n");
  printf(" 4. Coke:             Rs.200/-\n");
  printf(" 5. Pasta:            Rs.350/-\n");
  printf(" 6. Momos:            Rs.300/-\n");
  printf(" 7. Butter Chicken:   Rs.500/-\n");
  printf(" 8. Roti:             Rs.100/-\n");
  printf(" 9. Naan:             Rs.150/-\n");
  printf("10. Rice:             Rs.250/-\n");
  printf("------------------------------\n");
  c='y';
  while(c=='y' || c=='Y')
  {
		printf("Enter item code :            ");
		scanf("%2d", &item);
		if(item==1)
		{
			printf("Item:                   Burger\n");
			printf("Price:                Rs.250/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 250 * n;
		}
		else if(item==2)
		{
			printf("Item:                    Pizza\n");
			printf("Price:                Rs.400/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 400 * n;
		}
		else if(item==3)
		{
			printf("Item:             French Fries\n");
			printf("Price:                Rs.300/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 300 * n;
		}
		else if(item==4)
		{
			printf("Item:                     Coke\n");
			printf("Price:                Rs.200/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 200 * n;
		}
		else if(item==5)
		{
			printf("Item:                    Pasta\n");
			printf("Price:                Rs.350/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 350 * n;
		}
		else if(item==6)
		{
			printf("Item:                    Momos\n");
			printf("Price:                Rs.300/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 300 * n;
		}
		else if(item==7)
		{
			printf("Item:           Butter Chicken\n");
			printf("Price:                Rs.500/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 500 * n;
		}
		else if(item==8)
		{
			printf("Item:                     Roti\n");
			printf("Price:                Rs.100/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 100 * n;
		}
		else if(item==9)
		{
			printf("Item:                     Naan\n");
			printf("Price:                Rs.150/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 150 * n;
		}
		else if(item==10)
		{
			printf("Item:                     Rice\n");
			printf("Price:                Rs.250/-\n");
			printf("Quantity:                    ");
			scanf("%2d", &n);
			total += 250 * n;
		}
		else
		{
			printf("\n");
			printf("Invalid Input");
			printf("\n");
		}
		printf("\n");
		printf("Are there more items? (y/n): ");
		scanf(" %c", &c);
		printf("\n");
  }
  printf("------------------------------\n");
  printf("Subtotal:          Rs.%d\n", total);
  g = 0.09 * total;
  printf("CGST (9%%):         Rs.%.2f\n", g);
  printf("SGST (9%%):         Rs.%.2f\n", g);
  g1 = 2 * g;
  total1 = g1 + total;
  printf("TOTAL:             Rs.%.2f\n", total1);
  printf("------------------------------\n");
  printf("    Thank You. Visit Again.");
  getch();
  return 0;
}