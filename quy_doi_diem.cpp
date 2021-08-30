// nhap sinh vien, quy doi diem toan li hoa

#include<iostream>
using namespace std;
class thisinh
{
	private:
		char ht[25];
		float dt,dl,dh;
		int ns;
	public:
		void nhap()
		{
			cout<<"ho ten: "; cin.ignore(1);cin.get(ht,25);
			cout<<"nam sinh: "; cin>>ns;
			cout<<"diem toan: "; cin>>dt;
			cout<<"diem li: "; cin>>dl;
			cout<<"diem hoa: "; cin>>dh;
		}
		void xuat1()
		{
			cout<<"ho ten: "<<ht<<"nam sinh:"<<ns;
			cout<<"diem toan: "<<dt<<"diem li: "<<dl<<"diem hoa: "<<dh;
		}
		void quydoi(float d)
		{
			if (d>=8.5) cout<<"A";
			else if (d>=8.0) cout<<"B+";
			else if (d>=7.0) cout<<"B";
			else if (d>=6.5) cout<<"C+";
			else if (d>=5.5) cout<<"C";
			else if (d>=5.0) cout<<"D+";
			else if (d>=4.0) cout<<"D";
			else cout<<"F";
		}
		void xuat2()
		{
			cout<<"ho ten: "<<ht<<"nam sinh:"<<ns;
			cout<<"diem toan: ";quydoi(dt);
			cout<<"diem li: ";quydoi(dl);
			cout<<"diem hoa: ";quydoi(dh);
		}
};
main()
{
	thisinh ts[100]; int i,n;
	cout<<"so thi sinh la: ";cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"nhap cho thi sinh thu "<<i<<": \n";
		ts[i].nhap();
	}
	cout<<"ds diem thi sinh he 10\n";
	for (i=0;i<n;i++) ts[i].xuat1();
	cout<<"ds diem thi sinh he 4\n";
	for (i=0;i<n;i++) ts[i].xuat2();
}
