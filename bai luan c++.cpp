Co che luu tru bien
Lop luu tru extern trong ngon ngu c
lop luu tru extern dc su dung trong chuong trinh c khi ta muôn su dung 1 bien  o nhieu file khac nhau
dieu do co nghia la khi ta khai bao 1 bien o file nay thi hoan toan co the su dung ket hop o file khac

lop luu tru static trong ngon ngu c
khi chung ta khai bao bien voi static thi cai bien do se duoc su dung trong suot chuong trinh ma ko bi mat di
bien khi dc khai bao bang static thi giua cac lan goi ham thi bien se khong bi mat di ma gia tri cua bien vs lop static con dc tich luy

 kieu du lieu bool
kieu bool  la keu du lieu chi co the nh vao2 gia tri do la dung hoac sai
kieu bool tuong ung vs viec xet tinh dung sai cu 1 menh de trong toan hoc
kich co du lieu cua kieu bool la 1byte
-	de su dung kieu bool ta có các cách sau:
Cách 1: Su dung thu vien <stdbool.h>
voi cach nay ta su dung kieu du lieu bool cua c
      Cách 2: Tu dinh nghia kieu bool voi enum
      Cách 3: dinh nghia kieu bool voi integer
      Cách 4: Khai báo hang so true/false
-	Trong các cách trên:
	Cách 1 chi chay duoc tren phiên ban C99 standard for C language. Tuy nhiên hau het các ban compiler C deu dã update cho nên các ban nên dùng cách này.
"	Cách 2,3,4: thì hoat dong giong nhau
Nhìn chung thì kieu bool van là kieu integer, nên cho dù dùng cách nào thì bien van có the gán bool bang mot giá tri integer batt kì (0 tuc là false, khác 0 tuc là true).

-	Toán tu ba ngoi
co cu phap nhu sau condition ? true_value:false_value;
tuc la neu condition=true thi se lay true_value
neu conditon=false thi se lay false_value
toan tu 3 ngoi thuong duoc su dung de thay the cau lenh if else trong ca truong hop it phuc tap




