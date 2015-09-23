#include <stdio.h>
void Nhapmang(int a[],int &n) //nhap mang
{
    printf("Nhap so phan tu trong mang:"); // in ra man hinh
    scanf("%d",&n); // nhap so phan tu can nhap vao mang
    for (int i=1;i<=n;i++) // chay vong lap for
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);// nhap tung phan tu trong mang
    }
}

int LaSNT (int n) // ham kiem tra so nt
{
    int dem,i; //khai bao bien
    dem=0; // gan bien dem  = 0
    for (i=1;i<=n;i++) // chay vong lap for
    {
        if (n%i==0)	dem++; //dem n % i cho den khi i = n
    }
    if (dem==2)	return 1; // 1 = (la so nguyen to)
    else return 0; // 0 nguoc lai
}
void Inmang(int a[],int &n) // in ra mang vua nhap vao
{
    printf("Cac phan tu la: \n"); // in ra man hinh
    for (int i =1; i<=n;i++)  // chay vong lap for
        printf("%d\t", a[i]); // in lan luot cac phan tu co trong mang ra man hinh
}
void VitriSNT(int a[], int n) // ham xac dinh vi tri so nguyen to
{
    printf("Vi tri cua cac phan tu mang la:\n"); // in ra man hinh
    for (int i = 0; i < n; i++) {
        if (LaSNT(a[i])) // kiem tra = cach goi ham LaSNT
        {
            printf("%d\t", i);	//in vi tri cua so nguyen to ra man hinh
            // printf("%d\t",a[i]); // in so nguyen to ra man hinh
        }
    }
}
int main() //khai bao ham main
{
    int a[100]; //khoi tao mang a voi suc chua 99 phan tu
    int chon,n; //khai bao bien chon va bien n
    // bat dau vong do while
    do  {

        printf("\nMoi ban chon cac chuc nang sau:\n"); //in ra man hinh
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Vi tri cac phan tu la so nguyen to trong mang\n");
        printf("Nhap 0 den thoat chuong trinh \n");
        scanf("%d", &chon);//nhap chon lan 1
        if (chon < 0 || chon > 3) //xet dieu kien chon co nam ngoai cac phim chuc nang
        {
            printf("Nhap sai!!! Xin moi nhap lai\n"); //in ra man hinh neu nhap sai phim chuc nang
            scanf("%d",&chon);// nguoi dung nhap lai yeu cau o day
        }
        //bat dau switch case
        switch (chon) {
            case 1:
                Nhapmang(a, n);// goi ham nhap mang so nguyen
                break;
            case 2:
                Inmang(a, n);//goi ham xuat mang so nguyen
                break;
            case 3:
                VitriSNT(a, n);//xuat ra vi tri cac so nguyen to trong mang
                break;
        }
    } while(chon != 0); // dieu kien vong lap ket thuc la khi (chon = 0)
    return 0;
}	