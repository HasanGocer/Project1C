#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>  

//int main sat�r�:845

int hasar=10;
int Mcan=100,can=100;
int def=10;
int okyet=10;
int Mtahm=100,tahm=10;
int zih=10;
int onur=10;
int buyuyet=10;
int hiz=10;
int altin=100;
int puan=10;
int mes1=1;
int a=1;
int ok[2]={0,0};
int day=100, Mday=100;

int atla(int hak,int tahmin,int sanssayi,int indirim,int altin)
{
	printf("3.TURA ATLADIN!!\n");
	hak+=4;
	printf("+4 Hak Kazand�n!!\n");
	printf("�PUCU: Arad���n say� %d ile %d aras�nda...\n",tahmin-10,tahmin+10);
	while(hak>0)
	{
		hak--;
		printf("Kalan hakk�n: %d\n",hak);
		if(hak==0)
		{
			printf("Kaybettin!!\n");
			altin-=50;
			printf("Kalan alt�n: %d\n",altin);
			break;
		}
		printf("Bir say� tahmin et: ");
		scanf("%d",&tahmin);
		if(sanssayi==tahmin)
		{
			printf("Kazand�n!!\n");
			printf("Bir tane indirim hakk�n var!!\n(Fiyat� yar�s�n� hesapla)\n");
			hak=0;
			indirim=1;
			break;
		}
		else if(hak>0)
		{
		}
		else
		{
			printf("Bir daha dene!!\n");
		}
	}
	return indirim,altin;
}

int *satinal(int item,int altin,int itemfiyat,int indirim,int ind[],int karizma)
{
	int pazarlik,sanspazar,pazarliksecim;
	int fonkdongu=1;
	printf("HATIRLATMA!!\nE�er indirim oyundan gelen bir indirim hakk�n varsa onu pazarl�kta kullanamazs�n!\n");
	while(fonkdongu!=0)
	{
		printf("[1]Pazarl�k yap\n[2]Devam et\n");
		scanf("%d",&pazarliksecim);
		if(pazarliksecim==1)
		{
			srand(time(NULL)); 
			sanspazar=rand()%100;
			printf("sans = %d\n",sanspazar);
			if(karizma>=0 && karizma<10){
			 
				if(sanspazar>=0 && sanspazar<60)
				{
					printf("�ndirim yok\n");		
					break;			
				}
				else if(sanspazar>=60 && sanspazar<70)
				{
					printf("Y�zde 10 indirim kazand�n!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=70 && sanspazar<80)
				{
					printf("Y�zde 25 indirim kazand�n!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=80 && sanspazar<90)
				{
					printf("Y�zde 40 indirim kazand�n!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=90 && sanspazar<100)
				{
					printf("Y�zde 50 indirim kazand�n!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=10 && karizma<30)
			{ 
				if(sanspazar>=0 && sanspazar<50)
				{
					printf("�ndirim yok\n");
					break;
				}
				else if(sanspazar>=50 && sanspazar<60)
				{
					printf("Y�zde 10 indirim kazand�n!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=60 && sanspazar<75)
				{
					printf("Y�zde 25 indirim kazand�n!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=75 && sanspazar<85)
				{
					printf("Y�zde 40 indirim kazand�n!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=85 && sanspazar<100)
				{
					printf("Y�zde 50 indirim kazand�n!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=30 && karizma<50)
			{ 
				if(sanspazar>=0 && sanspazar<40)
				{
					printf("�ndirim yok\n");
					break;
				}
				else if(sanspazar>=40 && sanspazar<50)
				{
					printf("Y�zde 10 indirim kazand�n!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=50 && sanspazar<65)
				{
					printf("Y�zde 25 indirim kazand�n!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=65 && sanspazar<80)
				{
					printf("Y�zde 40 indirim kazand�n!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=80 && sanspazar<100)
				{
					printf("Y�zde 50 indirim kazand�n!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=50)
			{ 
				if(sanspazar>=0 && sanspazar<30)
				{
					printf("�ndirim yok\n");
					break;
				}
				else if(sanspazar>=30 && sanspazar<40)
				{
					printf("Y�zde 10 indirim kazand�n!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=40 && sanspazar<55)
				{
					printf("Y�zde 25 indirim kazand�n!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=55 && sanspazar<75)
				{
					printf("Y�zde 40 indirim kazand�n!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=75 && sanspazar<100)
				{
					printf("Y�zde 50 indirim kazand�n!\n");
					pazarlik=50;
					break;
				}
			}
		}
		else if(pazarliksecim==2)
		{
			break;
		}
		else{
			printf("Tekrar dene!!\n");
		}
	}
	
	int almasayi;
	
	if(pazarlik==0)
	{
		if(indirim==1)
		{
			if(altin>=itemfiyat/2)
			{
				printf("%d kar��l���nda sat�n ald�n\n",itemfiyat/2);
				item++;	//envanterdeki bu item say�s�n� artt�r�r
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli alt�n�n yok!\n");
			}
		}
		else
		{
			printf("Ka� tane alacaks�n? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi)
			{
				printf("%d kar��l���nda sat�n ald�n\n",itemfiyat*almasayi);
				item+=almasayi; //envanterdeki bu item say�s�n� artt�r�r
				altin-=itemfiyat*almasayi;
			}
			else
			{
				printf("Yeterli alt�n�n yok!\n");
			}
		}	
	}
	
	else
	{
		if(indirim==1)
		{
			if(altin>=itemfiyat/2)
			{
				printf("%d kar��l���nda sat�n ald�n\n",itemfiyat/2);
				item++;	//envanterdeki bu item say�s�n� artt�r�r
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli alt�n�n yok!\n");
			}
		}
		else
		{
			printf("�r�n�n yeni fiyat�: %d\n",itemfiyat*(100-pazarlik)/100);
			printf("Ka� tane alacaks�n? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi*(100-pazarlik)/100)
			{
				printf("%d kar��l���nda sat�n ald�n\n",itemfiyat*almasayi*(100-pazarlik)/100);
				item+=almasayi; //envanterdeki bu item say�s�n� artt�r�r
				altin-=itemfiyat*almasayi*(100-pazarlik)/100;
			}
			else
			{
				printf("Yeterli alt�n�n yok!\n");
			}
		}
	}
	ind[0]=altin;
	ind[1]=indirim;
	ind[2]=item;
	return ind;
}

int *satisfonksiyonu(int item,int altin,int itemfiyat,int sat[])
{
	printf("Sat�� fiyat�: %d\n",itemfiyat/2);
	int satsayac=1;
	int satmasayi;
	while(satsayac!=0)
	{
		printf("Ka� tane satmak istiyorsun? ");
		scanf("%d",&satmasayi);
		if(satmasayi==-1)
		{
			break;
		}
		else if(satmasayi>item)
		{
			printf("Biraz fazla girdin galiba!!\n");
			printf("Geri gelmek i�in -1'e bas\n");
		}
		else
		{
			
			altin+=(itemfiyat/2)*satmasayi;
			item-=satmasayi;
			printf("Alt�n�n: %d\n",altin);
			break;
		}
	}
	sat[0]=altin;
	sat[1]=item;
}

int *savas(int DMcan,int Dcan,int Dsaldiri,int tur,int saldiri,int Ssec,int Ddef,int exp,int can,int Darena[])
{
	//int Darena[4]={0,0,0,0};
int SSsec,SDsec,def1,sal1,Dsal1,Dsal2,Dcan1,tahm1,tahm2,tahm3;
while(Dcan>0&&can>0)
{
	tahm3=tahm;
	tahm1=100-tahm;
	tahm2=tahm1*2;
	/*if(100 <= tahm3)
	{
	Dsal1 = tham;
	}
	else if(90<=tham3)	Dsal1= (rand()%20);
	else if(80<=tham3)	Dsal1= (rand()%40);
	else if(70<=tham3)	Dsal1= (rand()%60);
	else if(60<=tham3)	Dsal1= (rand()%80);
	else if(50<=tham3)	Dsal1= (rand()%100);
	else if(40<=tham3)	Dsal1= (rand()%120);
	else if(30<=tham3)	Dsal1= (rand()%140);
	else if(20<=tham3)	Dsal1= (rand()%160);
	else if(10<=tham3)	Dsal1= (rand()%180);
	else	Dsal1= (rand()%200);
	Dsal2=Dsaldiri;
	Dsal2=Dsal2-tahm1;
	Dsal2=Dsal2+Dsal1;
	
	Dcan1=Dcan;
	Dcan1=Dcan1-tahm1;
	Dcan1=Dcan1+Dsal1;*/
	
printf("rakibin tahmini sald�r� hasar� :%d\nrakibin tahmini can� :%d",Dsal2,Dcan1);
printf("%d.Tur sald�r� s�ras� sizde.\n1-[Sald�r]\n2-[�yile�]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
scanf("%d",&Ssec);
							
	if(Ssec==1)
	{
		printf("sald�r� t�r�n�z� se�iniz\n[1] reine(hasar %d dayan�kl�l�k 70)\n[2]beau(hasar %d dayan�kl�l�k 50)\n[3]vaillant(hasar %d dayan�kl�l�k 30)\nHangi sald�r� t�r�yle sald�rmak istersiniz: ",(saldiri*3),(saldiri*2),saldiri);
		int SSSay=1;
		
		while(SSSay!=0)
		{
		scanf("%d",&SSsec);
		
		if(SSsec==1)
		{
			if(day>=70)
			{
			sal1=saldiri;
			saldiri = saldiri * 3;
			
			if((Ddef/10)>saldiri)
			{
				saldiri = saldiri - (Ddef/100);
			}
			
			else
			{
				saldiri = saldiri - (Ddef/10);
			}
			Dcan= Dcan-saldiri;
			printf("Hasar�n�z=%d\n",saldiri);
			day= day -70;
			SSSay--;
			}
			
			else
			{
				printf("dayan�kl�l���n�z yetmiyor");	
			}
			
		}
		else if(SSsec==2)
		{
			
			if(day>=50)
			{
			sal1=saldiri;
			saldiri = saldiri * 2;
			
			if((Ddef/10)>saldiri)
			{
				saldiri = saldiri - (Ddef/100);
			}
			
			else
			{
				saldiri = saldiri - (Ddef/10);
			}
			Dcan= Dcan-saldiri;
			printf("Hasar�n�z=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			
			else
			{
				printf("dayan�kl�l���n�z yetmiyor");	
			}
			
		}
		
		else if(SSsec==3)
		{
			if(day>=30)
			{
			if((Ddef/10)>saldiri){
				saldiri = saldiri - (Ddef/100);}
			else
			{
				saldiri = saldiri - (Ddef/10);
			}
			Dcan= Dcan-saldiri;
			printf("Hasar�n�z=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			}
			else
			{
				printf("dayan�kl�l���n�z yetmiyor");	
			}
		
		}
	}

	else if(Ssec==2)
	{
		
		printf("savunma t�r�n�z� se�in.\n[1] gratuit(defans�n�z %d artacak dayan�kl�l���n�z 30)\n[2] lou�(defans�n�z %d artacak dayan�kl�l���n�z 50)\n[3] de valeur(defans�n�z %d artacak dayan�kl�l���n�z 70)\nHangi savunma t�r�yle savunmak istersiniz: ",(def*3),(def*2),def);
		scanf("%d",&SDsec);
		
		if(SDsec==1)
		{
			def1=def;
			def=def*3;
			can= can+(Mcan/10);
			if(can>Mcan)
			{
				can=Mcan;
			}
			day=day+30;
			if(day>Mday)
			{
				day=Mday;
			}
			printf("dayanl�kl�l���n�z%d/%d\n",day,Mday);
			printf("Can�n�z=%d/%d\n",can,Mcan);
		}
		
		else if(SDsec==2)
		{
			def=def1;
			def= def*2;
			can= can+(Mcan/10);
			if(can>Mcan)
			{
				can=Mcan;
			}
			
			day=day+50;
			if(day>Mday)
			{
				day=Mday;
			}
			printf("dayanl�kl�l���n�z%d/%d\n",day,Mday);
			printf("Can�n�z=%d/%d\n",can,Mcan);
		}
		
		else if(SDsec==3)
		{
			can= can+(Mcan/10);
			if(can>Mcan)
			{
				can=Mcan;
			}
			day=day+70;
			if(day>Mday)
			{
				day=Mday;
			}
			printf("dayanl�kl�l���n�z%d/%d\n",day,Mday);
			printf("Can�n�z=%d/%d\n",can,Mcan);	
		}
		
		else
		{
			printf("herhangi bir �ey yapmad�n�z");
		}
	}
	else if(Ssec==3)
	{
		printf("Onurun yok oluyor");
		onur=0;
	break;
	}					
	else
	{
		printf("S�ran� bo� ge�tin rakibin seninle dalga ge�iyor\n");
	}
	
	if(Dcan>0)
	{				
		if(tur%3==0||tur%3==1)
		{
			if((def/10)>Dsaldiri)
			{
				Dsaldiri = Dsaldiri -(def/100);
			}
			else
			{
				Dsaldiri = Dsaldiri -(def/10);
			}
			can= can-Dsaldiri;
			printf("Ald���n�z hasar= %d\nKalan can�n�z= %d/%d\ndayan�kl�l���n�z %d/%d",Dsaldiri,can,Mcan,day,Mday);
		}
		else
		{
			Dcan=Dcan+(DMcan/10);
		}
		def=def1;
		saldiri=sal1;
		printf("Ald���n�z hasar= 0\nKalan can�n�z= %d/%d\ndayan�kl�l���n�z %d/%d",Dsaldiri,can,Mcan,day,Mday);
	}

	
	tur+=1;
	printf("\n");}
						
	if(Dcan<=0)
	{
	printf("GAL�B�YET!!!\n");
	exp+=Dsaldiri;
	onur+=Dsaldiri;
	printf("Tecr�beniz: %d\n",exp);
	altin=altin+(DMcan/10);
	hasar= hasar+(DMcan/10);
	printf("Hasar�n�z %d artt�\n",DMcan/10);
	}
	Darena[0]=can;
	Darena[1]=exp;
	Darena[2]=altin;
	Darena[3]=hasar;
	Darena[4]=onur;
	//printf("%d %d %d %d",Darena[0],Darena[1],Darena[2],Darena[3]);
	return Darena;
}							

int yetenekpuani(void)
{
	int yetw=1;
	int lvlyet;
	printf("\n\nYetenek puan�n�z� kullan�n");
	
	while(yetw!=0)
	{
		printf("\n[1]K�l�� yetene�i [2]Yay kullanma yetene�i [3]Defans yetene�i [4]Zihin okuma [5]Tahmin yetene�i [6]Onur [7]B�y� yetene�i[8] H�z\n");
		scanf("%d",&lvlyet);
		switch(lvlyet)
		{
			
			case 1:
				hasar+=10;
				printf("Yeni k�l�� yetene�in: %d\n",hasar);
				yetw--;
			
			break;
		
			case 2:
				okyet+=10;
				printf("Yeni yay kullanma yetene�in: %d\n",okyet);
				yetw--;
			
			break;
		
			case 3:
				def+=10;
				printf("Yeni defans yetene�in: %d\n",def);
				yetw--;
			
			break;
		
			case 4:
				zih+=10;
				printf("Yeni zihin okuma yetene�in: %d\n",zih);
				yetw--;
			
			break;
			
			case 5:
				tahm+=10;
				printf("Yeni tahmin yetene�in: %d\n",tahm);
				yetw--;
			
			break;
			
			case 6:
				onur+=10;
				printf("Yeni onur yetene�in: %d\n",onur);
				yetw--;
			
			break;
		
			case 7:
				buyuyet+=10;
				printf("Yeni b�y� yetene�in: %d\n",buyuyet);
				yetw--;
			
			break;
			
			case 8:
				hiz+=10;
				printf("Yeni h�z yetene�in: %d\n",hiz);
				yetw--;
			
			break;
		
			default:
				printf("Tekrar dene\n");
			
			break;
		}
	}
}

int orman(void)
{
	int kemik;
	int say1=(rand()%100);
	
	if(say1>90)
	{
		printf("Alt�n kesesi buldun(10 alt�n)\n");
		altin= altin+10;
		printf("Alt�n�n�z: %d\n",altin);
		}
	
	else if(say1>80)
	{
		printf("Bir b�y�c� ��ka geldi ve sana bir t�r kutsama yapt�.\n");
		buyuyet= buyuyet+10;
		printf("B�y� g�c�n�z: %d\n",buyuyet);
	}
	
	else if(say1>70)
	{
		printf("Bir t�r kapan bitkiye denk geldin. Ondan ka�mak i�in hamle yapt�n ama ge� kald�n. Bir t�r s�v� ile kapland�n. Art�k daha h�zl�s�n?!?!?!?\n");
		hiz= hiz+10;
		printf("H�z�n�z: %d\n",hiz);
	}
	
	else if(say1>60)
	{
		printf("Bir kemik y���n� buluyorsun. Orman�n derinliklerinde kaybolmu� olmal�. E�yalar�n� almak ister misin?\n[1]Evet [2]Hay�r\nNe yapacaks�n:");
		scanf("%d",&kemik);
		if(kemik==1)
		{
			printf("Sunlar bulundu:1 kese alt�n(100 alt�n),20 ta� ok, 1 demir k�l��\n");
			altin=altin+ 100;
			ok[1]= ok[1]+20;
			hasar=hasar+30;
			printf("Alt�n�n�z: %d\nOkunuz: %d\nHasar�n�z: %d\n",altin,ok[1],hasar);
		}
		else
		{
			printf("Hi�bir �ey yapmadan onu sonsuz yaln�zl��a b�rakt�n ve devam ettin\n");
		}
	}
	
	else if(say1>50)
	{
		printf("Bir periye denk geldin ve kalbinin biraz daha h�zl� att���n� farkediyorsun... Uyand�n peri yok ama bir �eyler de�i�mi�.\n");
		Mcan=Mcan+50;
		printf("Can�n�z: %d/%d\n",can,Mcan);
	}
	
	else
	{
		printf("Ortal�kta hi�bir �ey yok\n");
	}
}

int hasen(void)
{
	
	int say1=(rand()%100);
	
	if(say1==1)
	{
		printf("Bir gece uyku tulumunda sessiz sakince uyurken ay tanr�s� senin r�yalar aleminde ona sundu�un minneti kabul ediyor ve...\nSana alt�n bir k�l�� veriyor!!\n");
		hasar +=150;
	}
	
	if(say1==2)
	{
		printf("Bir ejderha sen yata��nda fosur fosur osurup uyurken seni bir lokmada ham yapt�. Ac�s�z gibi g�r�nse de beynin t�m ac�y� hissetti.\n");
		can -= 1000;
	}
	
	if(say1==3)
	{
		printf("Uyudu�un yerin yan�nda bir kese alt�n buldun(100 alt�n). Muhtemelen bir hay�rsever senin haline ac�y�p koydu.\n");
		altin=altin+100;
	}
	
	if(say1==4)
	{
		int koylu;
		printf("Yolda y�r�rken bir k�yl�ye rastlad�n. Senden yard�m istiyor.\n[1]Yard�m et\n[2]Yoluna devam et\nNe yapacaks�n:");
		scanf("%d",&koylu);
		if(koylu==1)
		{
			printf("K�yl�n�n saban� ta�a s�k��m�� g��l� kollar�nla birka� hamlede kurtard�n. K�yl� ve ailesi sana minnettar.\n");
			onur=onur+50;
			printf("Onurunuz: %d",onur);
		}
		else
		{
			printf("K�yl�n�n dili uzun ��kt�. Yard�m etmedi�ini t�m ahali ��rendi.\n");
			onur=onur-50;
			if(onur<0)
			{
				onur=0;
			}
			printf("Onurunuz: %d\n",onur);
		}
	}
	
	if(say1==5)
	{
		printf("Yolda dinlenirken g�zel bir cad�ya denk geldin ve dikkatini �ektin. Senden ho�land� ve sana bir iksir verdi.i�tin ve bay�ld�n. Ay�ld���nda cad� yoktu.\n");
		Mcan=Mcan+100;
		printf("Can�n�z: %d/%d\n",can,Mcan);
	}
	
	if(say1==6)
	{
		printf("Bir ustaya denk geldin. Seni sevdi ve sana bir b�y� ��retmek istedi. B�y�ler gelince rasgele bir b�y� ��ret\n");
	}
	
	if(say1==7)
	{
		printf("Bir Nizam ��valyesi yan�ndan ge�iyor. Senin g��l� oldu�unu g�rd��� ve ho�una gitti. Seni minik bir d�elloya davet ediyor.\n");
		
		int Ssec,DMcan=300,Dcan=300,Dsaldiri=300,saldiri=hasar/3,tur=0,Ddef=300;
						
		while(Dcan>0&&can>0)
		{
			printf("%d.Tur sald�r� s�ras� sizde.\n1-[Sald�r]\n2-[�yile�]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
			scanf("%d",&Ssec);
							
			if(Ssec==1)
			{
				if((Ddef/10)>saldiri)
				{
					saldiri = saldiri - (Ddef/100);
				}
				else
				{
					saldiri = saldiri - (Ddef/10);
				}
				Dcan= Dcan-saldiri;
				printf("Hasar�n�z=%d\n",saldiri);
			}
			else if(Ssec==2)
			{
				can= can+(Mcan/10);
				if(can>Mcan)
				{
					can=Mcan;
				}
				printf("Can�n�z=%d\n",can);
			}
			else if(Ssec==3)
			{
				printf("��valye sana\"senin onurlu ve g��l� bir sava��� oldu�unu d���nm��t�m\" diyor. Ve gidiyor\n");
			break;
			}					
			
			else
			{
				printf("S�ran� bo� ge�tin rakibin seninle dalga ge�iyor\n");
			}
							
			if(tur%3==0||tur%3==1)
			{
				Dsaldiri = Dsaldiri -(def/10);
				can= can-Dsaldiri;
				printf("Ald���n�z hasar=%d\nKalan can�n�z=%d/%d\n",Dsaldiri,can,Mcan);
			}
			else
			{
				Dcan=Dcan+(DMcan/10);
			}
						
			tur+=1;
			printf("\n");
		}
						
			if(Dcan<0)
			{
				printf("Galibiyet!!\n");
				altin=altin+(DMcan/10);
				hasar= hasar+(DMcan/10);
			}
		printf("��valye senin kar��nda diz ��k�yor ve senin bu g�c�nden etkileniyor.Sana Nizam ��valyesi Karargah�na giri� belgesi veriyor.(�temler geldi�nide eklenir ve Nizam ��valyesi Karargah� da eklenir)\n");
	}
	
	if(say1==8)
	{
		printf("Bir nene g�r�yorsun. �ok tatl� birisi. Yan�na gidip halini hatr�n� soracakken aln�na dokunuyor ve g�z�ne perde iniyor. Bir s�re sonra d�zeliyorsun\n");
	zih=zih+10;
	printf("Zihin g�c�: %d\n",zih);
	}
	
	if(say1==9)
	{
	}
	
	if(say1==10)
	{
	}
}


int main ()
{
	
	char sec;
	int karar=0,gun=1;
	int DMcan=0,Dcan=0,Dsaldiri=0,tur=0,saldiri=0,Ssec=0,Ddef=0;
	int can = Mcan;
	int yet,mes;
	int din=0;
	int Igun=1;
	int lwl=0,exp=0,Mexp=20,Sexp=0;
	int karizma=0;
	
	int arena,Darena[5],Darena1[5];
	
	int iht,sans;
	int secim,secim1,secim2,secim3,secim4,secim5,secim6,secim7;
	int secim8,secim9,secim10,secim11,secim12,secim13,secim14,secim15;
	int Ggun,Agun;
	int sayi,teklif;
	
	int orman1=0,Oorman=0,Korman=0;
	int i1=0,Osayac=0,xsag=0,xsol=0, yyukari=0,yasagi=0,Osecim,Odog;
	int Osay1=0,Osay2=0,Oy=0,Ox=0,Osay=1;
	char Osec='z';
	int orman12[21][21];
	int yon=1;
	
	int buyucusecimi,buyucusavassecimi,buyucucan,buyucuhasar,buyucutavsiyesecimi,buyucurng,buyucumanahtar=0,iksirsecimi,magarayonsecimi;
	
	int talim,talim1,talim2,talim3,talim4,talim5,talim6,i,j;
	
	int hak,sanssayi,oyunsayac;
	int ind[3];
	int sat[2];
	int shp=1;
	int cikis; //Sat�� ekran�ndan ��kar
	int kel; //KUAF�R
	int duksec,silsec,kilicsec,baltasec,mizsec,yaysec,zirhsec,buyusec,ikssec,petsec,akssec,kalkansec,migfsec,govsec,bacsec,kolsec,eldsec,botsec,kolyesec,bileksec,yuzuksec,kupesec,kuaforsec,sacsec,sakalsec,renksec;
	int kil[4]={0,0,0,0},bic[2]={0,0},bal[4]={0,0,0,0},miz[2]={0,0},kar[2]={0,0},yay[3]={0,0,0},ok[2]={0,0},kalkan[4]={0,0,0,0},mig[4]={0,0,0,0},gov[4]={0,0,0,0},bac[4]={0,0,0,0},kol[4]={0,0,0,0},eld[4]={0,0,0,0},bot[4]={0,0,0,0},kolye[3]={0,0,0},bilek[3]={0,0,0},yuzuk[3]={0,0,0},kupe[3]={0,0,0},iksir[4]={0,0,0,0},pet[2]={0,0},buyu[4]={0,0,0,0};
	
	int kilf[4]={40,60,80,100};
	int bicf[2]={20,30};
	int balf[4]={60,100,140,180};
	int mizf[2]={80,120};
	int karf[2]={160,200};
	int yayf[3]={40,60,100};
	int okf[2]={4,8};
	int kalkanf[4]={40,60,100,140};
	int migf[4]={20,30,40,50};
	int govf[4]={60,80,100,120};
	int bacf[4]={10,20,30,40};
	int kolf[4]={10,20,30,40};
	int eldf[4]={10,20,30,40};
	int botf[4]={20,30,40,50};
	int petf[2]={100,100};
	int kolyef[3]={50,100,200};
	int bilekf[3]={50,100,200};
	int yuzukf[3]={50,100,200};
	int kupef[3]={50,100,200};
	int iksirf[4]={0,0,0,0};
	int buyuf[4]={0,0,0,0};
	int satsec;
	int satmasayi;	
	int oksay,oktutar;
	int indsec,tahmin,indirim=0;
	
	int Bsec=0,Bsec1=0,biht=0,Bsec2=0;
	int B3[20][20];
	int Bi1,Bi2;
	int Esay=1,Esay1=0,Esay2;
	int Kbilet,Ksay,Ksecim,Kdepo;
	
	int Lsecim1,Lliman=1;
	int kilic_yetenegi,cekicilik,bilgelik;
	int LGgun,LAgun;
	int Liht3,Lbaliktutma;

	int Lsaldiri1,Lsaldiri2;
	int Lsira1,Lsira2,Lsira3,Lsira4=0,Lsira5,Lsira6;
	char Lhamle;
	int iht3,secim31,secim32,Lsayac3,Lsans7=0,Ldeneme4,Lhak4,ddeneme,Lb,baliktutma,Lj,Lsayac4=0,Lhak,Lsayac;
	
	char isim[255];
	int intmagara=1; //while
	int kediotu=0; //�TEM 
	int yilanyumurtasi=0; //�TEM
	int bilgi[8]={0,0,0,0,0,0,0}; //�TEMLER
	int intmagarayolsecim1,intmagarayolsecim2,intmagarasecim1,intmagarasecim2,intmagarasecim3,intmagarasecim4,intmagarasecim5,intmagarasecim6,intmagarasecim7,intmagarasecim8,intmagarasecim9,intmagarasecim10;
	int intboceksans,intmagaraoktopla,intmagaraokalma,intmagaragorevkarar,intmagaragorev1secimi;
	int intmagaraalevsecim1,intmagaraalevsecim2,intmagaraalevsecim3,intmagaraalevsecim4,intmagaraalevsecim5;
	int intmagarasecimbocek1,intmagarasecimbocek2,intmagarabocekkac;
	int intmagarateklif1;
	int intmagarasolsecimi;
	int intmagaraoktoplasans,intmagarasesyapmasans,intmagaraalevsans1,intmagaraalevsans2,intmagarasandiksans,intmagarayilansans1,intmagarayilansans2,intmagarayilansans3;
	
	int intmagaragorevi1=0,intmagararuyaittirme=0;
	int intalevanahtar=0;
	int intmagarasandiksayaci=0,intmagarateklif1sayac=0;
	int intsurungenlekonusmayetenegi=0,intboceklekonusmayetenegi=0;
	
	int intmagaragezinsecimi=0;
	int intmagarayilan,intalinanyumurtasayisi;
	int intbocekgorme=0;
	int intmagaradancikis=0;
	int intmagarahizlakac=0;
	
	int intmagarayilanyumurtasayisi=0;
	int intyilanyumurtasialmahakki=0;
	
	int intbilgisec1,intbilgisec2;
	int intbilgisayfa;
	
	setlocale(LC_ALL, "Turkish");
	printf("Selam d�nyal�, bu girdi�in evrene bir�ok yi�it sava��� girmeyi denese de ��kmay� ba�aramad�.\nBu sebepten �ok dikkatli ol! D�nyaya giri� yapmak istedi�ine hala emin misin?\n");
	printf("Kabul ediyorsan y'ye, Reddediyorsan n'ye bas...");
	scanf("%c",&sec);
	
	if(sec=='y')
	{
		
		printf("Bana kendini tan�t...\n");
		printf("�smin ne?\n");
		scanf("%s",&isim);
		system("CLS");
		printf("Mesle�in ne?\n");
		
		while(mes1!=0)
		{
			printf("[1]Sava���\n[2]Ok�u\n[3]B�y�c�\n[4]Dedektif\n");
			scanf("%d",&mes);
			switch(mes)
			{
				case 1: hasar+=150;			printf("Yeni k�l�� yetene�in: %d",hasar);
					mes1--;
				break;
				
				case 2: okyet+=150;			printf("\nYeni yay kullanma yetene�in: %d",okyet);
					mes1--;
				break;
				
				case 3: buyuyet+=150;			printf("\nYeni b�y� yetene�in: %d",buyuyet);
					mes1--;
				break;
				
				case 4: tahm+=75; zih+=75;	printf("\nYeni tahmin yetene�in: %d\nYeni zihin yetene�in: %d",tahm,zih);
					mes1--;
				break;
				
				default: printf("Tekrar dene!\n\n");
				break;
			}
		}
				
				system("pause");
				system("cls");
				
		printf("\nElinde bulunan 10 adet puan� karakterini geli�tirmek i�in kullan\n");
		
		printf("\n[1]K�l�� yetene�i [2]Yay kullanma yetene�i [3]Defans yetene�i [4]Zihin okuma [5]Tahmin yetene�i [6]Onur [7]B�y� yetene�i[8] H�z\n");
		
		
		while(puan!=0)
		{
			printf("Hangi �zelli�inizi geli�tirmek istersiniz:");
    		scanf("%d",&yet);
    		
			switch(yet)
			{
    			case 1:
					hasar+=10;
					printf("\nYeni k�l�� yetene�in: %d\n",hasar);
					puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 2: 
					okyet+=10;	
					printf("\nYeni yay kullanma yetene�in: %d\n",okyet);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 3: 
					def+=10;
					printf("\nYeni defans yetene�in: %d\n",def);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 4: 
					tahm+=10;
					printf("\nYeni zihin okuma yetene�in: %d\n",zih);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 5: 
					zih+=10;
					printf("\nYeni tahmin yetene�in: %d\n",tahm);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 6: 
					onur+=10;
					printf("\nYeni onur yetene�in: %d\n",onur);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				case 7: 
					buyuyet+=10;
					printf("\nYeni b�y� yetene�in: %d\n",buyuyet);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			case 8: 
					hiz+=10;
					printf("\nYeni h�z yetene�in: %d\n",hiz);
    				puan--;
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
    			
				default:
    				printf("Tekrar dene!!");
    				printf("Kalan puan�n�z: %d\n\n",puan);
    			break;
			}
		}
    			can=Mcan;
    			system("cls");
		
		printf("\nGirece�in evrende �ok d���k ihtimallerde nadir e�yalarla kutsanabilir, g��l� b�y�c�lerin efsunlar�na u�rayabilir\nveya ans�z�n bir ejderha taraf�ndan yutulabilirsin.\nO y�zden verece�in her kararda sonraki karar�n�n seni sona yakla�t�rmad���ndan emin ol.");
		printf("\n\nHasar�n� g�nden g�ne antrenman yaparak art�rabilir veya sakatlan�p azalmas�na sebep olabilirsin.");
		printf("\nCan bar�n her �eyden �nemlidir. bir�ok �eyden etkilendi�i gibi bir�ok �eye de etki etmektedir.");
		printf("\nDefans g�c�n bardaki sarho�la antrenman s�ras�nda geli�ir ama cebindeki �ak�ya dikkat et!! \n(Defans�n� azalt�p can�n� azaltabilir.)");
		printf("\nOk say�n� �al� kullanarak g�nden g�ne art�rabilirsin veya yerden bularak da kazanbilirsin.");
		printf("\nD��manlar�na dikkat etmelisin. Onlar�n g�c�n� ��renebilmek i�in tahmin yetene�ininin yeteri kadar olmas� gerekir.\nTahmin yetene�ini tavernadaki k�zlar hakk�nda tahmin yaparak kazanabilirsin.\n\n");
        
		while(can>0)
		{
		Igun=0;
		while(Igun<=(hiz/100)&&can>0)
		{
            printf("%d. G�n\n",gun);
			hasen();
            printf("Ba�l�yoruz haz�r m�s�n?\n");
            printf("Seviyeniz: %d\n",lwl);
            printf("Tecr�beniz: %d/%d\n",exp,Mexp);
   			printf("Hasar�n�z: %d\n",hasar);
   			printf("Can�n�z: %d/%d\n",can,Mcan);
   			printf("Defans�n�z: %d\n",def);
   			printf("Ok yetene�iniz: %d\n",okyet);
   			printf("Okunuz: %d\n",ok[1]);
   			printf("Tahmin yetene�iniz: %d\n",tahm);
   			printf("Zihin yetene�iniz: %d\n",zih);
   			printf("Onurunuz: %d\n",onur);
   			printf("H�z�n�z: %d\n",hiz);
   			printf("Alt�n�n�z: %d\n",altin);
   			
   			day=Mday;
            printf("[1]Arenaya gir\n[2]A�k �e�mesine git\n[3]Bara git\n[4]Ormana git\n[5]B�y�c�n�n inine gir\n[6]�ntihar ma�ras�na gir\n[7]Evde dinlen(iyile�)\n[8]Talim alan�na git\n[9]�ar��ya git\n[12]envantere bak\n");
            printf("Ne yapmak istersin:");
   			scanf("%d",&karar);
            
			switch(karar)
			{
				
				case 1:
					
					printf("Arenaya gittin.\n1-Cher[g�� 1000]\n2-Aimer[g�� 500]\n3-Ami[g�� 300]\n4-Ordinaire[g�� 100]\n5-Cupidite[g�� 50]\n6-Haine[g�� 20]\nRakibini se�:\n");
					scanf("%d",&arena);
					
					if(arena==1)
					{
						DMcan=1000,Dcan=1000,Dsaldiri=100,saldiri=hasar/3,tur=0,Ddef=100;
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						//dizi[4]={can,exp,altin,hasar};
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
				
					else if(arena==2)
					{
						DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
				
					else if(arena==3)
					{
						DMcan=300,Dcan=300,Dsaldiri=30,saldiri=hasar/3,tur=0,Ddef=30;
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
				 	
				 	else if(arena==4)
					{
						DMcan=100,Dcan=100,Dsaldiri=10,saldiri=hasar/3,tur=0,Ddef=10;
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
				
					else if(arena==5)
					{
						DMcan=50,Dcan=50,Dsaldiri=5,saldiri=hasar/3,tur=0,Ddef=5;	
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
							
					else if(arena==6)
					{
						DMcan=20,Dcan=20,Dsaldiri=2,saldiri=hasar/3,tur=0,Ddef=2;
						savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
						can=Darena[0];
						exp=Darena[1];
						altin=Darena[2];
						hasar=Darena[3];
						onur=Darena[4];
					}
				
					else
					{
					printf("bo� ge�tin manyak niye\n");
					}
				
				break;
				
				case 2:
					
					printf("A�k �e�mesine geldiniz: 1-Dilek tutmak.\n2-Yeni insanlar ile tan��ma.\n3-Ticaret yapmak.\n");
					printf("Ne yapmak istersin:");
					scanf("%d",&secim);
					
					    
					    if(secim == 1)
						{
						iht = rand() % 10;
						printf("�htimaller:1-Zengin olmak.\n2-Onurun artmas�.\n3-Yeni bir z�rh.\n4-G��lenmek.\n");
						scanf("%d",&secim1);
					
						if(iht == 1)
						{
							printf("Dile�ini tuttuktan sonra yolda y�r�rken bir h�rs�z�n g�zel bir kad�n�n �antas�n� �alarken g�rd�n.1-Pe�ine d��.\n2-Umursama.\n");
							scanf("%d",&secim2);
							if(secim2 == 2)
							{
								// pi�manl�k ileride gelecek...
							}
							else if(secim2 == 1)
							{
								printf("Uzun bir �abadan sonra �antay� h�rs�zdan ald�n ve h�rs�z� pataklad�n.�antay� a�t�n ve o da ne!! i�inde bir s�r� para var.1-�antay� sahibine g�t�r.\n2-�anta al ve ka�.\n");
								scanf("%d",&secim3);
								
								if(secim3 == 1)
								{
							
									printf("�antay� sahibine g�t�rd�n ve kad�n bunun kar��l���nda sana bir miktar para verdi.\n");
									altin = altin + 200;
									onur = onur + 20;
									printf("Alt�n�n�z: %d\n",altin);
									printf("Onurunuz: %d\n",onur);
								}
								else
								{
									altin = altin + 500;
									onur = onur - 10;
									printf("Alt�n�n�z: %d\n",altin);
								    printf("Onurunuz: %d\n",onur);
								}
							}
						}
						}	
				        
						if(iht == 2)
						{
				        	printf("Yolda giderken bir adam�n siyahi bir adam� a�a��lad���n� g�rd�n.1-Siyahi adama yard�m et.\n2-Umursama.\n");
				        	scanf("%d",&secim4);
				        	
				        	if(secim4 == 1)
							{
				        		printf("Adam�n yan�na gittin ve yapt���n�n yanl�� oldu�unu s�yledin ama o da ne!! Adam sana kar��l�k verdi.1-Sende kar��l�k ver.\n2-Uyarmaya devam et.\n");
				        		scanf("%d",&secim5);
								
								if(secim5== 1)
								{
				        			printf("Adam� pataklad�n ve adam sinirli bak��lar ile ka�t�.Siyahi adam ise k�s�k ve korku dolu bir ses ile ko�arak uzakla�t�.\n");
				        			onur = onur + 15;
				        			printf("Onurunuz: %d\n",onur);
								}
								
								if(secim5 == 2)
								{
									printf("Adam senin uyar� ve ho�g�r�ne ra�men ayn� harekete devam ediyor.1-Kar��l�k ver.\n2-Bir�ey yapma ve uzakla�");
									scanf("%d",&secim6);
									
									if(secim6 == 1)
									{
										printf("Adam� pataklad�n ve adam sinirli bak��lar ile ka�t�.Siyahi adam ise k�s�k ve korku dolu bir ses ile ko�arak uzakla�t�.\n");
										onur = onur + 15;
										printf("Onurunuz: %d\n",onur);
									}
									
									else
									{
										onur = onur - 5;
										printf("Onurunuz: %d\n",onur);
									}
								}
							}
							
							if(secim4 == 2)
							{
								onur = onur - 5;
					  			printf("Onurunuz: %d\n",onur);
							}
						}
						
						if(iht == 3)
						{
							printf("Yolda giderken bir at arabas�ndan sand�k d��t���n� g�rd�n.Hemen gidip a�t�n ve o da ne!��inde �ok g�zel bir z�rh var.1-Z�rh� al.\n2-At arabas�n�n arkas�ndan ba��r.\n");
							scanf("%d",&secim7);
							
							if(secim7 == 1)
							{
							   printf("Z�rh ho�una gitti ve z�rh� ald�n.");
							   def = def + 10;
							   printf("Defans�n�z: %d\n",def);
							}
							else
							{
								printf("At arabs�n�n akras�ndan ba��rd�n lakin seni duymad�lar.Yeni z�rh...");
								def = def + 10;
								onur = onur + 5;
								printf("Onurunuz: %d\n",onur);
							}
						}
						
						if(iht == 4)
						{
							sans = rand() % 100;
							if(sans == 1 )
							{
								printf("Dile�ini tuttun ve yolda gidiyorsun o da ne!! Habe�li Hasen Tanr�s� sana ilahi bir g�� bah�etti.");
								hasar = hasar + 700;
								printf("Hasar�n�z: %d\n",hasar);
							}
				    	}
				    	
						if(secim == 2)
						{
				       	printf("Bir kad�n ile tan��t�n.");
				       	printf("Kad�n:Merhabalar bana bir konuda yard�mc� olur musunuz?1-Yard�m et.\n2-Umursama.\n");
				       	scanf("%d",&secim8);
				       	if(secim8 == 1)
						{
				       		printf("Bizim Karakter:Tabi ki! Buyrun sizi dinliyorum!\n");
				       		printf("Kad�n:�u k��ede g�rd���n�z adamlar bana zorbal�k yap�yorlar.Bana yard�m etmeniz kar��l���nda size �al��t���m barda bir i�ki verebilir ve bara giri�inizin kolay olmas�n� sa�layabilirim.\n1-Yabanc� kad�n�n dedi�ini yap.\n2-Yapma ve uzakla�.\n");
				       	    scanf("%d",&secim9); 
						   	
							if(secim9 == 1)
							{
				       			printf("Yabanc� kad�n�n dedi�ini yapt�n ve adamlar� pataklad�n.Ceblerinden bir miktar altin ��kt�");
				       			altin = altin + 50;
				       			onur = onur + 20;
				       			printf("Onurunuz: %d",onur);
				       			printf("Alt�n�n�z: %d",altin);
				       			printf("Yabanc� Kad�n:�ok te�ekk�r ederim efendim.Ad�m Lisa.Hemen �u a�a��daki barda �al���yorum isterseniz gidebiliriz.\n1-Git.\n2-Gitme");
				       			scanf("%d",&secim11);
									
									if(secim11 == 1)
									{
				       					printf("Lisa ile beraber �al��t��� bara gittiniz ve i�tiniz.Lisa sana bir i�ini halletmen kar��l���nda bar�n �zel giri�i i�in bir giri� kart� verece�inin s�yledi.");
				       					printf("Fakat bu i� i�in 3 g�n sonra gelmen gerekti�ini ve i�i o zaman anlataca��n� s�yledi.\n1-Kabul et.\n2-Kabul etme.\n");
				       					scanf("%d",&secim11);
				       					
									   	if(secim11 == 1)
										{
				       						Ggun = gun + 3;
				       						printf("Lisa:Bara ak�am saatlerinde gelen bir zorba var.Zaman�nda benim en k�ymetli e�yam� �ald�.E�er e�yam� al�p haketti�ini ona verirsen anla�mam�z ger�ekle�ir");
				       						printf("Lisa'n�n dedi�i adam� takip ettin ve adamla y�zle�mek i�in uygun bir f�rsat buldun.\n1-Adamla y�zle�.\n2-Bekle.\n");
				       						scanf("%d",&secim12);
				       						
											if(secim12 == 1)
											{
				       							printf("Adamdan e�yay� ald�n ve adam� fena benzettin.\n");
				       							altin = altin + 15;
				       							printf("Alt�n�n�z: %d\n",altin);
				       							printf("E�yay� ald�n ve Lisaya g�t�rd�n ve bunun kar��l���nda bara �zel giri� kart�n� ald�n\n");
											}
											
											else
											{
												printf("Bekledin ve adam g�zden kayboldu g�rev ba�ar�s�z!!");
											}
									   	}
									
										else if(secim11 == 2)
										{
									   		printf("Lisa'n�n dedi�ini yapmad�n ve bu y�zden sinirlenen Lisa oyaland���n� d���nd� ve seni bardaki bir ka� soytar�ya d�vd�rd�\n");
									   		can = can - 10;
									   		altin = altin - 20;
									   		printf("Can�n�z: %d\n",can);
									   		printf("Alt�n�n�z: %d\n",altin);
										}
									}
							   }
					}
								else
								{
								printf("Yabanc� kad�n�n dedi�ini yapmad�n ve uzakla�t�n.");
								}
					} 	
						   
						   if(secim == 3)
						   {
						   		printf("Yolda giderken bir yandan da ticareti nas�l yapabilirsin diye d���n�rken �ar��daki bir t�ccara:Merhabalar kolay gelsin.Ticaret yapmak istiyorum da �neribilece�iniz bir ticari i� var m�?\n");
						   		printf("T�ccar:Sizlere de merhabalar.��ler �uan pek iyi de�il fakat kar��da g�rd���n t�ccara dan��abilirsin.\n\n\nKar��daki t�ccar�n yan�na gittin.\n");
						   		printf("Bizim Karakter:Merhabalar.Kar��daki T�ccar beni size y�nlendirdi.Ad�m(karakterin ad�)ticaret yapmak istiyorum.Elinizde yapabilece�imiz tiari bir i� var m�?");
						   		printf("T�ccar:Sizlere de merhabalar.�ok iyi bir zamanda geldiniz.Evet elimde yapabilece�imiz ticari bir i� var?Size anlatmam� ister misiniz:1-Kabul et.\n2-Etme.\n");
						   		scanf("%d",&secim11);
						   	
						   	if(secim11 == 1)
							{
						   		printf("Bizim Karakter: Buyrun sizi dinliyorum.\n");
						   		printf("T�ccar:Efendim �ncelikle ad�m Philip.Burada T�ccar Philip diye bilinirim.E�er kabul ederseniz yapaca��m�z i� ipek �zerine.�pek ile ilgileniyorsan�z a��klayaca��m.Yoksa vaktimi �almay�n.1-Kabul et.\n2-Kabul etme.\n\n\n");
						   		scanf("%d",&secim12);
								   
								   if(secim12 == 1)
								   {
						   			printf("Bizim Karakter: Evet sizi dinliyorum.\n T�ccar:Elimde sat�lacak g�zel ipekler var.Bunlar� satabilemk i�in bir yat�r�mc�ya ihtiyacm var e�er kabul ederseniz sizdrn 100 alt�n istiyorum e�er i� tutarsa verdi�iniz paran�n en az 3 kat�n� alacaks�n�z.");
						   			printf("Paran�z: %d\n",altin);
						   			printf("1-Kabul et.\n2-Kabul etme.\n");
						   			scanf("%d",&secim13);
									   
									   if(secim13 == 1)
									   {
						   				printf("Bizim karakter:Tamamd�r kabul ediyorum.Ama size g�venebilir miyim bilmiyorum?\n T�caar:�ok hakls�n�z efendim. Bu zamanda g�venilir insan bulmak zor.Bana olan g�venceniz i�in size bu i�aretli demiri al�n.Bunu kime g�sterirseniz beni g�sterir.");
						   				printf("Bizim karakter:Pekala t�ccar Philip.Peki bu i� ne zaman i�erisinde biter?\n T�ccar:Efendim bu i� en az 7 en �ok 10 g�n i�erisinde bitecektir diye umuyorum.Bu 3 g�n i�erisinde size verdi�im bu i�areti kar��da g�rd���n�z adama g�sterin o sizi y�nlendirecektir.");
						   				printf("Bizim karakter:Pekala Philip.�imdiden g�zel haberlerini bekliyorum g�r��mek �zere.\n");
						   				
											if(Ggun = 7 + Agun)
											{	   
						   						printf("Yeni g�n: %d\n",Ggun);
						   						printf("Bizim Karakter:Merhabalar ben bu i�aretin sahibini ar�yorum kendisinden bir haber var m�?\n Adam: Hay�r.Sonra yeniden gelin.\n");
						   					}
						   					
											if(Ggun = 8 + Agun)
											{
						   						printf("Yeni g�n: %d\n",Ggun);
						   						printf("Bizim Karakter:Tekrardan merhaba.Herhangi bir haber var m�?\n Adam:Hen�z bir haber yok.Sonra yeniden gelin.\n");
									   		}
											
											if(Ggun = 9 + Agun)
											{
												printf("Bizim Karakter:Kolay gelsin.Var m� bir haber?\n Adam:Beni takip edin efendim.\n");
												printf("T�ccar ile beraber gittin ve gitti�iniz yerde T�ccar Philip ile kar��lait�n.\n");
												printf("Bizim karakter: Merhaba T�ccar Philip umar�m g�zel haberler almak i�in geldim(hafif g�l�msemeler).\n T�ccar Philip:HEHEHEHE tabi ki efendim tam istedi�imi gibi oldu.Bu i�ten tam 10.000 alt�n kazand�k.\n\n\n");
												printf("T�ccar Philip:Size bu ticaretten verdi�iniz de�erin 3 kat�n� vermeyi teklif ediyorum.Cevab�n�z nedir?\n 1-Kabul et.\n 2-Kabul etme.\n");
												scanf("%d",&secim14);
												
												sayi = rand() % 3;
												sayi = sayi + 3;
												
												if(secim14 == 1)
												{
													printf("Bizim karakter:Peki.Kabul ediyorum.Bu g�zel ticaret i�in te�ekk�r ediyorum Philip.\n T�ccar Philip:Bende sizlere te�ekk�r ederim efendim tam zaman�nda sizin gibi birini buldum.Ayn� zamanda bu i�aret ile istedi�iniz zaman buraya gelebilirsiniz.\n");
													altin = 100 * 3;
													onur = onur + 10;
													printf("Alt�n�n�z: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else
												{
													printf("Bizim Karakter:Bu g�zel ticaret i�iin �ncelikle te�ekk�r ederim T�ccar Philip.Lakin bu teklif bana uymuyor.\n");
													printf("Teklif ver.");
													scanf("%d",&teklif);
													
													if(teklif <= sayi){
													printf("T�ccar Philip:Hehehe bu teklif biraz fazla oldu ama kabul ediyorum.\n");
													altin = 100 * teklif;
													onur = onur + 10;
													printf("Alt�n�n�z: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else{
													printf("T�ccar Philip:fendim bu teklif benim i�in �ok fazla.3 kat� hepimiz i�in en iyisi.\n");
								    				altin = altin * 3;
								    				printf("Alt�n�n�z: %d\n",altin);
												}
												}
											}
									
										if(secim13 == 2)
										{
											printf("Bizim karakter: Hay�r ilgilenmiorum te�ekk�rler.");
										}
									}
								}
								
								if(secim11 == 2)
								{
								   	printf("�lgilenmiyorum!!");
								}
							}
						}
				
				break;
				
				case 3:
					
					int bar,bar1;
					printf("Bara girdin konu�acak birka� ki�i var.\nHangisiyle konu�mak istersin?\n[1]\n[2]\n[3]\n");
					scanf("%d",&bar);
					if(bar==1)
					{
						printf("\n[1]Ka� [2]Odaya git");
						scanf("%d",&bar1);
						if(bar1==1)
						{
							printf("");
						}
						else if(bar1==2)
						{
							printf("");
						}
						else
						{
							printf("");
						}
					}
					else if(bar==2)
					{
						printf("");
					}
					else if(bar==3)
					{
						printf("");
					}
					else
					{
						printf("");
					}
				
				break;
				
				//case 3:
				
				case 4:
					
					printf("Ormana girdiniz.\n[1]Ok toplamak\n[2]Orman� ke�fetmek\n[3]Meyve toplamak\n[4]Orman�n derinliklerine gir\nNe yapmak istersiniz:");
					scanf("%d",&orman1);
					
					if(orman1==1)
					{
						Oorman=(rand()%15);
						printf("%d tane �ubuk buldun ve g�zel oklar yapt�n.\n",Oorman);
					}
					
					else if(orman1==2)
					{
						Korman=(rand()%25);
						
						if(Korman>20)
						{
							printf("Orman k�y�lar�nda gezerken bir meyve sepeti buldun.\n");
							printf("�tem eklenince meyve sepeti eklensin\n");
						}
						
						else if(Korman>15)
						{
							printf("Orman�n k�y�lar�nda gezerken bir kese alt�n buldun. K�sa g�n�n kar�.\n");
							altin=altin + 100;
							printf("Toplam alt�n�n�z: %d\n",altin);
						}
						
						else if(Korman>10)
						{
							printf("Orman�n k�y�s�nda gezerken ya�l� bir dedeye ras geldin. Yard�m istiyor yard�m eder misin?\n");
							printf("Yard�m ederse �ans g�re iyi veya k�t� bir �ey olsun\n");
						}
						
						else
						{
							printf("Ne bir �ey g�rd�n ne bir �eye rastlad�n bombo� bir g�n ge�irdin\n");
						}
					}
					
					else if(orman1==3)
					{
						printf("G�zel ve tatl� meyveler toplad�n\n");
						printf("�temler geldi�inde meyveler eklenmeli rastgelelikle meyveler bulsun\n");
					}
					
					else if(orman1==4)
					{
						//[21][11]

						printf("orman�n derinliklerine dal�yorsun burada bir s�r� pisli�in d�nd���ne dair dedikodular zihnini kurcal�yor.\n");
						printf("i�eri giriyorsun �imdi verece�in kararlar �ok �nemli ��nk�girdi�in her alanda ya seni �ld�recek risklere sahip bir yere girmi� olacaks�n ya da b�y�k �d�llere kavu�acaks�n\n");
						printf("ilk olarak derinlere fazla gidersen baz� canavarlarla kar��la�abilirsin o y�zden fazla uzakla�mad���ndan ve d�n�� yolunu bildi�inden emin ol\n");
						printf("gitti�in yolun tam tersine giderek ormandan ��kacaks�n dikkat et d�n�� yolunu unutursan ormanda �l�mle burun burunas�n\n");
						
						Osay1=0;
						
						while(Osay1<21)
						{
							Osay2=0;
							
							while(Osay2<21)
							{
								orman12[Osay1][Osay2]=0;
								Osay2++;
							}
							Osay1++;
						}
						Osay=1;
						yon=1;
						Oy=0;
						Ox=0;
						
						while(Osay!=0)
						{
						
						printf("ileri girmek i�in w\'ye bas\nsa�a gitmek i�ind\'ye bas\nsola gitmek i�in a\'ya bas\ngeri gitmek i�ins\'ye bas\ngeri d�nmek i�in g\'ye bas\nne yapmak istersin: ");
						scanf(" %c",&Osec);
						printf("%d\n",orman12[20-Oy][10+Ox]);
						
						
						
						if(yon==1)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("��kmak istiyorsun demek o zaman geldi�in yolu hat�rlay�p geri d�nmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==2)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("��kmak istiyorsun demek o zaman geldi�in yolu hat�rlay�p geri d�nmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==3)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("��kmak istiyorsun demek o zaman geldi�in yolu hat�rlay�p geri d�nmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==4)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya �nceden gelmi�sin ya da ba�kas� talan etmi�\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("��kmak istiyorsun demek o zaman geldi�in yolu hat�rlay�p geri d�nmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						if(yon==1)
						{
							printf(" \t\n\t/ \\\n\t |\n\t |\n\t |\n");
						}

						else if(yon==3)
						{
							printf("<-----\n");
						}

						else if(yon==2)
						{
							printf("        ----->\n");
						}

						else if(yon==4)
						{
							printf(" \t |\n\t |\n\t |\n\t |\n\t\\ /\n");
						}
						
						system("pause");
						}

						
						Osay=1;
						while(Osay!=0)
						{
							printf("ileri girmek i�in w\'ye bas\nsa�a gitmek i�ind\'ye bas\nsola gitmek i�in a\'ya bas\ngeri d�nmek i�in s\'ye bas\nne yapmak isteresin: ");
							scanf(" %c",&Osec);
	
							if(yon==1)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==2)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==3)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						else if(yon==4)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									printf("orman�n o kadar derinlerine dald�n ki kendini bir canavar�n ininin ��nde buldun ve canavar seni �oktan g�rm��t�. sava�maktan ba�ka �aren yok\n");
									DMcan=500,Dcan=500,Dsaldiri=50,saldiri=hasar/3,tur=0,Ddef=50;
									savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
									can=Darena[0];
									exp=Darena[1];
									altin=Darena[2];
									hasar=Darena[3];
									onur=Darena[4];
									Osay--;
								}
		
							}
							
							else
							{
								printf("galiba yanl�� bir tu�a bast�n\n");
							}
						}
						
						if(yon==1)
						{
							printf(" \t\n\t/ \\\n\t |\n\t |\n\t |\n");
						}

						else if(yon==3)
						{
							printf("<-----\n");
						}

						else if(yon==2)
						{
							printf("        ----->\n");
						}

						else if(yon==4)
						{
							printf(" \t |\n\t |\n\t |\n\t |\n\t\\ /\n");
						}
						
						if(Ox==9 || Ox==(-9) || Oy==20 || Oy==0)
						{
							Osay--;
						}
						system("pause");
						}
						if(orman12[20][10]==2)
						{
							printf("ba�ar�yla ormandan ��kt�n. tebrik ederim\n");	
						}
						else
						{
							printf("bir bek�i seni kurtard� ama o geceyi tek ba��na ge�irmenin ac�s�n� unutamayacaks�n ya seni bulmasayd�(ba�ka ihtimaller getir)\n");
						}
					}
					
				break;
				
				case 5:
					
					printf("B�y�c� �nine Girdiniz. Ne Yapmak �stersiniz?\n[1]B�y�c�den Tavsiye Al\n[2]B�y�c�ye Meydan Oku (Y�KSEK TEHL�KE)\n[3]B�y�c�den Ma�aran�n Anahtar�n� �ste\n");
					scanf("%d",&buyucusecimi);
					
					if(buyucusecimi==1)
					{
						altin=altin-10;
						printf("kalan alt�n�n�zz: %d",altin);
						printf("B�y�c�: Ne hakk�nda tavsiye almak istersin gen� adam?\n");
						printf("[1]�ksir Tarifi");
						printf("[2]B�y� ��renme");
						printf("[3]Silah Efsunlama");

						scanf("%d",&buyucutavsiyesecimi);
						
						if(buyucutavsiyesecimi==1)
						{
							printf("Ne �ksirinin Tarifini istiyorsun?\n");
							printf("[1]G�r�nmezlik(500G)\n[2]G��(250g)\n[3]Sa�l�k\n(100G)");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								//altin=altin-500;
								//printf("kalan alt�n�n�zz: %d",altin);
								printf("Tarifi �u:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi �u:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi �u:");
							}
						}
						
						else if(buyucutavsiyesecimi==2)
						{
							printf("Ne B�y�s� ��renmek istiyorsun?\n");
							printf("[1]Alevtopu(1000G)\n[2]�yile�tirme(700G)\n[3]Stamina Yenileme(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Alevtopu B�y�s�n� ��rendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("�yile�tirme B�y�s�n� ��rendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Stamina Yenileme B�y�s�n� ��rendiniz.\n");
							}
						}
						
						else if(buyucutavsiyesecimi==3)
						{
							printf("K�l�c�na Ne Efsunu Yapt�rmak istiyorsun?\n");
							printf("[1]Alevleme(2000G)\n[2]Zehir(1200g)\n[3]Dayan�kl�l�k(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Silah�n�za Alevleme Efsununu Yapt�rd�n�z.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silah�n�za Zehir Efsununu Yapt�rd�n�z.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silah�n�za Dayan�kl�l�k Efsununu Yapt�rd�n�z.\n");
							}
						}
					}
					
					
					else if(buyucusecimi==2)
					{
						int buyucusavassecimi;
						buyucuhasar=hasar*2;
						buyucucan=can*5;
						int magarayaatilma=0;
						
						printf("Yerinden Kalkan B�y�c�n�n G�zlerindeki Par�lt�y� G�r�nce ��in �rperdi.\n");
						printf("�ok Belal� Bir ��e Giri�tin... \n B�y�c�ye Meydan Okumadan �nce �ki Kere D���nmen Gerekirdi\n Ne Yapmak �stiyorsun?\n [1]Sald�r\n [2]Ka�\n [3]Ba���lanma Dile\n");
						scanf("%d",&buyucusavassecimi);
						
						if(buyucusavassecimi==1)
						{
						
							can=can-buyucuhasar;
							printf("Kalan Can�n:%d\n",can);
							
							buyucucan=buyucucan-hasar;
							printf("B�y�c�n�n Kalan Can�:%d\n",buyucucan);
						}
						
						else if(buyucusavassecimi==2)
						{
							buyucumanahtar=2;
							printf("Kimse Bu Kadim B�y�c�ye Meydan Okuyup da Ondan Ka�abilmi� De�ildir.\n B�y�c� Senin �aresiz Ka����na Biraz Ac�m�� Olacak ki Seni �ld�rmek Yerine Ma�aran�n ��ine F�rlat�p Kap�y� Kitledi.\n Art�k Bu Ma�aradan Ka����n Senin Elinde.\n");
						}
						
						else if(buyucusavassecimi==3)
						{
							printf("Onurunu Bir Kenara B�rakt�n Ve B�y�c�den Ba���lanma Diledin...\n B�y�c� Seni Bu Seferlik Affetmeye Karar Verdi.\n Birdaha Bula�maman Kayd�yla Tabii.\n");
						}
					}
					
					else if(buyucusecimi==3)
					{
						buyucurng=(rand()%101);
						
						if(buyucurng>=50)
						{
							printf("B�y�c�yle Biraz Tart��t�n�z Ve Sonunda Sana Ma�aran�n Anahtar�n� �d�n� Vermeye Raz� Oldu.\n");
							buyucumanahtar=1;
						}
						
						else
						{
							printf("B�y�c� Kesinlikle Ma�araya Girmene Kar�� ��kt� Ve Seni Ma�aradan Kovdu.\n");
							break;
						}
					}
					
					if(buyucumanahtar==1)
					{
						printf("Sonunda �u Halk Aras�ndaki Me�hur Ma�araya Girebildin.\nMa�aran�n ��inde Biraz �lerledin Ve Kar��na �ki Yol Ayr�m� ��kt�.\nSa� a M� Gideceksin Sol a M�?\n[1]Sa�\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sa�'a Gittin...\nBiraz �lerledin ve Kar��na Efsunlu Bir K�pek ��kt�.\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							can=can-25;
							printf("Biraz Daha �lerledin Ve Kar��na Efsunlu Bir Goblin ��kt�...\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							printf("Y�r�meye Devam Ettin Ve Ma�aran�n ��k���n� Buldun Do�ru Y�nde �lerledi�in ��in �ansl�s�n.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz �lerledin ve Kar��na Efsunlu Bir Ay� ��kt�.\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							can=can-15;
							printf("Biraz Daha �lerledin Ve Kar��na Efsunlu Bir Y�lan ��kt�...\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							printf("Y�r�meye Devam Ettin Ve Yolun ��kmaza Girdi...\nGeri D�nd�n Ve Sa�a �lerledin.\nYaral� Oldu�un ��in Kar��na ��kan Yarat�klar�n Yan�ndan Ko�arak Ge�ip Onlar� Atlatt�n ve Sonunda ��k��a Varabildin.\n");
							//burada kazand��� e�yalar ve alt�n yaz�l�p eklenecek �uan bu s�r�mde alt�n olmad��� i�in ekleyemedim.
						}
					}
					
					else if(buyucumanahtar==2)
					{
						can=can/2;
						printf("B�y�c� Seni Ma�aran�n ��ine Baya Bir Sert F�rlatm�� Olacak ki, Bilincini Kaybetmi�sin Ve Yaralanm��s�n.\n Kalan Can�n:%d\n",can);
						printf("Ma�aran�n ��inde Biraz �lerledin Ve Kar��na �ki Yol Ayr�m� ��kt�.\nSa� a M� Gideceksin Sol a M�?\n[1]Sa�\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sa�'a Gittin...\nBiraz �lerledin ve Kar��na Efsunlu Bir K�pek ��kt�.\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							can=can-25;
							printf("Biraz Daha �lerledin Ve Kar��na Efsunlu Bir Zombi ��kt�...\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							printf("Y�r�meye Devam Ettin Ve Ma�aran�n ��k���n� Buldun Do�ru Y�nde �lerledi�in ��in �ansl�s�n.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz �lerledin ve Kar��na Efsunlu Bir Ay� ��kt�.\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							can=can-15;
							printf("Biraz Daha �lerledin Ve Kar��na Efsunlu Bir Y�lan ��kt�...\nOnla Sava�t�n...\nKalan Can�n:%d",can);
							printf("Y�r�meye Devam Ettin Ve Yolun ��kmaza Girdi...\nGeri D�nd�n Ve Sa�a �lerledin.\nA��r Yaral� Oldu�un ��in Kar��na ��kan Yarat�klar�n Yan�ndan Ko�arak Ge�ip Onlar� Atlatt�n ve Sonunda ��k��a Varabildin.\n");
							//�stteki ayn� �ekilde
						}
					}
					
				break;
				
				case 6:
					
					printf("�ntihar Ma�aras�na girdin\n");
					printf("Ma�ara �ok so�uk\nNe yapacaksan yap �abuk yap!!\n");
					while(intmagara!=0){
						
						if(intmagaradancikis==1){
							break;
						}
						
						printf("[1]Ma�aran�n derinliklerine gir\n");
						printf("[2]Geri d�n\n");
						scanf("%d",&intmagarayolsecim1);
						system("CLS");
						if(intmagarayolsecim1==1){
							printf("Verdi�in nefesin buhar olarak havada yay�ld���n� g�r�yorsun. Yol 3'e ayr�l�yor.\n");
							printf("Sol taraftan gelen bir �����n oldu�unu farkediyor\nSa� tarafta ise hi�bir �����n olmad���n�, sadece birka� ipin oldu�unu g�r�yorsun\n");
							while(intmagara!=0){
								
								if(intmagaradancikis==1){
									break;
								}
								
								printf("Ne yapacaks�n?\n");
								printf("[1]D�z git\n"); //�kiye ayr�l�yor
								printf("[2]Sola git\n"); //Ate�
								printf("[3]Sa�a git\n"); //�p
								printf("[4]Geri d�n\n");
								scanf("%d",&intmagarayolsecim2);
								system("CLS");
								if(intmagarayolsecim2==1){ //D�z
									while(intmagara!=0){
										
										if(intmagaradancikis==1){
											break;
										}
										
										printf("Yol ikiye ayr�l�yor\n[1]Sola git\n[2]Sa�a git\n[3]Geri d�n\n");
										scanf("%d",&intmagarasecim2);
										system("CLS");
										
										if(intmagarasecim2==1){ //Y�lanlara gider
										
											if(intmagaragorevi1==1 || intmagaragorevi1==2){
												printf("Bu yol ihtiyar�n s�yledi�ine g�re y�lanlar�n oldu�u yere a��l�yor\n");
												system("PAUSE");
												system("CLS");
											}
											
											else if(intmagaragorevi1==0){
												printf("tssssssssssssss...\n");
												system("PAUSE");
												system("CLS");
												printf("-Lanet olsun. Bu sesler hi� ho� de�il\n");
												system("PAUSE");
												system("CLS");
												printf("Bu seslerin y�lan sesi oldu�unu farkediyorsun\nBuraya girmek olduk�a tehlikeli olmal�...\n");
												system("PAUSE");
												system("CLS");
											}
											
											while(intmagara!=0){
												printf("Ne yapacaks�n?\n[1]Y�lan yumurtas� �al\n[2]Y�lan kes\n[3]Y�lanlarla Konu�\n[4]Kendini y�lanlar�n aras�na at\n[5]Geri d�n\n");
												scanf("%d",&intmagarayilan);
												system("CLS");
												
												if(intmagarayilan==1){ //Y�lan yumurtas�n� �al
													
													if(intyilanyumurtasialmahakki==1){
														printf("Bug�nk� hakk�n� kulland�n!\n");
														continue;
													}
													
													intyilanyumurtasialmahakki=1;
													
													if(kediotu==0){
														printf("Yan�nda kediotu olmadan y�lanlara yakla��yorsun\nOnlar ortama g�re renk de�i�tirirler\nBu y�zden ad�mlar�n� dikkatli atmal�s�n\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtalar� g�rd�n!\nYakla��yorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtalara ula�man 3 ad�m�n� alacak\n");
														system("PAUSE");
														system("CLS");
														srand(time(NULL));
														intmagarayilansans1=rand()%10;
														
														printf("1.ADIM\n\n");
														
														if(intmagarayilansans1>=0 && intmagarayilansans1<5){
															printf("G�zel, hi�biri seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana sald�r�yor\n");
															system("PAUSE");
															system("CLS");
															//D�V�� EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilansans2=rand()%10;
														
														printf("2.ADIM\n\n");
														
														if(intmagarayilansans2>=0 && intmagarayilansans2<5){
															printf("G�zel, hi�birisi seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana sald�r�yor\n");
															system("PAUSE");
															system("CLS");
															//D�V�� EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilansans3=rand()%10;
														
														printf("3.ADIM\n\n");
														
														if(intmagarayilansans3>=0 && intmagarayilansans3<5){
															printf("G�zel, hi�birisi seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana sald�r�yor\n");
															system("PAUSE");
															system("CLS");
															//D�V�� EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilanyumurtasayisi=rand()%10;
														intmagarayilanyumurtasayisi+=2;
														printf("Sonunda yumurtalar�n yan�na vard�n\n");
														
														while(intmagara!=0){
															printf("%d tane y�lan yumurtas� g�r�yorsun\nKa� tane alacaks�n?\n",intmagarayilanyumurtasayisi); //�LER�DE HEPS�N� ALAMAMASI ���N �ANTA A�IRLI�I OLACAK
															scanf("%d",&intalinanyumurtasayisi);
															system("CLS");
															
															if(intalinanyumurtasayisi>intmagarayilanyumurtasayisi || intalinanyumurtasayisi<=0){
																printf("Bu m�mk�n de�il!!\n");
															}
															
															else{
																
																intmagarayilanyumurtasayisi-=intalinanyumurtasayisi;
																yilanyumurtasi+=intalinanyumurtasayisi;
																printf("%d tane yumurta ald�n\nKalan yumurta say�s�: %d\n",intalinanyumurtasayisi,intmagarayilanyumurtasayisi);
																system("PAUSE");
																system("CLS");
																
																if(intalinanyumurtasayisi>=2 && intmagaragorevi1==2){
																	printf("G�zel!\n�imdi ihtiyara gidip 2 y�lan yumurtas�n� verebilirsin\n");
																	intmagaragorevi1=3;
																}
																
																break;
															}
														
														}
														
														printf("Burada i�in bitti�ine g�re h�zla d��ar� ��k�yorsun\n");
														system("PAUSE");
														system("CLS");
														
													}
													
													else if(kediotu==1){
														printf("");
													}
													
												}
												
												else if(intmagarayilan==2){ //Y�lan kes
													printf("Hadi Ba�layal�m!\n"); //D�V�� EKLENECEK *****************************************
													break;
												}
												
												else if(intmagarayilan==3){ //Y�lanlarla konu�
													
													if(intsurungenlekonusmayetenegi==1){ //Y�lanla konu�
														printf("EKLENECEK\n"); //YILANLA KONU�MA EKLENECEK **************************************
													}
													
													else{ //Y�lanla konu�amama
														printf("Y�lanlarla konu�mak i�in s�r�ngen dilini ��renmelisin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
												}
												
												else if(intmagarayilan==4){ //YILANLARA �L
													printf("Yolun sonuna geldik %s...\n",isim);
													system("PAUSE");
													system("CLS");
													printf("Karar�n� verdin.\nBirden fazla �l�m Y�lan�n�n zehrini damarlar�nda hissetmen sadece birka� saniye ald�\n");
													printf("Can�n �ok yand�. Ama sonunda...\n");
													system("PAUSE");
													system("CLS");
													printf("--------------------------------------\nBu ac�mas�z hayata g�zlerini yumdun...\n--------------------------------------\n");
													printf("Toplam Ge�irilen G�n: %d\n",gun); //G�N� EKLE
													printf("Tamamlanan G�revler: %d/%d\n");
													printf("Kazand���n Para: %d\n");
													printf("Harcad���n Para: %d\n");
													printf("--------------------------------------\n");
													printf("Yolun sonuna geldik %s...\n",isim);
													return 0;
												}
												
												else if(intmagarayilan==5){ //Geri d�n
													printf("Mant�kl� bir se�im...\n");
													system("PAUSE");
													system("CLS");
													break;
												}
												
											}
				
										}
										
										else if(intmagarasecim2==2){ //Ma�aradan ��k��
											printf("Sa�dan ilerledik�e bir g�z�ne yo�un bir ���k geliyor\nBuras� ma�aran�n ��k��� olmal�\n");
											while(intmagara!=0){
												printf("Ne Yapacaks�n?\n[1]Ma�aradan ��k\n[2]Geri d�n\n");
												scanf("%d",&intmagarasecim6);
												system("CLS");
												
												if(intmagarasecim6==1){
													printf("Ma�aradan ��kt�n.\n");
													intmagaradancikis=1;
													break;
												}
												
												else if(intmagarasecim6==2){
													break;	
												}
												
											}
										
										}
										
										else if(intmagarasecim2==3){ //Geri d�n
											break;
										}
										
									}
									
								}
								
								else if(intmagarayolsecim2==2){ //Sol
									
									if(intmagarasolsecimi==0){
										printf("Sol taraftan ilerledik�e bir s�cakl�k geldi�ini hissediyorsun\n");
										printf("Art�k daha ayd�nl�k\nBir dakika\nNeden ���l�k sesleri geliyor?\n");
										system("PAUSE");
										system("CLS");
										printf("Biraz daha ilerledik�e s�cakl�k, ayd�nl�k ve anlam veremedi�in �ekilde ���l�k sesleri art�yor\n");
										system("PAUSE");
										system("CLS");
									}
									
									intmagarasolsecimi=1;
									
									while(intmagara!=0){
										printf("Bir kap� g�rd�n\n[1]Kap�ya do�ru git\n[2]D�z git(�ntihar et)\n[3]Geri d�n\n");
										scanf("%d",&intmagarasecim3);
										system("CLS");
										
										if(intmagarasecim3==1){ //Kap�ya gitmek
											srand(time(NULL));
											intmagaraalevsans1=rand()%10;
											
											if(intmagaraalevsans1>=0 && intmagaraalevsans1<5){ //�ansa yakalanmad�
												srand(time(NULL));
												intmagaraalevsans2=rand()%10;
												
												if(intmagaraalevsans2>=0 && intmagaraalevsans2<5){
													printf("Olamaz! Kap� a��l�yor...\n");
													system("PAUSE");
													system("CLS");
													printf("Kap� a��l�rken aniden kap�n�n arkas�na sakland�n\nD��ar�ya koyu tonlarda k�yafet giymi�, uzun boylu biri ��kt� ve ko�arak g�zden kayboldu\n");
													printf("Tam olarak ne oldu�unu tan�mlayamasan da insana benzedi�i a�ikar\n");
													system("PAUSE");
													system("CLS");
													printf("Aceleyle ��kt��� i�in kap�y� a��k b�rakt�\n");
												}
												
												else{
													printf("Kap�n�n a��k oldu�unu g�rd�n\n");
													system("PAUSE");
													system("CLS");
												}
												
												printf("Hemen kap�dan i�eri girdin ve ma�aran�n devam etti�ini g�rd�n\n");
												printf("Yerde bir merdiven var. Buras� a�a�� iniyor\n");
												system("PAUSE");
												system("CLS");
												while(intmagara!=0){
													printf("Se�imini Yap\n");
													printf("[1]Merdivenden a�a�� in\n[2]D�z git\n[3]Geri d�n\n");
													scanf("%d",&intmagaraalevsecim1);
													system("CLS");
													
													if(intmagaraalevsecim1==1){ //Merdivenden in
														printf("Merdivenden a�a�� iniyorsun\n");
														printf("Ortal�kta hi�kimse yok\nSadece 1 adet sand�k ve bir masa �zerinde yar�m �arap �i�esi...\n");
														system("PAUSE");
														system("CLS");
														printf("Sand���n kilitli oldu�unu g�r�yorsun\n");
														
														if(intmagaragorevi1==4 && intmagararuyaittirme==0){
															
															while(intmagara!=0){
																printf("[1]Sand��� ittir\n[2]Vazge�\n");
																scanf("%d",&intmagarasecim9);
																system("CLS");
																
																if(intmagarasecim9==1){
																	printf("Sand��� bo� bir yere do�ru ittiriyorsun ve a�a�� a��lan bir yolun oldu�unu g�r�yorsun\n");
																	intmagararuyaittirme=1;
																	break;
																}
																
																else if(intmagarasecim9==2){
																	break;
																}
																
															}
															
														}
														
														if(intmagararuyaittirme==1){
															while(intmagara!=0){
																printf("[1]A��lan yoldan git\n[2]Vazge�\n");
																scanf("%d",&intmagarasecim10);
																system("CLS");
																
																if(intmagarasecim10==1){
																	printf("�lerledik�e etrafa mavi ye�il ve sar� ���k veren bir�ok �i�ek t�r� g�r�yorsun\n");
																	printf("Bir ma�arada bunlar�n olmas� garip...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("�leride bir adam var ve bo� bo� duvara bak�yor\n");
																	printf("Onunla ileti�ime ge�emiyorsun\n(�LER�DE G�REV OLARAK EKLENECEK)\n"); //YEN� B�R G�REV
																}
																
																else if(intmagarasecim10==2){
																	break;
																}
				
															}
															
														}
														
														while(intmagara!=0){
															printf("[1]Sand��� a�\n[2]Sand��� zorla\n[3]Masay� incele\n[4]Yukar� ��k\n");
															scanf("%d",&intmagaraalevsecim2);
															system("CLS");
														
															if(intmagaraalevsecim2==1){ //Sand���n kilidini a�
																
																if(intmagarasandiksayaci==0){
																	
																	if(intalevanahtar==1){ //Sand�klar�n kilidini a�
																		printf("Sand��� a�t�n!!\n");
																		printf("Sand�ktan 50 adet Tahta Ok ve 1 adet Uzun K�l�� ald�n\n");
																		ok[0]+=50;
																		kil[1]=1;
																		intmagarasandiksayaci=1;
																	}
																	
																	else{ //Anahtars�z a�maya �al��mak
																		printf("Anahtar olmadan kilidi a�amazs�n\n");
																	}
																	
																}
																
																else{ //Sand�k zaten a��lm��
																	printf("Sand�ktaki her �eyi toplad�n!\n");
																}
															
															}
															
															else if(intmagaraalevsecim2==2){ //Sand�klar� zorla
																printf("Sand��� t�m g�c�nle zorlad�n ama ba�aramad�n\nHatta biraz ses yapt�n\n");
																srand(time(NULL));
																intmagarasandiksans=rand()%10;
																
																if(intmagarasandiksans==0){
																	printf("Sand��� a�amaman yetmezmi� gibi bir de bile�ine zarar verdin\n");
																	can-=10;
																	printf("10 Can Azald�!!\n");	
																}
																
																else if(intmagarasandiksans==1){
																	printf("Sand��� a�amaman yetmezmi� gibi bir de parma��na zarar verdin\n");
																	can-=10;
																	printf("10 Can Azald�!!\n");	
																}
																
																else if(intmagarasandiksans==2){
																	printf("Sand��� a�amaman yetmezmi� gibi bir de beline zarar verdin\n");
																	can-=10;
																	printf("10 Can Azald�!!\n");	
																}
																
															}
															
															else if(intmagaraalevsecim2==3){ //Masay� incele
																printf("Masaya ��yle iyice bir bak�nca �i�elerin alt�nda s�k��t�r�lm�� bir ka��t par�as� buldun\n");
																printf("Ka��d� okumaya ba�lad�n...\n");
																system("PAUSE");
																system("CLS");
																printf("------------------------------------HAFTALIK RAPOR------------------------------------\n");
																printf("��: Su�lular�n Cezaland�r�lmas�\n");
																printf("Konum: �ntihar Ma�aras� 1.Kat / 1.Oda\n");
																printf("1.Ki�i'nin ��ledi�i Su�: H�rs�zl�k (12800 Alt�n)\n");
																printf("2.Ki�i'nin ��ledi�i Su�: �ar��da kavga ��karma ve iki ki�inin �l�m�ne sebep olma\n");
																printf("3.Ki�i'nin ��ledi�i Su�: Arena'da hile yapma\n");
																printf("Cezaland�rma i�lemi: Canl� canl� yakma\n");
																printf("Rapor No: 10041\n");
																printf("--------------------------------------Q9822VMR5---------------------------------------\n");
																system("PAUSE");
																system("CLS");
																
																printf("Ka��d� okuyunca �rperdin\nBurada daha fazla kalman�n mant���n� bulmaya �al���yorsun\nMerak hayat�ndan �nemli mi?\n");
																system("PAUSE");
																system("CLS");
																printf("Bir s�ylentiye g�re bu raporda yaz�lan ki�iler sadece su�lular�n yuzde 1'i\n");
																system("PAUSE");
																system("CLS");
																
																if(intalevanahtar==0){
																	printf("Ka��d� yerine b�rakt�n ve �arap �i�esini incelemeye ba�lad�n\n�i�eyi biraz sallay�nca i�inde bir �ey oldu�unu anlad�n\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Tabi ya, anahtar!\n");
																	printf("Anahtar� buldun!\n");
																	intalevanahtar=1;
																	system("PAUSE");
																	system("CLS");
																}
															}
															
															else if(intmagaraalevsecim2==4){ //Yukar� ��k
																break;
															}
															
														}
														
													}
													
													else if(intmagaraalevsecim1==2){ //D�z git
														
														intmagarahizlakac=0;
														
														printf("�lerledik�e ���l�klar art�yor\n");
														
														if(intalevanahtar==1){
															printf("O ka��t par�as�n� okuduktan sonra bu ���l�klar�n nereden ve kimden geldi�ini daha iyi anl�yorsun\n");
														}
														
														system("PAUSE");
														system("CLS");
														printf("�lerlerken b�y�k�e bir �iyan yolunu kesti\n");
														
														if(intboceklekonusmayetenegi==1){
															printf("B�cekle konu�\n");
														}
														
														else{
															printf("B�cek�e bilmedi�in i�in onunla ileti�ime ge�emiyorsun\n�iyan yolundan �ekiliyor\n");
															system("PAUSE");
															system("CLS");
														}
														
														printf("4 tane koyu renk k�yafetli insans� yarat�klar g�r�yorsun\nAma burada durduk�a ba��n a�r�yor\n");
														printf("��nk� bu ���l�k sesleri dayan�lacak gibi de�il\nYoksa...\n");
														system("PAUSE");
														system("CLS");
														printf("Evet. Bu yarat�klar ya insan de�il ya da sa��r\nHen�z ��zemedin\n");
														system("PAUSE");
														system("CLS");
														printf("Su�lular�n cezas�n� vermekle y�k�ml�ler g�r�ld��� �zere...\nManzara korkun�\n");
														printf("�nsanlar� canl� canl� ate�e atmaktan ba�ka bir �ey yapm�yorlar �u anda\n");
														system("PAUSE");
														system("CLS");
														printf("O da ne!!\nAralar�ndan biri seni g�rd�!!\n");
														printf("[1]Ka�\n[2]Kendini savun\n");
														
														scanf("%d",&intmagaraalevsecim3);
														system("CLS");
														
														if(intmagaraalevsecim3==1){
															printf("H�zla uzakla��yorsun\nKap�n�n oldu�u yere geri geldin\n");
															
															while(intmagara!=0){
																
																if(intmagarahizlakac==1){
																	break;
																}
																
																printf("[1]Merdivenden in\n[2]Biraz soluklan\n");
																scanf("%d",&intmagaraalevsecim4);
																system("CLS");
																
																if(intmagaraalevsecim4==1){
																	printf("H�zla merdivenden a�a�� indin\n");
																	system("PAUSE");
																	system("CLS");
																	printf("[1]Sand��a saklan\n[2]�arap �i�esini insans�n�n kafas�nda patlat\n");
																	scanf("%d",&intmagaraalevsecim5);
																	system("CLS");
																	
																	while(intmagara!=0){
																		
																		if(intmagaraalevsecim5==1){
																		
																			if(intmagarasandiksayaci==1){
																				printf("Sand��a sakland�n ve bir s�re bekledin\nO aptal insans� seni bulamad�\n");
																				printf("H�zla yukar� ��k�yorsun...\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{
																				printf("Sand�k kilitli!!\n�nsans� h�zla merdivenden indi\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				printf("Bir pen�e darbesi ald�n\n");
																				can-=20;
																				
																				if(can>=50){ //Yara s�y�rd� kalk�p devam etti
																					printf("Yara s�y�rd��� i�in fazla zarar g�rmeyip insans�y� ittin ve yere d��t�\nHemen oradan uzakla�t�n\n");	
																					system("PAUSE");
																					system("CLS");
																					break;
																				}
																				
																				else{ //Yere d��t� bay�ld�
																					printf("Yere d��t�n, dayanamay�p bay�ld�n\n"); //D�ZENLENECEK REH�N ALINACAK ********************
																					return 0;
																				}
																				
																			}
				
																		}
																		
																		else if(intmagaraalevsecim5==2){
																			printf("�nsans� merdivenden indi�i gibi kafas�nda �i�eyi patlatt�n\nH�zla yukar� ��kt�n...\nPe�inde kimse yok art�k...\n");
																			system("PAUSE");
																			system("CLS");
																			intmagarahizlakac=1;
																			break;
																		}
																		
																		else{
																			printf("Yanl�� bir hareket yapman�n s�ras� de�il!\n");
																			system("PAUSE");
																			system("CLS");
																			printf("Bir pen�e darbesi ald�n\n");
																			can-=20;
																			system("PAUSE");
																			system("CLS");
																			printf("-20 Can\n");
																			system("PAUSE");
																			system("CLS");
																			
																			if(can>=20){ //Yara s�y�rd� kalk�p devam etti
																				printf("Yara s�y�rd��� i�in fazla zarar g�rmeyip insans�y� ittin ve yere d��t�\nYukar� ��kt�n\nG�r�n��e g�re pe�ini b�rakt�lar\n");	
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{ //Yere d��t� bay�ld�
																				printf("Yere d��t�n, dayanamay�p bay�ld�n\n"); //D�ZENLENECEK REH�N ALINACAK **************************
																				return 0;
																			}
																			
																		}
																		
																	}
																	
																}
																
																else if(intmagaraalevsecim4==2){ //Soluklan
																	printf("Biraz solukland�ktan sonra pe�inden kimsenin gelmedi�ini farkettin\n");
																	break;
																}
																
																else{
																	printf("Yanl�� bir hareket yapman�n s�ras� de�il!\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Bir pen�e darbesi ald�n\n");
																	can-=20;
																	system("PAUSE");
																	system("CLS");
																	printf("-20 Can\n");
																	system("PAUSE");
																	system("CLS");
																	
																	if(can>=20){ //Yara s�y�rd� kalk�p devam etti
																		printf("Yara s�y�rd��� i�in fazla zarar g�rmeyip insans�y� ittin ve yere d��t�\nG�r�n��e g�re pe�ini b�rakt�lar\n");	
																		system("PAUSE");
																		system("CLS");
																		break;
																	}
																	
																	else{ //Yere d��t� bay�ld�
																		printf("Yere d��t�n, dayanamay�p bay�ld�n\n"); //D�ZENLENECEK REH�N ALINACAK **************************
																		return 0;
																	}
																	
																}
															
															}
															
														}
														
														else if(intmagaraalevsecim3==2){ //Kendini savun D�V�� EKLENECEK **************
															printf("KEND�N� SAVUNMA EKLENECEK\n");
														}
														
														else{
															printf("Yanl�� bir hareket yapman�n s�ras� de�il!\n");
															system("PAUSE");
															system("CLS");
															printf("Bir pen�e darbesi ald�n\n");
															can-=20;
															system("PAUSE");
															system("CLS");
															printf("-20 Can\n");
															system("PAUSE");
															system("CLS");
																	
															if(can>=20){ //Yara s�y�rd� kalk�p devam etti
																printf("Yara s�y�rd��� i�in fazla zarar g�rmeyip insans�y� ittin ve yere d��t�\nHemen oradan uzakla�t�n\n");	
																system("PAUSE");
																system("CLS");
																break;
															}
																
															else{ //Yere d��t� bay�ld�
																printf("Yere d��t�n, dayanamay�p bay�ld�n\n"); //D�ZENLENECEK REH�N ALINACAK **************************
																return 0;
															}
															
														}
															
													}
													
													else if(intmagaraalevsecim1==3){ //Geri d�n
														break;
													}
													
												}
											}
											
											else{ //�ansa yakaland�
												
												if(intmagarateklif1sayac==0){
													printf("Olamaz! Kap� bir anda a��l�yor...\n");
													system("PAUSE");
													system("CLS");
													printf("�anss�zs�n!\nO insans� yarat�k seni farketti\nAma sald�rmak yerine konu�may� tercih etti\n");
													system("PAUSE");
													system("CLS");
													printf("-Hey! Sen kimsin?\n");
													system("PAUSE");
													system("CLS");
													printf("-Ben %s. Peki sen kimsin?\n",isim);
													system("PAUSE");
													system("CLS");
													printf("-Sen benimle dalga m� ge�iyorsun? Buraya gelen bir yabanc�n�n aptal olmas� gerekir.\nBuraya geldiysen bunun bir bedeli olacak.\n");
													system("PAUSE");
													system("CLS");
													printf("-Anla��ld�, seninle fazla konu�ulmuyor. Teklifin ne?\n");
													system("PAUSE");
													system("CLS");
													printf("-Bana 50 alt�n ver, bu konuyu kapatal�m. Ha, bu arada, o kap�dan i�eri girmeye �al��ma sak�n.\nE�er bir daha seni buralarda g�r�rsem teklif olmayacak!\n");
													system("PAUSE");
													system("CLS");
													printf("-D���nmeme izin ver...\n");
													system("PAUSE");
													system("CLS");
													while(intmagara!=0){
														printf("[1]Teklifi kabul et(-50 Alt�n)\n[2]Teklifi reddet(+40 Onur)\n");
														scanf("%d",&intmagarateklif1);
														system("CLS");
														
														if(intmagarateklif1==1){
															printf("-Tamam, teklifi kabul ediyorum.\n");
															altin-=50;
															system("PAUSE");
															system("CLS");
															printf("-50 Alt�n\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-G�zel, ak�ll� insanlar� severim. Bir daha seni buralarda g�rmeyim.\n");
															system("PAUSE");
															system("CLS");
															break;
														}
														
														else if(intmagarateklif1==2){
															printf("-Ne oldu�u belli olmayan biri i�in de�il 50 alt�n, 1 alt�n bile harcamam.\n");
															onur+=40;
															printf("+40 Onur\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-Peki yabanc�. Fazlas�yla cesursun. Ancak cesaretle aptall�k aras�nda ince bir �izgi vard�r bilir misin?\nAptallar haketti�ini bulsun o zaman!\n");
															printf("(K�l�c�n� ��kar�r)\n");
															system("PAUSE");
															system("CLS");
															printf("D�V�� EKLENECEK\n"); //D�V�� EKLENECEK
															break;
														}
														
														else{
															printf("�nsans� sinirlenmeye ba�l�yor\n");
															system("PAUSE");
															system("CLS");
														}
														
													}
													
													break;
													
												}
												
												else{
													printf("-Yine mi sen! Gel bakal�m.\n");
													printf("(K�l�c�n� ��kar�r)\n");
													system("PAUSE");
													system("CLS");
													printf("D�V�� EKLENECEK\n"); //D�V�� EKLENECEK
													break;	
												}
												
											}
											
										}
										
										else if(intmagarasecim3==2){ //Alev �l�m
											printf("Y�r�d�k�e ���l�k seslerinin azald���n�, ancak ayd�nl���n artt���n� farkediyorsun\n");
											system("PAUSE");
											system("CLS");
											printf("Ve i�te geldin. Kendini alevlerin ortas�na atacaks�n\n");
											printf("Hayat�n g�z�n�n �n�nden ge�iyor. Ba�ar�lar�n, ba�ar�s�zl�klar�n...\n");
											system("PAUSE");
											system("CLS");
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Kendini alevlerin ortas�na att�n. Belki de birileri duymu�tur son ���l�klar�n�...\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu ac�mas�z hayata g�zlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Ge�irilen G�n: %d\n",gun); //G�N� EKLE
											printf("Tamamlanan G�revler: %d/%d\n");
											printf("Kazand���n Para: %d\n");
											printf("Harcad���n Para: %d\n");
											printf("--------------------------------------\n");
											return 0;
											
										}
										
										else if(intmagarasecim3==3){ //Geri d�n
											break;
										}
									
									}
									
								}
								
								else if(intmagarayolsecim2==3){ //Sa�
									printf("Sa�a do�ru hareket ettin\n");
									while(intmagara!=0){
										printf("[1]Hemen bir ip bul ve sonsuzlu�a kavu�\n[2]Etrafta biraz gezin\n[3]Geri d�n\n");
										scanf("%d",&intmagarasecim4);
										system("CLS");
										
										if(intmagarasecim4==1){ //�p �l�m
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Karar�n� verdin. Ac�s�z bir �l�m oldu\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu ac�mas�z hayata g�zlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Ge�irilen G�n: %d\n",gun); //G�N� EKLE
											printf("Tamamlanan G�revler: %d/%d\n");
											printf("Kazand���n Para: %d\n");
											printf("Harcad���n Para: %d\n");
											printf("--------------------------------------\n");
											printf("Yolun sonuna geldik %s...\n",isim);
											return 0;
										}
										
										else if(intmagarasecim4==2){ //Gezin
										
											if(intmagaragezinsecimi==0){
												printf("Bir me�ale buldun ve art�k etraf� daha iyi g�r�yorsun\n");
												printf("Korkun� bir manzara...\nHeryerde ipe as�lm�� koca hayatlar...\n");
												printf("Biraz gezindikten sonra birdenbire konu�ma sesleri duyuyorsun\n");
											}
											
											intmagaragezinsecimi=1;
											
											while(intmagara!=0){
											
												if(intmagaragorevi1==0){
													printf("[1]Sese do�ru git\n[2]Gezinmeye devam et\n[3]Geri d�n\n");
												}
											
												else{
													printf("[1]�htiyar B�y�c�n�n yan�na git\n[2]Gezinmeye devam et\n[3]Geri d�n\n");	
												}
											
												scanf("%d",&intmagarasecim5);
								            	system("CLS");
												
												if(intmagarasecim5==1){ //Sese git y�lan g�revi
													if(intmagaragorevi1==0){ //Ma�ara g�revi yap�lmad� ilk defa gelindi 
														printf("Ma�aran�n i�inde ilerledik�e sesleri daha net duyuyorsun\n�rpertici\n");
														printf("Oraya gitmek istedi�inden emin misin?\n[1]Devam et\n[2]Ayr�l\n");
														scanf("%d",&intmagaragorevkarar);
														system("CLS");
														
														if(intmagaragorevkarar==1){ //G�reve gir
															printf("Gelen seslerin insan sesi oldu�unu anl�yorsun ama konu�an her kimse senin bilmedi�in bir dili konu�uyor\n");
															printf("En son �ocuklu�unda bu dili duymu�tun\n");
															system("PAUSE");
															system("CLS");
															printf("�lerledik�e 7 tane me�alenin ortas�nda oturan 80 Ya�lar�nda sa�lar�na ve sakallar�na aklar d��m�� bir adam� g�rd�n.\nOna yakla��yorsun...\n");
															printf("Bir anda\n-DUR!\ndiye ba��rd�\n");
															system("PAUSE");
															system("CLS");
															printf("Birka� dakika sonra oturdu�u yerden kalkt� ve yan�na yakla�t�\n");
															system("PAUSE");
															system("CLS");
															printf("Hayattan b�km�� bir bi�imde,\n");
															printf("-Ho�geldin %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Merhaba. �smimi nereden biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Buraya gelece�in belliydi. Her �zel sava��� buraya gelmi�tir. Sen de onlardan birisin i�te...\n");
															system("PAUSE");
															system("CLS");
															printf("-Az �nce konu�tu�un dil, yapt���n rit�elimsi �eyler. Bunlar�n a��klamas� nedir?\n");
															system("PAUSE");
															system("CLS");
															printf("-Her zaman b�yle merakl� m�s�nd�r %s?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Yeri geldi�inde herkes biraz merakl� olmal�. Her neyse, ger�ekten burada ne yap�yorsun?\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben uzun y�llard�r burada ya�ar�m.\n");
															system("PAUSE");
															system("CLS");
															printf("-Burada m�? Bir ma�arada �yle mi?\n");
															system("PAUSE");
															system("CLS");
															printf("-Evet. D��ar�da i�ler hi� iyi gitmiyor %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Neler biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Zaman� geldi�inde ��reneceksin. Ama �uan senden yapman� istedi�im bir �ey var.\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben ya�l� bir adam�m %s, g��lerim ve yeteneklerim s�n�rl�.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Dinliyorum ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-G��lerim bu gezegenin yok olmamas� i�in gerekli %s. Bunu �ok ki�iye anlatt�m ama inanmad�lar.\nHaks�z de�iller tabi, �lmekte olan bir ihtiyara kim inan�r ki?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Sadede gel ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-Bende olan bu laneti ��zebilmem i�in bana 2 tane y�lan yumurtas� gerekli.\nY�lan dedi�ime bakma, ma�aradaki renk de�i�tiren �l�m Y�lanlar�ndan bahsediyorum.\n");
															system("PAUSE");
															system("CLS");
															printf("-E�er bana 2 tane �l�m Y�lan� yumurtas� getirirsen 100 alt�n ile �d�llendirileceksin.\nNe d���n�yorsun?\n");
															while(intmagara!=0){
																printf("G�revi;\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
																
																if(intmagaragorev1secimi==1){ //G�revi kabul et
																	printf("-Ma�aran�n giri�inde yol ��e ayr�l�r. Buraya geldi�ine g�re sa� taraf� se�mi�sin.\nHerneyse, ma�aran�n giri�inden d�z git, yol ikiye ayr�lacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, �ar��da bulabilece�in 'uyutucu etkiye sahip kediotu'nu y�lanlar�n ortas�na atarsan i�in kolayla�abilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlad�m. G�r��mek �zere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-G�r��mek �zere...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-----------------------------------\nB�Y�C�N�N YUMURTALARI G�REV� ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //G�revi reddet
																	printf("-�uan m�sait de�ilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anl�yorum evlat. Yaln�z, bir an �nce m�sait olursan iyi olur.\n");
																	system("PAUSE");
																	system("CLS");
																	intmagaragorevi1=1;
																	break;
																}
																
															}
															
														}
														
														else if(intmagaragorevkarar==2){ //G�reve girme
															printf("Riske girmemeyi tercih ettin\n");
															break;
														}
													
													}
													
													else if(intmagaragorevi1==1){ //Ma�ara g�revi dinlendi karar a�amas�na ge�
														while(intmagara!=0){
																printf("G�revi\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
															
																if(intmagaragorev1secimi==1){ //G�revi kabul et
																	printf("Ma�aran�n giri�inde yol ��e ayr�l�r. Buraya geldi�ine g�re sa� taraf� se�mi�sin.\nHerneyse, ma�aran�n giri�inden d�z git, yol ikiye ayr�lacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, �ar��da bulabilece�in 'uyutucu etkiye sahip kediotu'nu y�lanlar�n ortas�na atarsan i�in kolayla�abilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlad�m. G�r��mek �zere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-G�r��mek �zere...\n");
																	printf("-----------------------------------\nB�Y�C�N�N YUMURTALARI G�REV� ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //G�revi reddet
																	printf("-�uan m�sait de�ilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anl�yorum evlat. Yaln�z, bir an �nce m�sait olursan iyi olur.\n");
																	system("PAUSE");
																	system("CLS");
																	intmagaragorevi1=1;
																	break;
																}
																
															}
															
													}
													
													else if(intmagaragorevi1==2){ //Ma�ara g�revi al�nd� b�y�c�yle konu�ma
														printf("-Ho�geldin %s.\n",isim);
														printf("-Sadece geziniyorum\n");
													}
													
													else if(intmagaragorevi1==3 && yilanyumurtasi>=2){ //Ma�ara g�revi tamamlan�yor
														printf("-��te. 2 adet �l�m Y�lan� yumurtas�.\n");
														system("PAUSE");
														system("CLS");
														yilanyumurtasi-=2;
														printf("-G�zel. Te�ekk�r ederim %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Ne yapacaks�n bu yumurtalar� ihtiyar?\n");
														system("PAUSE");
														system("CLS");
														printf("-Dedim ya, g��lerimin kaybolmamas�n� sa�layacak iksiri haz�rlayaca��m.\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya bildiklerin?\n");
														system("PAUSE");
														system("CLS");
														printf("-Tamam. Anlataca��m.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bu evrende ka� gezegen vard�r bilir misin evlat?\n");
														system("PAUSE");
														system("CLS");
														printf("-Baz� s�ylentiler duydum �ocuklu�umdan beri\nAma do�rusunu bilmiyorum.\n");
														system("PAUSE");
														system("CLS");
														printf("-Evrenimizde 7 yar�-tanr�, 7 gezegen vard�r\nBunlar; Ya�am ve do�a gezegeni\nBilgi gezegeni\nA�k ve �ehvet gezegeni\nTicaret gezegeni\nSava� gezegeni ve Zul�m gezegeni\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya 7.gezegen?\n");
														system("PAUSE");
														system("CLS");
														printf("-7. gezegen ya! Do�ru. Fakat ben her �eyi bilemem %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Her gezegenin kendi i�inde bir dengesi vard�r. Maalesef son zamanlarda bu denge bozuluyor.\n");
														system("PAUSE");
														system("CLS");
														printf("-Neden?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar...\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar m�?\nOnlar da ne?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar yar�-tanr�lar taraf�ndan g�revlendirildi.\nGezegenler aras� portallar� ve bu portallardan ge�enleri kontrol ederler.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bunda bir sorun yok. Ancak son zamanlarda portallardan ba�ka gezegenlere ge�mek daha da kolayla�t�.\nArt�k gelen ge�en belli de�il. Gezegenlerin dengesinin bozulmas�n�n bir sebebi bu.\n");
														system("PAUSE");
														system("CLS");
														printf("-�ocukken bizi korkutmak i�in okutulan kitaplardaki yarat�klar�n baz�lar�n� bu gezegende g�rd�m %s.\nOnlar�n burada olmamas� gerek.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Hatta bir kere...�zere...\n");
														system("PAUSE");
														system("CLS");
														printf("(B�y�c� iksiri haz�rlarken kokusundan etkilendin)\n");
														system("PAUSE");
														system("CLS");
														printf("-En k�sa zamanda dedi�inizi yapaca��m.\n�imdi gitmem gerek.\n");
														system("PAUSE");
														system("CLS");
														printf("-G�zel. Hadi kolay gelsin!\n");
														system("PAUSE");
														system("CLS");
														printf("�ntihar ma�aras�na do�ru ko�uyorsun\nHava o kadar s�cak ki ma�aran�n so�u�u bile serinletemiyor\n");
														system("PAUSE");
														system("CLS");
														printf("Sola do�ru gidiyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Kap�n�n a��k oldu�unu g�r�p i�eri giriyorsun\nMerdivenden iniyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Odada �zerinde �arap �i�esinden ba�ka hi�bir �ey olmayan bir masa ve bir sand�k g�r�yorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Sand��� t�m g�c�nle ittirirken...\n");
														system("PAUSE");
														system("CLS");
														printf("...\n");
														system("PAUSE");
														system("CLS");
														printf("(Ay�l�yorsun)\n");
														system("PAUSE");
														system("CLS");
														printf("-Dedi�im gibi %s. D��ar�da ya��yorsan, dikkatli olacaks�n.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("(�ks�r�k sesi)\nVerdi�in bilgiler i�in te�ekk�r ederim ihtiyar.\nBen kalkay�m art�k.\n");
														system("PAUSE");
														system("CLS");
														printf("Tamam. Ha! Az daha �d�l� vermeyi unutuyordum.\n");
														system("PAUSE");
														system("CLS");
														printf("��te s�z verdi�im gibi, 100 alt�n.\n");
														altin+=100;
														onur+=50;
														printf("+100 Alt�n\n");
														system("PAUSE");
														system("CLS");
														printf("---------------------------------------\nB�Y�C�N�N YUMURTALARI G�REV� TAMAMLANDI\n---------------------------------------\n");
														intmagaragorevi1=4;
														printf("+50 Onur\n");
														system("PAUSE");
														system("CLS");
														printf("Art�k b�y�c�ye gelip bilgi alabilirsin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
													else if(intmagaragorevi1==4){ //G�rev tamamen bitti b�y�c� ile konu�ma para kar��l��� bilgi olabilir
														
														while(intmagara!=0){
															printf("Ho�geldin %s\nSenin i�in ne yapabilirim?\n",isim);
															printf("[1]Elinde hangi bilgiler varm�� g�relim\n[2]Yetenek �retmek istiyorum\n[3]Verdi�in bilgilerin ne i�e yarad���n� s�yle\n[4]Ayr�l\n");
															scanf("%d",&intmagarasecim8);
															system("CLS");
															
															if(intmagarasecim8==1){
																printf("D�ZENLENECEK\n");//D�ZENLENECEK******************************************
																while(intmagara!=0){
																	
																	intbilgisayfa=1;
																	
																	if(intbilgisayfa==1){
																		
																		printf("Elimdeki Bilgiler\n");
																		
																		if(bilgi[0]==0){
																			printf("[1] Yedinci Gezegenin Ad�: X Alt�n\n");
																		}
																		
																		else if(bilgi[0]==1){
																			printf("[1] Yedinci Gezegenin Ad� (ALINDI)\n");	
																		}
																		
																		if(bilgi[1]==0){
																			printf("[2] Do�a ve Ya�am Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[1]==1){
																			printf("[2] Do�a ve Ya�am Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[2]==0){
																			printf("[3] Bilgi Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[2]==1){
																			printf("[3] Bilgi Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[3]==0){
																			printf("[4] A�k ve �ehvet Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[3]==1){
																			printf("[4] A�k ve �ehvet Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[4]==0){
																			printf("[5] Ticaret Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[4]==1){
																			printf("[5] Ticaret Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[5]==0){
																			printf("[6] Sava� Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[5]==1){
																			printf("[6] Sava� Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[6]==0){
																			printf("[7] Zul�m Gezegeninin Yar� Tanr�s�n�n �zellikleri: X Alt�n\n");
																		}
																		
																		else if(bilgi[6]==1){
																			printf("[7] Zul�m Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[7]==0){
																			printf("[8] X Gezegeninin Yar� Tanr�s�n�n �zellikleri(Bunu a�mak i�in Yedinci Gezegenin ad�n� ��renmelisin!!): X Alt�n\n");
																		}
																		
																		else if(bilgi[7]==1){
																			printf("[8] X Gezegeninin Yar� Tanr�s�n�n �zellikleri (ALINDI)\n");
																		}
																		
																		printf("[9] Geri d�n\n");
																		printf("[10] 2.Sayfaya Ge�\n");
																		printf("----------------------------------------------------1.SAYFA----------------------------------------------------\n");
																		
																		printf("Se�imini Yap\n");
																		scanf("%d",&intbilgisec1);
																		system("CLS");
																		
																		if(intbilgisec1==1){
																			
																			if(bilgi[0]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[0]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==2){
																				
																			if(bilgi[1]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[1]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==3){
																				
																			if(bilgi[2]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[2]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==4){
																				
																			if(bilgi[3]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[3]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==5){
																				
																			if(bilgi[4]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[4]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==6){
																				
																			if(bilgi[5]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[5]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==7){
																				
																			if(bilgi[6]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[6]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==8){
																				
																			if(bilgi[7]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Sat�n ald�n\n");
																				bilgi[7]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==9){ //Geri d�n
																			break;
																		}
																		
																		else if(intbilgisec1==10){ //2.Sayfaya ge�
																			intbilgisayfa=2;
																			system("PAUSE");
																			system("CLS");
																		}
																		
																	}
																	
																	if(intbilgisayfa==2){
																		while(intmagara!=0){
																			printf("2.SAYFA EKLENECEK\n");
																			printf("[1] �lk se�enek\n");
																			printf("[2] 1.Sayfaya Ge�\n");
																			printf("----------------------------------------------------2.SAYFA----------------------------------------------------\n");
																			printf("Se�imini Yap\n");
																			scanf("%d",&intbilgisec2);
																			system("CLS");
																			
																			if(intbilgisec2==1){
																				printf("�lk se�ene�i ald�n (DENEME)\n");
																			}
																			
																			else if(intbilgisec2==2){
																				intbilgisayfa=1;
																				break;
																			}
																			
																		}
																		
																	}
																	
																} //while biti�i
																
															}
															
															else if(intmagarasecim8==2){
																printf("D�ZENLENECEK\n"); //D�ZENLENECEK
															}
															
															else if(intmagarasecim8==3){
																printf("Verdi�im bilgileri birle�tirerek yeni yetenekler �retip kullanabilirsin\n");
																system("PAUSE");
																system("CLS");
															}
															
															else if(intmagarasecim8==4){
																printf("Sadece geziniyordum\n");
																system("PAUSE");
																system("CLS");
																break;
															}
															
														}
														
													}
													
												}
												
												else if(intmagarasecim5==2){ //Gezinmeye devam et b�cekler
													
													if(intbocekgorme==0){
														printf("Etrafta b�ceklerin oldu�unu g�r�nce i�reniyorsun.\n");
														printf("O da ne!!\nYakla��k 2 Metre boyunda kocaman bir hamam b�ce�i!!\n��ren�...\n");
														intbocekgorme=1;
													}
													
													else{
														printf("Hamam b�ce�i hala orada\n");	
													}
				
													printf("[1]Sald�r\n[2]Saklan\n[3]Ka�\n");
													scanf("%d",&intmagarasecimbocek1);
													system("CLS");
													
													if(intmagarasecimbocek1==1){ //Sald�r EKLENECEK
															
													}
													
													else if(intmagarasecimbocek1==2){ //Saklan
														printf("Hemen bir ta��n arkas�na sakland�n\n");
														if(intmagaraokalma==0){
															printf("�ansa bak!!\nYan�nda yak�n zamanda kendi hayat�na k�ym�� birinin oklar�n� buldun\n");
															printf("K�yafetlerine bakt���nda onun bir sava���n�n cesedi oldu�unu anlad�n\nOklar hala kullan�labilir durumda\n");
															printf("[1]Oklar� topla(Onurun d��er)\n[2]G�rmezden gel\n");
															scanf("%d",&intmagaraoktopla);
															system("CLS");
															
															if(intmagaraoktopla==1){ //Ok almaya �al��t�
																srand(time(NULL));
																intmagaraoktoplasans=rand()%10;
																
																if(intmagaraoktoplasans>=0 && intmagaraoktoplasans<8){
																	ok[0]+=50;
																	printf("Oklar� toplad�n ama galiba bir sava���n�n oklar�n� �alman�n ne anlama geldi�i hakk�nda bir fikrin yok!\n");
																	printf("Ya�asa da Ya�amasa da...\n");
																	onur-=30;
																	printf("30 Onur Kaybettin!\nSessizce uzakla��yorsun\n");
																	system("PAUSE");
																	system("CLS");
																}
																
																else{ //Aya��n kayd�
																	printf("Yere d��m�� sada�� yava��a almaya �al���rken aya��n kayd� ve biraz ses yapt�n!\n");
																	srand(time(NULL));
																	intmagarasesyapmasans=rand()%10;
																	
																	if(intmagarasesyapmasans>=0 && intmagarasesyapmasans<5){ 
																		ok[0]+=50;
																		printf("Neyseki hamam b�ce�i bunu duymad�\n�ansl� g�n�ndesin...\n");
																		printf("Oklar� toplad�n ama galiba bir sava���n�n oklar�n� �alman�n ne anlama geldi�i hakk�nda bir fikrin yok!\n");
																		printf("Ya�asa da Ya�amasa da...\n");
																		onur-=30;
																		printf("30 Onur Kaybettin!\n");	
																	}
																	
																	else{
																		printf("Olamaz!\nHamam b�ce�i bunu duymu� olmal�\n");
																		printf("Hemen karar ver!\n[1]Saklanmaya devam et\n[2]H�zl�ca ka�\n");
																		scanf("%d",&intmagarabocekkac);
																		system("CLS");
																		
																		if(intmagarabocekkac==1){ //Saklanmaya devam
																			printf("Hamam b�ce�i bug�n tembel g�n�nde. Seni umursamad�.\n");
																		}
																		
																		else if(intmagarabocekkac==2){ //H�zl�ca Ka�
																			
																			if(hiz>100){
																				printf("H�z yetene�in �ok iyi oldu�u i�in s�k�nt�s�z bir �ekilde ortamdan uzakla�t�n\n");	
																			}
																			
																			else{
																				printf("Ko�arken aya��n bir ta�a tak�ld� ve yere d��t�n\n");
																				can-=20;
																				printf("20 Can Azald�!!\n");
																			}
																			
																		}
																		
																	}
																	
																}	
																
															}
															
															else if(intmagaraoktopla==2){ //Ok almad�
																printf("Onurlu bir sava��� olma yolunda �nemli bir test\n");
																onur+=10;
																printf("10 Onur Kazand�n!\n");
																printf("Buradan uzakla�man�n tam zaman�\n");
																system("PAUSE");
																system("CLS");
																intmagaraokalma=1;
															}
														//	break;
														}
														
														else{
															printf("Hamam b�ce�i seni duymu� olsa da pek de umursamad�\n");
															printf("Sessizce uzakla��yorsun\n");
															break;
														}
														
													}
													
													else if(intmagarasecimbocek1==3){ //Ka�maya �al��t�n
														srand(time(NULL));
														intboceksans=rand()%2;
														
														if(intboceksans==0){ //Ka�t�n
															printf("Ka�may� ba�ard���n i�in �ansl�s�n\n");
														}
														
														else{ //Ka�amad�n
															printf("Olamaz!!\nHamam b�ce�i seni duymu� olmal�.\n[1]Onunla dov��\n[2]Konu�maya �al��\n");
															scanf("%d",&intmagarasecimbocek2);
															system("CLS");
															
															if(intmagarasecimbocek2==1){ //D�v�� EKLENECEK
															}	
															
															else if(intmagarasecimbocek2==2){ //Konu�maya �al��
																printf("Onunla konu�maya �al��t���nda biraz sakinle�ti�ini g�rd�n.\n");
																
																if(intboceklekonusmayetenegi==1){ //Konu�
																	printf("Sana hikayesini anlat�yor. Duydu�una g�re ilk defa b�cek d���nda bir yarat�kla konu�uyor. Onun ilgisini �ektin\n");
																	printf("G�REV VEYA EVENT GELECEK\n"); //***************
																}
																
																else if(intboceklekonusmayetenegi==0){ //Konu�amay�p Ka�mak
																	printf("Bir dakika\nSen onun dilini bilmiyorsun ki!\nHamam b�ce�inin bir bo�lu�undan yararlan�p yava��a ondan uzakla��yorsun\n");
																	printf("Buraya gelmeden �nce onun dilini ��rensen iyi olur.\n");
																}
																
															}
															
														}
														
													}
													
												}
												
												else if(intmagarasecim5==3){ //Geri
													break;
												}
												
											}
											
										}
										
										else if(intmagarasecim4==3){ //Geri d�n
											break;
										}
										
									}
									
								}
								
								else if(intmagarayolsecim2==4){ //Geri d�n
									break;
								}
								
							}
							
						}
						
						else if(intmagarayolsecim1==2){ //Geri d�n
						
							if(intalevanahtar==1 || intmagarasandiksayaci==1){
								printf("Ne macerayd� ama!!\n");
							}
							
							printf("Bu ortamdan uzakla�t���n i�in kendini daha rahat hissediyorsun\n");
							break;
						}
					}
					
				break;
				
				case 7:
					
					if(din==0)
					{
						printf("Evde bir g�zel dinlendin g�n�n bo� ge�ti ama yaralar�n tamamen iyile�ti.");
						can=Mcan;
					}
					
					if(din==1)
					{
						printf("Evde oturmaktan �ok s�k�ld���n i�in d��ar�da vakit ge�irmeye karar verdin.");
						gun--;
					din=1;
					}
					
				break;
				
				case 8:
					
					printf("Talim alan�na ho�geldin! Hangi yetene�ini geli�tirmek istersin?\n[1]K�l�� [2]Ok�uluk [3]B�y�c�l�k [4]Dayan�kl�l�k [5]H�z [6]Max Can\n");
					scanf("%d",&talim);
					
					if(talim==1)
					{
							printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
							scanf("%d",&talim1);
						
						if(talim1==1)
						{
							hasar=hasar+5;
							printf("K�l�� ustal���n 5 artt�! Yeni k�l�� ustal���n�z=%d\n",hasar);
						}
						
						else if(talim1==2)
						{
							i=rand()%15;
							can=can-i;
							hasar=hasar+15;
							printf("K�l�� ustal���n 10 artt� ama can�n %d azald�!\nYeni k�l�� ustal���n=%d\nMevcut can�n=%d\n",i,hasar,can); 
						}
						
						else if(talim1==3)
						{
						    i=rand()%20;
						    j=i+15;
						  	can=can-j;
						  	hasar=hasar+25;
						  	printf("K�l�� ustal���n 25 artt� ama can�n %d azald�!\nYeni k�l�� ustal���n=%d\nMevcut can�n=%d\n",j,hasar,can);
						}
					}
					
					else if(talim==2)
					{
						printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
						scanf("%d",&talim2);
						
						if(talim2==1)
						{
							okyet=okyet+5;
							printf("Ok�ulu�un 5 artt�! Yeni ok�ulu�un=%d\n",ok);
						}
						
						else if(talim2==2)
						{
							i=rand()%15;
							can=can-i;
							okyet=okyet+15;
							printf("Ok�ulu�un 10 artt� ama can�n %d azald�!\nYeni ok�ulu�un=%d\nMevcut can�n=%d\n",i,ok,can);
						}
						
						else if(talim2==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							okyet=okyet+25;
							printf("Ok�ulu�un 25 artt� ama can�n %d azald�!\nYeni ok�ulu�un=%d\nMevcut can�n=%d\n",j,ok,can);
						}
					}
					
					else if(talim==3)
					{
						printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
						scanf("%d",&talim3);
						if(talim3==1)
						{
							buyuyet=buyuyet+5;
							printf("B�y� g�c�n 5 artt�! Yeni b�y� g�c�n�z=%d\n",buyuyet);
						}
						
						else if(talim3==2)
						{
							i=rand()%15;
							can=can-i;
							buyuyet=buyuyet+15;
							printf("B�y� g�c�n 10 artt� ama can�n %d azald�!\nYeni b�y� g�c�n=%d\nMevcut can�n=%d\n",i,buyuyet,can);
						}
						
						else if(talim3==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							buyuyet=buyuyet+25;
							printf("B�y� g�c�n 25 artt� ama can�n %d azald�!\nYeni b�y� g�c�n=%d\nMevcut can�n=%d\n",j,buyuyet,can);
						}
					}
					
					else if(talim==4)
					{
						printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
						scanf("%d",&talim4);
						
						if(talim4==1)
						{
							def=def+5;
							printf("Dayan�kl�l���n 5 artt�! Yeni dayan�kl�l���n=%d\n",def);
						}
						
						else if(talim4==2)
						{
							i=rand()%15;
							can=can-i;
							def=def+15;
							printf("Dayan�kl�l���n 15 artt� ama can�n %d azald�!\nYeni dayan�kl�l���n=%d\nMevcut can�n=%d\n",i,def,can);
						}
						
						else if(talim4==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							def=def+25;
							printf("Dayan�kl�l���n 25 artt� ama can�n %d azald�!\nYeni dayan�kl�l���n=%d\nMevcut can�n=%d\n",j,def,can);
						}
					}
					
					else if(talim==5)
					{
						printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
						scanf("%d",&talim5);
						
						if(talim5==1)
						{
							hiz=hiz+5;
							printf("H�z�n 5 artt�! yeni h�z�n=%d\n",hiz);
						}
						
						else if(talim5==2)
						{
							i=rand()%15;
							can=can-i;
							hiz=hiz+15;
							printf("H�z�n 15 artt� ama can�n %d azald�!\nYeni h�z�n=%d\nMevcut can�n=%d\n",i,hiz,can);
						}
						
						else if(talim5==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							hiz=hiz+25;
							printf("H�z�n 25 artt� ama can�n %d azald�!\nYeni h�z�n=%d\nMevcut can�n=%d\n",j,hiz,can);
						}
					}
					
					else if(talim==6)
					{
						printf("Ne kadar �al��acaks�n [1]Hafif [2]Dengeli [3]A��r\n");
						scanf("%d",&talim6);
						
						if(talim6==1)
						{
							Mcan=Mcan+5;
							printf("Maksimum can�n 5 artt�! Yeni maksimum can�n=%d\n",Mcan);
						}
						
						else if(talim6==2)
						{
							i=rand()%15;
							can=can-i;
							Mcan=Mcan+15;
							printf("Maksimum can�n 15 artt� ama can�n %d azald�!\nYeni maksimum can�n=%d\nMevcut can�n=%d\n",i,Mcan,can);
						}
						
						else if(talim6==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							Mcan=Mcan+25;
							printf("Maksimum can�n 25 artt� ama can�n %d azald�!\nYeni maksimum can�n=%d\nMevcut can�n=%d\n",j,Mcan,can);
						}
					}
				
				break;
				
				case 9:
					
					hak=6;
					oyunsayac=0;
					srand(time(NULL)); 
					sanssayi = rand()%100;
					
					printf("�ar��ya ho�geldin\n"); //PAZARLIK EKLENECEK(Karizma yetene�i) �S�MLER DE���ECEK VE �E��TLEND�R�LECEK || Envanter geldi�inde hasar ve defans item al�n�nca ve envantere koyuldu�unda artacak
					
					while(shp!=0)
					{
						printf("Ne yapmak istersin?\n");
						printf("[1]�ar��n�n sahibiyle konu�\n[2]Silah d�kkan�na git\n[3]Z�rh d�kkan�na git\n[4]B�y� d�kkan�na git\n[5]�ksir d�kkan�na git\n[6]Evcil hayvan d�kkan�na git\n[7]Aksesuar d�kkan�na git\n[8]Kuaf�re git\n[9]E�ya sat\n[10]�ar��dan ayr�l\n");
						scanf("%d",&duksec);
						
						if(duksec==1) //OYUN
						{
							printf("�ar��n�n sahibi ile konu�maya gittin...\n");
							
							while(shp!=0)
							{
								printf("Biraz muhabbet ettikten sonra sana oynataca�� bir oyunu kazanman kar��l���nda bir kereli�ine herhangi bir �r�nde\nyuzde 50 indirim teklif etti!!\n");
								printf("Ama e�er kaybedersen 50 Alt�n�n� alacak!!\nKabul ediyorsan 1'e etmiyorsan 2'ye bas\nSe�imini Yap...\n");
								scanf("%d",&indsec);
								
								if(indsec==1)
								{
									
									if(oyunsayac==1)
									{
										printf("Bug�nl�k hakk�n� kulland�n!!\n");
										break;
									}
									printf("Oyun basit. 0 ile 100 aras�nda bir say� belirleniyor. 5 tahmin hakk�n var.\n�lk turda tahminin ile belirlenen say� aras�nda 20 veya daha az fark varsa ikinci tura ge�iyorsun.\n");
									printf("�kinci turda tahminin ile belirlenen say� aras�nda 10 veya daha az fark varsa ���nc� tura ge�iyorsun.\nGerisini sen buluyorsun.\nHadi Ba�layal�m!!\n\n");
									printf("1.TUR\n");
									hak=6;
									
									while(hak>0)
									{
										hak--;
										printf("Kalan hakk�n: %d\n",hak);
										
										if(hak==0)
										{
											printf("Kaybettin!!\n");
											altin-=50;
											printf("Kalan alt�n: %d\n",altin);
											break;
										}
										printf("Bir say� tahmin et: ");
										scanf("%d",&tahmin);
										
										if(sanssayi==tahmin)
										{
											printf("Kazand�n!!\n");
											printf("Bir tane indirim hakk�n var!!\n(Fiyat� yar�s�n� hesapla)\n");
											indirim=1;
											hak=0;
											break;
										}
										
										else if(((tahmin-sanssayi<=10&&tahmin-sanssayi>0) || (sanssayi-tahmin<=10&&sanssayi-tahmin>0)) && hak!=1)
										{
											indirim,altin=atla(hak,tahmin,sanssayi,indirim,altin);
											break;
										}
										
										else if(((tahmin-sanssayi<=20&&tahmin-sanssayi>0) || (sanssayi-tahmin<=20&&sanssayi-tahmin>0)) && hak!=1)
										{
											printf("2.TUR\n");
											hak+=2;
											printf("+2 Hak Kazand�n!!\n");
											printf("�PUCU: Arad���n say� %d ile %d aras�nda...\n",tahmin-20,tahmin+20);
											
											while(hak>0)
											{
												hak--;
												printf("Kalan hakk�n: %d\n",hak);
												
												if(hak==0)
												{
													printf("Kaybettin!!\n");
													altin-=50;
													printf("Kalan alt�n: %d\n",altin);
													break;
												}
												printf("Bir say� tahmin et: ");
												scanf("%d",&tahmin);
												
												if(sanssayi==tahmin)
												{
													printf("Kazand�n!!\n");
													printf("Bir tane indirim hakk�n var!!\n(Fiyat� yar�s�n� hesapla)\n");
													indirim=1;
													hak=0;
													break;
												}
												
												else if(((tahmin-sanssayi<=10&&tahmin-sanssayi>0) || (sanssayi-tahmin<=10&&sanssayi-tahmin>0)) && hak!=1)
												{
													printf("3.TUR\n");
													hak+=2;
													printf("+2 Hak Kazand�n!!\n");
													printf("�PUCU: Arad���n say� %d ile %d aras�nda...\n",tahmin-10,tahmin+10);
													
													while(hak>0)
													{
														hak--;
														printf("Kalan hakk�n: %d\n",hak);
														
														if(hak==0)
														{
															printf("Kaybettin!!\n");
															altin-=50;
															printf("Kalan alt�n: %d\n",altin);
															break;
														}
														printf("Bir say� tahmin et: ");
														scanf("%d",&tahmin);
														
														if(sanssayi==tahmin)
														{
															printf("Kazand�n!!\n");
															printf("Bir tane indirim hakk�n var!!\n(Fiyat� yar�s�n� hesapla)\n");
															indirim=1;
															hak=0;
															break;
														}
														
														else if(hak>0)
														{
														}
														
														else
														{
															printf("Bir daha dene!!\n");
														}
													}
												}
												
												else if(hak>0)
												{
												}
												
												else
												{
													printf("Bir daha dene!!\n");
												}
											}
										}
										
										else if(hak>0)
										{
										}
										
										else
										{
											printf("Bir daha dene!!\n");
										}
									}	
									oyunsayac=1;
								}
								
								else if(indsec==2)
								{
									printf("Reddettin\n");
									break;
								}
								
								else
								{
									printf("Tekrar dene\n");
								}
								break;
							}
						}
						
						else if(duksec==2) //S�LAH �E��TLER�
						{
							
							while(shp!=0)
							{ 
								printf("[1]K�l��\n[2]Balta\n[3]M�zrak ve Karg�\n[4]Yay ve Ok\n[5]Silah d�kkan�ndan ��k\n");
								scanf("%d",&silsec);
								
								if(silsec==1) //KILI� �E��TLER� 
								{
									printf("K�l�� �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]K�sa K�l��(Hasar� 20 artt�r�r): 40 alt�n\n[2]Uzun K�l��(Hasar� 30 artt�r�r): 60 alt�n\n[3]Tek Elli A��r K�l��(Hasar� 40 artt�r�r): 80 alt�n\n");
										printf("[4]�ift Elli A��r K�l��(Hasar� 50 artt�r�r): 100 alt�n\n[5]Ekmek B��a��(Hasar� 10 artt�r�r): 20 alt�n\n[6]Han�er(Hasar� 15 artt�r�r): 30 alt�n\n[7]Silah �e�itlerine geri d�n\n");
										scanf("%d",&kilicsec);
										
										if(kilicsec==1)
										{
											satinal(kil[0],altin,kilf[0],indirim,ind,karizma);
											altin=ind[0];
											indirim=ind[1];
											kil[0]=ind[2]; 	
										}
										
										else if(kilicsec==2)
										{
											satinal(kil[1],altin,kilf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											kil[1]=ind[2];						
										}
										
										else if(kilicsec==3)
										{
											satinal(kil[2],altin,kilf[2],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];	
											kil[2]=ind[2];
										}
										
										else if(kilicsec==4)
										{
											satinal(kil[3],altin,kilf[3],indirim,ind,karizma);
											altin=ind[0];
											indirim=ind[1];		
											kil[3]=ind[2];					
										}
										
										else if(kilicsec==5)
										{
											satinal(bic[0],altin,bicf[0],indirim,ind,karizma);
											altin=ind[0];
											indirim=ind[1];		
											kil[4]=ind[2];					
										}
										
										else if(kilicsec==6)
										{
											satinal(bic[1],altin,bicf[1],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];		
											kil[5]=ind[2];				
										}
										
										else if(kilicsec==7)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(silsec==2) //BALTA �E��TLER�
								{
									printf("Balta �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]K�sa Balta(Hasar� 30 artt�r�r): 60 Alt�n\n[2]Uzun Balta(Hasar� 50 artt�r�r): 100 Alt�n\n[3]Tek Elli A��r Balta(Hasar� 70 artt�r�r): 140 Alt�n\n");
										printf("[4]�ift Elli A��r Balta(Hasar� 90 artt�r�r): 180 Alt�n\n[5]Silah �e�itlerine geri d�n\n");
										scanf("%d",&baltasec);
										
										if(baltasec==1)
										{
											satinal(bal[0],altin,balf[0],indirim,ind,karizma);			
											altin=ind[0];
											indirim=ind[1];	
											bal[0]=ind[2];		
										}
										
										else if(baltasec==2)
										{
											satinal(bal[1],altin,balf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											bal[1]=ind[2];						
										}
										
										else if(baltasec==3)
										{
											satinal(bal[2],altin,balf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											bal[2]=ind[2];							
										}
										
										else if(baltasec==4)
										{
											satinal(bal[3],altin,balf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											bal[3]=ind[2];						
										}
										
										else if(baltasec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(silsec==3) //MIZRAK VE KARGI �E��TLER�
								{
									printf("M�zrak ve Karg� �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Uzun M�zrak(Hasar� 40 artt�r�r): 80 Alt�n\n[2]�� Ba�l� M�zrak(Hasar� 60 artt�r�r): 120 Alt�n\n[3]Uzun Karg�(Hasar� 80 artt�r�r): 160 Alt�n\n");
										printf("[4]Baltal� Karg�(Hasar� 100 artt�r�r): 200 Alt�n\n[5]Silah �e�itlerine geri d�n\n");
										scanf("%d",&mizsec);
										
										if(mizsec==1)
										{
											satinal(miz[0],altin,mizf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											miz[0]=ind[2];							
										}
										
										else if(mizsec==2)
										{
											satinal(miz[1],altin,mizf[1],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];		
											miz[1]=ind[2];							
										}
										
										else if(mizsec==3)
										{
											satinal(kar[0],altin,karf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											kar[0]=ind[2];							
										}
										
										else if(mizsec==4)
										{
											satinal(kar[1],altin,karf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];	
											kar[1]=ind[2];						
										}
										
										else if(mizsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(silsec==4) //YAY VE OK �E��TLER� ANA KODDA D�ZELT�LMEL� OK SAYISI VE YAY YETENE�� YETENEK ARTTIK�A HASAR ARTAB�L�R
								{
									printf("Yay ve Ok �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]K�sa Yay(Okun hasar�n� 20 artt�r�r): 40 Alt�n\n[2]Uzun Yay(Okun hasar�n� 30 artt�r�r): 60 Alt�n\n[3]Crossbow(Okun hasar�n� 50 artt�r�r): 100 Alt�n\n");
										printf("[4]Tahta Ok(Okun hasar�n� 2 artt�r�r: 4 Alt�n\n[5]Ta� Ok(Okun hasar�n� 4 artt�r�r): 8 Alt�n\n[6]Silah �e�itlerine geri d�n\n");
										scanf("%d",&yaysec);
										
										if(yaysec==1)
										{
											satinal(yay[0],altin,yayf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];		
											yay[0]=ind[2];					
										}
										
										else if(yaysec==2)
										{
											satinal(yay[1],altin,yayf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];		
											yay[1]=ind[2];				
										}
										
										else if(yaysec==3)
										{
											satinal(yay[2],altin,yayf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];		
											yay[2]=ind[2];					
										}
										
										else if(yaysec==4)
										{
											
											while(shp!=0)
											{
												printf("Ka� tane almak istersin?\n");
												scanf("%d",&oksay);
												
												if(oksay<=0)printf("Pozitif bir de�er gir!!\n");
												
												else
												{
													oktutar=oksay*4;
													
													if(altin>=oktutar)
													{
														printf("%d tane Tahta Ok sat�n ald�n\n",oksay);
														altin=altin-oktutar;
														ok[0]+=oksay;
													}
													
													else
													{
														printf("Yeterli alt�n�n yok!\n");
													}
													break;
												}
											}
										}
										
										else if(yaysec==5)
										{
											
											while(shp!=0)
											{
												printf("Ka� tane almak istersin?\n");
												scanf("%d",&oksay);
												
												if(oksay<=0)printf("Pozitif bir de�er gir!!");
												
												else
												{
													oktutar=oksay*8;
													
													if(altin>=oktutar)
													{
														printf("%d tane Ta� Ok sat�n ald�n\n",oksay);
														altin=altin-oktutar;
														ok[1]+=oksay;
													}
													break;
												}
											}
										}
										
										else if(yaysec==6)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(silsec==5) //GER� D�N
								{
									printf("Geri d�n�l�yor...\n");
									break;
								}
								
								else //TERKAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==3) //ZIRH �E��TLER�
						{
							
							while(shp!=0)
							{
								printf("[1]Kalkan\n[2]Mi�fer\n[3]G�vde\n[4]Bacak\n[5]Kol\n[6]Eldiven\n[7]Bot\n[8]Z�rh D�kkan�ndan ��k\n");
								scanf("%d",&zirhsec);
								
								if(zirhsec==1) //KALKAN �E��TLER�
								{
									printf("Kalkan �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Klasik Yuvarlak Kalkan(Defans� 20 artt�r�r): 40 Alt�n\n[2]Klasik Uzun Kalkan(Defans� 30 artt�r�r): 60 Alt�n\n[3]B�y�k Yuvarlak Kalkan(Defans� 50 artt�r�r): 100 Alt�n\n");
										printf("[4]Dayan�kl� Yuvarlak Kalkan(Defans� 70 artt�r�r): 140 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");				
										scanf("%d",&kalkansec);
										
										if(kalkansec==1)
										{
											satinal(kalkan[0],altin,kalkanf[0],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											kalkan[0]=ind[2];				
										}
										
										else if(kalkansec==2)
										{
											satinal(kalkan[1],altin,kalkanf[1],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											kalkan[1]=ind[2];					
										}
										
										else if(kalkansec==3)
										{
											satinal(kalkan[2],altin,kalkanf[2],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											kalkan[2]=ind[2];							
										}
										
										else if(kalkansec==4)
										{
											satinal(kalkan[3],altin,kalkanf[3],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											kalkan[3]=ind[2];							
										}
										
										else if(kalkansec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}				
								}
								
								else if(zirhsec==2) //M��FER �E��TLER�
								{
									printf("Mi�fer �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Eskimi� Mi�fer(Defans� 10 artt�r�r): 20 Alt�n\n[2]Klasik Mi�fer(Defans� 15 artt�r�r): 30 Alt�n\n[3]Kaliteli Mi�fer(Defans� 20 artt�r�r): 40 Alt�n\n");
										printf("[4]Dayan�kl� Mi�fer(Defans� 25 artt�r�r): 50 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&migfsec);
										
										if(migfsec==1)
										{
											satinal(mig[0],altin,migf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											mig[0]=ind[2];					
										}
										
										else if(migfsec==2)
										{
											satinal(mig[1],altin,migf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											mig[1]=ind[2];						
										}
										
										else if(migfsec==3)
										{
											satinal(mig[2],altin,migf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											mig[2]=ind[2];					
										}
										
										else if(migfsec==4)
										{
											satinal(mig[3],altin,migf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											mig[3]=ind[2];					
										}
										
										else if(migfsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==3) //G�VDE ZIRHI �E��TLER�
								{
									printf("G�vde Z�rh� �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Hasarl� G�vde Z�rh�(Defans� 30 artt�r�r): 60 Alt�n\n[2]Klasik G�vde Z�rh�(Defans� 40 artt�r�r): 80 Alt�n\n[3]Kaliteli G�vde Z�rh�(Defans� 50 artt�r�r): 100 Alt�n\n");
										printf("[4]Dayan�kl� G�vde Z�rh�(Defans� 60 artt�r�r): 120 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&govsec);
										
										if(govsec==1)
										{
											satinal(gov[0],altin,govf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											gov[0]=ind[2];						
										}
									
										else if(govsec==2)
										{
											satinal(gov[1],altin,govf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											gov[1]=ind[2];						
										}
										
										else if(govsec==3)
										{
											satinal(gov[2],altin,govf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											gov[2]=ind[2];						
										}
										
										else if(govsec==4)
										{
											satinal(gov[3],altin,govf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											gov[3]=ind[2];							
										}
										
										else if(govsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==4) //BACAK ZIRHI �E��TLER�
								{
									printf("Bacak Z�rh� �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Par�alanm�� Bacak Z�rh�(Defans� 5 artt�r�r): 10 Alt�n\n[2]Klasik Bacak Z�rh�(Defans� 10 artt�r�r): 20 Alt�n\n[3]Kaliteli Bacak Z�rh�(Defans� 15 artt�r�r): 30 Alt�n\n");
										printf("[4]Dayan�kl� Bacak Z�rh�(Defans� 20 artt�r�r): 40 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&bacsec);
										
										if(bacsec==1)
										{
											satinal(bac[0],altin,bacf[0],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											bac[0]=ind[2];							
										}
										
										else if(bacsec==2)
										{
											satinal(bac[1],altin,bacf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											bac[1]=ind[2];						
										}
										
										else if(bacsec==3)
										{
											satinal(bac[2],altin,bacf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											bac[2]=ind[2];						
										}
										
										else if(bacsec==4)
										{
											satinal(bac[3],altin,bacf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											bac[3]=ind[2];							
										}
										
										else if(bacsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==5) //KOL ZIRHI �E��TLER�
								{
									printf("Kol Z�rh� �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Paslanm�� Kol Z�rh�(Defans� 5 artt�r�r): 10 Alt�n\n[2]Klasik Kol Z�rh�(Defans� 10 artt�r�r): 20 Alt�n\n[3]Kaliteli Kol Z�rh�(Defans� 15 artt�r�r): 30 Alt�n\n");
										printf("[4]Sa�lam Kol Z�rh�(Defans� 20 artt�r�r): 40 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&kolsec);
										
										if(kolsec==1)
										{
											satinal(kol[0],altin,kolf[0],indirim,ind,karizma);	
											altin=ind[0];
											indirim=ind[1];			
											kol[0]=ind[2];								
										}
										
										else if(kolsec==2)
										{
											satinal(kol[1],altin,kolf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											kol[1]=ind[2];						
										}
										
										else if(kolsec==3)
										{
											satinal(kol[2],altin,kolf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											kol[2]=ind[2];						
										}
										
										else if(kolsec==4)
										{
											satinal(kol[3],altin,kolf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];			
											kol[3]=ind[2];					
										}
										
										else if(kolsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==6) //ELD�VEN �E��TLER�
								{
									printf("Eldiven �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Y�n Eldiven(Defans� 5 artt�r�r): 10 Alt�n\n[2]Deri Eldiven(Defans� 10 artt�r�r): 20 Alt�n\n[3]Kaliteli Eldiven(Defans� 15 artt�r�r): 30 Alt�n\n");
										printf("[4]A��r Eldiven(Defans� 20 artt�r�r): 40 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&eldsec);
										
										if(eldsec==1)
										{
											satinal(eld[0],altin,eldf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];					
											eld[0]=ind[2];					
										}
										
										else if(eldsec==2)
										{
											satinal(eld[1],altin,eldf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[1]=ind[2];						
										}
										
										else if(eldsec==3)
										{
											satinal(eld[2],altin,eldf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[2]=ind[2];						
										}
										
										else if(eldsec==4)
										{
											satinal(eld[3],altin,eldf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[3]=ind[2];						
										}
										
										else if(eldsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==7) //BOT �E��TLER�
								{
									printf("Bot �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Y�n Bot(Defans� 10 artt�r�r): 20 Alt�n\n[2]Klasik Bot(Defans� 15 artt�r�r): 30 Alt�n\n[3]Sa�lam Bot(Defans� 20 artt�r�r): 40 Alt�n\n");
										printf("[4]Dayan�kl� Bot(Defans� 25 artt�r�r): 50 Alt�n\n[5]Z�rh �e�itlerine Geri D�n\n");
										scanf("%d",&botsec);
										
										if(botsec==1)
										{
											satinal(bot[0],altin,botf[0],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[0]=ind[2];							
										}
										
										else if(botsec==2)
										{
											satinal(bot[1],altin,botf[1],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[1]=ind[2];							
										}
										
										else if(botsec==3)
										{
											satinal(bot[2],altin,botf[2],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[2]=ind[2];							
										}
										
										else if(botsec==4)
										{
											satinal(bot[3],altin,botf[3],indirim,ind,karizma);		
											altin=ind[0];
											indirim=ind[1];				
											eld[3]=ind[2];							
										}
										
										else if(botsec==5)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==8) //GER� D�N
								{
									printf("Geri d�n�l�yor...\n");
									break;
								}
								
								else //TEKRAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						else if(duksec==4){ //B�Y� �E��TLER�
							while(shp!=0){
								printf("[1]B�y�1\n[2]B�y�2\n[3]B�y�3\n[4]B�y�4\n[5]B�y� D�kkan�ndan ��k\n");
								scanf("%d",&buyusec);
								if(buyusec==1){
									printf("B�y�1 ald�n\n");
									buyu[0]=1;
								}
								else if(buyusec==2){
									printf("B�y�2 ald�n\n");
									buyu[1]=1;
								}
								else if(buyusec==3){
									printf("B�y�3 ald�n\n");
									buyu[2]=1;
								}
								else if(buyusec==4){
									printf("B�y�4 ald�n\n");
									buyu[3]=1;
								}
								else if(buyusec==5){
									printf("Geri d�n�l�yor...\n");
									break;
								}
								else{
									printf("Tekrar dene!!\n");
								}
							}
						}
						else if(duksec==5) //�KS�R �E��TLER� D�ZENLENECEK
						{
							
							while(shp!=0)
							{
								printf("[1]Kuvvet �ksiri(Sava� s�ras�nda +x hasar art���)\n[2]Sa�l�k �ksiri(Sava� s�ras�nda +x sa�l�k art���)\n");
								printf("[3]Dayan�kl�l�k �ksiri(Sava� s�ras�nda +x dayan�kl�l�k art���)\n[4]�ans �ksiri\n[5]�ksir D�kkan�ndan ��k\n");
								scanf("%d",&ikssec);
								
								if(ikssec==1)
								{
									printf("Kuvvet �ksiri ald�n\n");
									iksir[0]=1;
								}
								
								else if(ikssec==2)
								{
									printf("Sa�l�k �ksiri ald�n\n");
									iksir[1]=1;
								}
								
								else if(ikssec==3)
								{
									printf("Dayan�kl�l�k �ksiri ald�n\n");
									iksir[2]=1;
								}
								
								else if(ikssec==4)
								{
									printf("�ans �ksiri ald�n\n");
									iksir[3]=1;
								}
								
								else if(ikssec==5)
								{
									printf("Geri d�n�l�yor...\n");
									break;
								}
								
								else
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==6) //PET �E��TLER�
						{
							
							while(shp!=0)
							{
								printf("[1]Kedi(Zihin yetene�i 50 artar): 100 Alt�n\n[2]K�pek(Tahmin yetene�i 50 artar): 100 Alt�n\n[3]Petshop'tan ��k\n");
								scanf("%d",&petsec);
								
								if(petsec==1)
								{
									satinal(pet[0],altin,petf[0],indirim,ind,karizma);		
									altin=ind[0];
									indirim=ind[1];				
									pet[0]=ind[2];					
								}
								
								else if(petsec==2)
								{
									satinal(pet[1],altin,petf[1],indirim,ind,karizma);		
									altin=ind[0];
									indirim=ind[1];	
									pet[1]=ind[2];						
								}
								
								else if(petsec==3)
								{
									printf("Geri d�n�l�yor...\n");
									break;
								}
								
								else{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==7) //AKSESUAR �E��TLER� 
						{
							
							while(shp!=0)
							{
								printf("[1]Kolye\n[2]Bileklik\n[3]Y�z�k\n[4]K�pe\n[5]Aksesuar D�kkan�ndan ��k\n");
								scanf("%d",&akssec);
								
								if(akssec==1) //KOLYE �E��TLER�
								{
									printf("Kolye �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Kolye: 50 Alt�n\n[2]Alt�n Kolye: 100 Alt�n\n[3]Elmas Kolye: 200 Alt�n\n[4]Geri\n");
										scanf("%d",&kolyesec);
										
										if(kolyesec==1)
										{
											satinal(kolye[0],altin,kolyef[0],indirim,ind,karizma);			
											altin=ind[0];
											indirim=ind[1];		
											kolye[0]=ind[2];								
										}
										
										else if(kolyesec==2)
										{
											satinal(kolye[1],altin,kolyef[1],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];			
											kolye[1]=ind[2];			
										}
										
										else if(kolyesec==3)
										{
											satinal(kolye[2],altin,kolyef[2],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											kolye[2]=ind[2];				
										}
										
										else if(kolyesec==4)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(akssec==2) //B�LEKL�K �E��TLER�
								{
									printf("Bileklik �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Bileklik: 50 Alt�n\n[2]Alt�n Bileklik: 100 Alt�n\n[3]Elmas Bileklik: 200 Alt�n\n[4]Geri\n");
										scanf("%d",&bileksec);
										
										if(bileksec==1)
										{
											satinal(bilek[0],altin,bilekf[0],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											bilek[0]=ind[2];				
										}
										
										else if(bileksec==2)
										{
											satinal(bilek[1],altin,bilekf[1],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											bilek[1]=ind[2];			
										}
										
										else if(bileksec==3)
										{
											satinal(bilek[2],altin,bilekf[2],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											bilek[2]=ind[2];			
										}
										
										else if(bileksec==4)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(akssec==3) //Y�Z�K �E��TLER�
								{
									printf("Y�z�k �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Y�z�k: 50 Alt�n\n[2]Alt�n Y�z�k: 100 Alt�n\n[3]Elmas Y�z�k: 200 Alt�n\n[4]Geri\n");
										scanf("%d",&yuzuksec);
										
										if(yuzuksec==1)
										{
											satinal(yuzuk[0],altin,yuzukf[0],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											yuzuk[0]=ind[2];				
										}
										
										else if(yuzuksec==2)
										{
											satinal(yuzuk[1],altin,yuzukf[1],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											yuzuk[1]=ind[2];			
										}
										
										else if(yuzuksec==3)
										{
											satinal(yuzuk[2],altin,yuzukf[2],indirim,ind,karizma);				
											altin=ind[0];
											indirim=ind[1];		
											yuzuk[2]=ind[2];			
										}
										
										else if(yuzuksec==4)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(akssec==4) //K�PE �E��TLER�
								{
									printf("K�pe �e�itleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz K�pe: 50 Alt�n\n[2]Alt�n K�pe: 100 Alt�n\n[3]Elmas K�pe: 200 Alt�n\n[4]Geri\n");
										scanf("%d",&kupesec);
										
										if(kupesec==1)
										{
											satinal(kupe[0],altin,kupef[0],indirim,ind,karizma);			
											altin=ind[0];
											indirim=ind[1];		
											kupe[0]=ind[2];					
										}
										
										else if(kupesec==2)
										{
											satinal(kupe[1],altin,kupef[1],indirim,ind,karizma);			
											altin=ind[0];
											indirim=ind[1];		
											kupe[1]=ind[2];				
										}
										
										else if(kupesec==3)
										{
											satinal(kupe[2],altin,kupef[2],indirim,ind,karizma);			
											altin=ind[0];
											indirim=ind[1];		
											kupe[2]=ind[2];				
										}
										
										else if(kupesec==4)
										{
											printf("Geri d�n�l�yor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Alt�n�n: %d\n\n",altin);
									}
								}
								
								else if(akssec==5) //GER� D�N
								{
									printf("Geri d�n�l�yor...\n");
									break;
								}
								
								else //TEKRAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==8) //KUAF�R
						{
							printf("Ho�geldin\n"); //�EK�C�L�K VEYA KAR�ZMA ARTACAK
							
							while(shp!=0)
							{
							printf("[1]Sa�\n[2]Sakal\n[3]Geri d�n\n");
							scanf("%d",&kuaforsec);
							
							if(kuaforsec==1)
							{
								
								while(shp!=0)
								{
									printf("Alt�n�n: %d\n",altin);
									printf("Nas�l bir sa� modeli istersin?\n");
									printf("[1]Uzun: 50 Alt�n\n[2]K�sa: 40 Alt�n\n[3]Kel: 40 Alt�n\n[4]Boya\n[5]Geri d�n\n");
									scanf("%d",&sacsec);
									
									if(sacsec==1)
									{
										
										if(altin>=50)
										{
											printf("S�hhatler olsun!\n");
											altin-=50;
											kel=0; //D�ZENLENMEL�
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
									
									else if(sacsec==2)
									{
										
										if(altin>=40)
										{
											printf("S�hhatler olsun!\n");
											altin-=40;
											kel=0; //D�ZENLENMEL�
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
								
									else if(sacsec==3)
									{
										
										if(altin>=40)
										{
											printf("S�hhatler olsun!\n");
											altin-=40;
											kel=0; //D�ZENLENMEL�
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
									
									else if(sacsec==4 && kel==0)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sar�: 75 Alt�n\n[2]K�rm�z�: 75 Alt�n\n[3]Beyaz: 75 Alt�n\n[4]Geri d�n\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=75)
												{
													printf("Sa��n� sar�ya boyad�n!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}
											}
											
											else if(renksec==2)
											{
												
												if(altin>=75)
												{
													printf("Sa��n� k�rm�z�ya boyad�n!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=75)
												{
													printf("Sa��n� beyaza boyad�n!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}
											}
											
											else if(renksec==4)
											{
												break;
											}
											
											else
											{
												printf("Tekrar dene!!\n");
											}
										}
									}
									
									else if(sacsec==5)
									{
										break;
									}
									
									else
									{
										printf("Tekrar dene!!\n");
									}
								}
							}
							
							else if(kuaforsec==2)
							{
								
								while(shp!=0)
								{
									printf("Alt�n�n: %d\n",altin);
									printf("Nas�l bir sakal modeli istersin?\n");
									printf("[1]Top Sakal: 40 Alt�n\n[2]Kirli Sakal: 40 Alt�n\n[3]G�r Sakal: 40 Alt�n\n[4]Boya\n[5]Geri d�n\n");
									scanf("%d",&sakalsec);
									
									if(sakalsec==1)
									{
										
										if(altin>=40)
										{
											printf("S�hhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
									
									else if(sakalsec==2)
									{
										
										if(altin>=40)
										{
											printf("S�hhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
									
									else if(sakalsec==3)
									{
										
										if(altin>=40)
										{
											printf("S�hhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli alt�n�n yok!!\n");
										}
									}
									
									else if(sakalsec==4)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sar�: 50 Alt�n\n[2]K�rm�z�: 50 Alt�n\n[3]Beyaz: 50 Alt�n\n[4]Geri d�n\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=50)
												{
													printf("Sakal�n� sar�ya boyad�n!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}		
											}
											
											else if(renksec==2)
											{
												
												if(altin>=50)
												{
													printf("Sakal�n� k�rm�z�ya boyad�n!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=50)
												{
													printf("Sakal�n� beyaza boyad�n!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli alt�n�n yok!!\n");
												}
											}
											
											else if(renksec==4)
											{
												break;
											}
											
											else
											{
												printf("Tekrar dene!!\n");
											}
										}
									}
									
									else if(sakalsec==5)
									{
										break;
									}
									
									else
									{
										printf("Tekrar dene!!\n");
									}
								}
							}
							
							else if(kuaforsec==3)
							{
								break;
							}
							
							else
							{
								printf("Tekrar dene!!\n");
							}
							}
						}
						
						else if(duksec==9) //E�YA SAT
						{
							printf("Envanter A��l�yor\n\n");
							
							while(sat!=0)
							{
								printf("--------------ENVANTER--------------\n\n");
								
								if(kil[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kil[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d K�sa K�l�� (+20 Hasar) | Sat�� Fiyat�: %d\n",kil[0],kilf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kil[0],altin,kilf[0],sat);
											altin=sat[0];
											kil[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kil[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kil[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Uzun K�l�� (+30 Hasar) | Sat�� Fiyat�: %d\n",kil[1],kilf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kil[1],altin,kilf[1],sat);
											altin=sat[0];
											kil[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}	
									
									if(cikis==1)
									{
										break;
									}		
								}
								
								if(kil[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kil[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Tek Elli A��r K�l�� (+40 Hasar) | Sat�� Fiyat�: %d\n",kil[2],kilf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kil[2],altin,kilf[2],sat);
											altin=sat[0];
											kil[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kil[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kil[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d �ift Elli A��r K�l�� (+50 Hasar) | Sat�� Fiyat�: %d\n",kil[3],kilf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kil[3],altin,kilf[3],sat);
											altin=sat[0];
											kil[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bic[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bic[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Ekmek B��a�� (+10 Hasar) | Sat�� Fiyat�: %d\n",bic[0],bicf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bic[0],altin,bicf[0],sat);
											altin=sat[0];
											bic[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bic[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bic[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Han�er (+15 Hasar) | Sat�� Fiyat�: %d\n",bic[1],bicf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bic[1],altin,bicf[1],sat);
											altin=sat[0];
											kil[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bal[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bal[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d K�sa Balta (+30 Hasar) | Sat�� Fiyat�: %d\n",bal[0],balf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bal[0],altin,balf[0],sat);
											altin=sat[0];
											bal[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bal[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bal[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Uzun Balta (+50 Hasar) | Sat�� Fiyat�: %d\n",bal[1],balf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bal[1],altin,balf[1],sat);
											altin=sat[0];
											bal[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bal[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bal[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Tek Elli A��r Balta (+70 Hasar) | Sat�� Fiyat�: %d\n",bal[2],balf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bal[2],altin,balf[2],sat);
											altin=sat[0];
											bal[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bal[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bal[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d �ift Elli A��r Balta (+90 Hasar) | Sat�� Fiyat�: %d\n",bal[3],balf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bal[3],altin,balf[3],sat);
											altin=sat[0];
											bal[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(miz[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(miz[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Uzun M�zrak (+40 Hasar) | Sat�� Fiyat�: %d\n",miz[0],mizf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(miz[0],altin,mizf[0],sat);
											altin=sat[0];
											miz[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(miz[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(miz[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d �� Ba�l� M�zrak (+60 Hasar) | Sat�� Fiyat�: %d\n",miz[1],mizf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(miz[0],altin,mizf[1],sat);
											altin=sat[0];
											miz[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kar[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kar[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Uzun Karg� (+80 Hasar) | Sat�� Fiyat�: %d\n",kar[0],karf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kar[0],altin,karf[0],sat);
											altin=sat[0];
											kar[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kar[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kar[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Baltal� Karg� (+100 Hasar) | Sat�� Fiyat�: %d\n",kar[1],karf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kar[1],altin,karf[1],sat);
											altin=sat[0];
											kar[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(yay[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(yay[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d K�sa Yay (+20 Ok Hasar�) | Sat�� Fiyat�: %d\n",yay[0],yayf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(yay[0],altin,yayf[0],sat);
											altin=sat[0];
											yay[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									if(cikis==1){
										break;
									}	
								}
								
								if(yay[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(yay[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Uzun Yay (+30 Ok Hasar�) | Sat�� Fiyat�: %d\n",yay[1],yayf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(yay[1],altin,yayf[1],sat);
											altin=sat[0];
											yay[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(yay[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(yay[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Crossbow (+50 Ok Hasar�) | Sat�� Fiyat�: %d\n",yay[2],yayf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(yay[2],altin,yayf[2],sat);
											altin=sat[0];
											yay[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(ok[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(ok[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Tahta Ok (+2 Ok Hasar�) | Sat�� Fiyat�: %d\n",ok[0],okf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(ok[0],altin,okf[0],sat);
											altin=sat[0];
											ok[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(ok[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(ok[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Ta� Ok (+4 Ok Hasar�) | Sat�� Fiyat�: %d\n",ok[1],okf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(ok[1],altin,okf[1],sat);
											altin=sat[0];
											ok[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kalkan[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kalkan[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik Yuvarlak Kalkan (+20 Z�rh) | Sat�� Fiyat�: %d\n",kalkan[0],kalkanf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kalkan[0],altin,kalkanf[0],sat);
											altin=sat[0];
											kalkan[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kalkan[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kalkan[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik Uzun Kalkan (+30 Z�rh) | Sat�� Fiyat�: %d\n",kalkan[1],kalkanf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kalkan[1],altin,kalkanf[1],sat);
											altin=sat[0];
											kalkan[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kalkan[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kalkan[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d B�y�k Yuvarlak Kalkan (+50 Z�rh) | Sat�� Fiyat�: %d\n",kalkan[2],kalkanf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kalkan[2],altin,kalkanf[2],sat);
											altin=sat[0];
											kalkan[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kalkan[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kalkan[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Dayan�kl� Yuvarlak Kalkan (+70 Z�rh) | Sat�� Fiyat�: %d\n",kalkan[3],kalkanf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kalkan[3],altin,kalkanf[3],sat);
											altin=sat[0];
											kalkan[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(mig[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(mig[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Eskimi� Mi�fer (+10 Z�rh) | Sat�� Fiyat�: %d\n",mig[0],migf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(mig[0],altin,migf[0],sat);
											altin=sat[0];
											mig[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(mig[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(mig[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik Mi�fer (+15 Z�rh) | Sat�� Fiyat�: %d\n",mig[1],migf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(mig[1],altin,migf[1],sat);
											altin=sat[0];
											mig[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(mig[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(mig[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kaliteli Mi�fer (+20 Z�rh) | Sat�� Fiyat�: %d\n",mig[2],migf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(mig[2],altin,migf[2],sat);
											altin=sat[0];
											mig[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(mig[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(mig[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Dayan�kl� Mi�fer (+25 Z�rh) | Sat�� Fiyat�: %d\n",mig[3],migf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(mig[3],altin,migf[3],sat);
											altin=sat[0];
											mig[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(gov[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(gov[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Hasarl� G�vde Z�rh� (+30 Z�rh) | Sat�� Fiyat�: %d\n",gov[0],govf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(gov[0],altin,govf[0],sat);
											altin=sat[0];
											gov[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1){
										
										break;
									}	
								}
								
								if(gov[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(gov[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik G�vde Z�rh� (+40 Z�rh) | Sat�� Fiyat�: %d\n",gov[1],govf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(gov[1],altin,govf[1],sat);
											altin=sat[0];
											gov[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(gov[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(gov[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kaliteli G�vde Z�rh� (+50 Z�rh) | Sat�� Fiyat�: %d\n",gov[2],govf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(gov[2],altin,govf[2],sat);
											altin=sat[0];
											gov[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(gov[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(gov[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Dayan�kl� G�vde Z�rh� (+60 Z�rh) | Sat�� Fiyat�: %d\n",gov[3],govf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(gov[3],altin,govf[3],sat);
											altin=sat[0];
											gov[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bac[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bac[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Par�alanm�� Bacak Z�rh� (+5 Z�rh) | Sat�� Fiyat�: %d\n",bac[0],bacf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bac[0],altin,bacf[0],sat);
											altin=sat[0];
											bac[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bac[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bac[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik Bacak Z�rh� (+10 Z�rh) | Sat�� Fiyat�: %d\n",bac[1],bacf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bac[1],altin,bacf[1],sat);
											altin=sat[0];
											bac[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bac[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bac[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kaliteli Bacak Z�rh� (+15 Z�rh) | Sat�� Fiyat�: %d\n",bac[2],bacf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bac[2],altin,bacf[2],sat);
											altin=sat[0];
											bac[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bac[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bac[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Dayan�kl� Bacak Z�rh� (+20 Z�rh) | Sat�� Fiyat�: %d\n",bac[3],bacf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bac[3],altin,bacf[3],sat);
											altin=sat[0];
											bac[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kol[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kol[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Paslanm�� Kol Z�rh� (+5 Z�rh) | Sat�� Fiyat�: %d\n",kol[0],kolf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kol[0],altin,kolf[0],sat);
											altin=sat[0];
											kol[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kol[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kol[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Paslanm�� Kol Z�rh� (+10 Z�rh) | Sat�� Fiyat�: %d\n",kol[1],kolf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kol[1],altin,kol[1],sat);
											altin=sat[0];
											kol[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kol[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kol[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kaliteli Kol Z�rh� (+15 Z�rh) | Sat�� Fiyat�: %d\n",kol[2],kolf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kol[2],altin,kolf[2],sat);
											altin=sat[0];
											kol[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kol[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kol[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Sa�lam Kol Z�rh� (+20 Z�rh) | Sat�� Fiyat�: %d\n",kol[3],kolf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kol[3],altin,kolf[3],sat);
											altin=sat[0];
											kol[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(eld[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(eld[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Y�n Eldiven (+5 Z�rh) | Sat�� Fiyat�: %d\n",eld[0],eldf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(eld[0],altin,eldf[0],sat);
											altin=sat[0];
											eld[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(eld[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(eld[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Deri Eldiven (+10 Z�rh) | Sat�� Fiyat�: %d\n",eld[1],eldf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(eld[1],altin,eldf[1],sat);
											altin=sat[0];
											eld[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(eld[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(eld[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kaliteli Eldiven (+15 Z�rh) | Sat�� Fiyat�: %d\n",eld[2],eldf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(eld[2],altin,eldf[2],sat);
											altin=sat[0];
											eld[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(eld[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(eld[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d A��r Eldiven (+20 Z�rh) | Sat�� Fiyat�: %d\n",eld[3],eldf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(eld[3],altin,eldf[3],sat);
											altin=sat[0];
											eld[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bot[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bot[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Y�n Bot (+10 Z�rh) | Sat�� Fiyat�: %d\n",bot[0],botf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bot[0],altin,botf[0],sat);
											altin=sat[0];
											bot[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bot[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bot[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Klasik Bot (+15 Z�rh) | Sat�� Fiyat�: %d\n",bot[1],botf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bot[1],altin,botf[1],sat);
											altin=sat[0];
											bot[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bot[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bot[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Sa�lam Bot (+20 Z�rh) | Sat�� Fiyat�: %d\n",bot[2],botf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bot[2],altin,botf[2],sat);
											altin=sat[0];
											bot[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bot[3]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(bot[3]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Dayan�kl� Bot (+25 Z�rh) | Sat�� Fiyat�: %d\n",bot[3],botf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bot[3],altin,botf[3],sat);
											altin=sat[0];
											bot[3]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(pet[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(pet[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Kedi (+50 Zihin Yetene�i) | Sat�� Fiyat�: %d\n",pet[0],petf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(pet[0],altin,petf[0],sat);
											altin=sat[0];
											pet[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(pet[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(pet[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d K�pek (+50 Tahmin Yetene�i) | Sat�� Fiyat�: %d\n",pet[1],petf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(pet[1],altin,petf[1],sat);
											altin=sat[0];
											pet[1]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
								
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(kolye[0]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
									
										if(kolye[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Bronz Kolye | Sat�� Fiyat�: %d\n",kolye[0],kolyef[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kolye[0],altin,kolyef[0],sat);
											altin=sat[0];
											kolye[0]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
							
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(kolye[1]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
										
										if(kolye[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Alt�n Kolye | Sat�� Fiyat�: %d\n",kolye[1],kolyef[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
									
										if(satsec==1)
										{
											satisfonksiyonu(kolye[0],altin,kolyef[1],sat);
											altin=sat[0];
											kolye[0]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
								
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(kolye[2]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
										
										if(kolye[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Elmas Kolye | Sat�� Fiyat�: %d\n",kolye[2],kolyef[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kolye[2],altin,kolyef[2],sat);
											altin=sat[0];
											kolye[2]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(bilek[0]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
									
										if(bilek[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Bronz Bileklik | Sat�� Fiyat�: %d\n",bilek[0],bilekf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
									
										if(satsec==1)
										{
											satisfonksiyonu(bilek[0],altin,bilekf[0],sat);
											altin=sat[0];
											bilek[0]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(bilek[1]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
									
										if(bilek[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Alt�n Bileklik | Sat�� Fiyat�: %d\n",bilek[1],bilekf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bilek[1],altin,bilekf[1],sat);
											altin=sat[0];
											bilek[1]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(bilek[2]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
								
										if(bilek[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Elmas Bileklik | Sat�� Fiyat�: %d\n",bilek[2],bilekf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(bilek[2],altin,bilekf[2],sat);
											altin=sat[0];
											bilek[2]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(yuzuk[0]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
									
										if(yuzuk[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Bronz Y�z�k | Sat�� Fiyat�: %d\n",yuzuk[0],yuzukf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(yuzuk[0],altin,yuzukf[0],sat);
											altin=sat[0];
											yuzuk[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
							
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(yuzuk[1]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
										
										if(yuzuk[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Alt�n Y�z�k | Sat�� Fiyat�: %d\n",yuzuk[1],yuzukf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
									
										if(satsec==1)
										{
											satisfonksiyonu(yuzuk[1],altin,yuzukf[1],sat);
											altin=sat[0];
											yuzuk[1]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
								
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(yuzuk[2]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
									
										if(yuzuk[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Elmas Y�z�k | Sat�� Fiyat�: %d\n",yuzuk[2],yuzukf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(yuzuk[2],altin,yuzukf[2],sat);
											altin=sat[0];
											yuzuk[2]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
								
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(kupe[0]>=1)
								{
									cikis=0;
								
									while(sat!=0)
									{
								
										if(kupe[0]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Bronz K�pe | Sat�� Fiyat�: %d\n",kupe[0],kupef[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kupe[0],altin,kupef[0],sat);
											altin=sat[0];
											kupe[0]=sat[1];	
										}
										
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
								
								if(kupe[1]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
										
										if(kupe[1]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Alt�n K�pe | Sat�� Fiyat�: %d\n",kupe[1],kupef[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
										
										if(satsec==1)
										{
											satisfonksiyonu(kupe[1],altin,kupef[1],sat);
											altin=sat[0];
											kupe[1]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
										
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
									
									if(cikis==1)
									{
										break;
									}	
								}
							
								if(kupe[2]>=1)
								{
									cikis=0;
									
									while(sat!=0)
									{
									
										if(kupe[2]==0)
										{
											printf("-----\n");
											break;
										}
										printf("%d Elmas K�pe | Sat�� Fiyat�: %d\n",kupe[2],kupef[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri d�n\n");
										scanf("%d",&satsec);
									
										if(satsec==1)
										{
											satisfonksiyonu(kupe[2],altin,kupef[2],sat);
											altin=sat[0];
											kupe[2]=sat[1];	
										}
									
										else if(satsec==2)
										{
											printf("-----\n");
											break;
										}
									
										else if(satsec==3)
										{
											cikis=1;
											break;
										}
									}
								
									if(cikis==1)
									{
										break;
									}	
								}
						
								else
								{
									printf("------------------------------------\n\n");
									break;
								}
							}
						}
					
						else if(duksec==10) //�AR�IDAN AYRIL
						{
							printf("�ar��dan Ayr�l�n�yor...\n");
							break;
						}
						
						else //TEKRAR DENE
						{
							printf("Tekrar dene!!\n");
						}
					 }
				break;
				
				case 10:
					
					printf("bozk�r d�nyas�na giri� yapt�n�z. Buras� zorbalar�n, adilerin ve k�t� kalpli insanlar�m diyar� gezerken bir Zelemna bask�n�na u�rayabilir ya da bir bozk�r hayvan� taraf�ndan sald�r�ya u�rayabilirsin bozk�r evlerinde kumar oynayabilir ya da �zel iznin varsa Zelemna kabilesinin k�y�ne gidebilirsin.\n");
					printf("[1]bozk�rda gezintiye ��k\n[2]kumar �ad�rlar�n� bul\n[3]Zelemna kabilesinin k�y�ne git(daha yap�lmad�)\n[4]bozk�r� ke�fetmesi i�in insan tut(dikkat et kiralad���n insan �lebilir ya da iyi bir ganimet bulursa al�p ka�abilir)\n");
					printf("ne yapmak istersin : ");
					scanf("%d",&Bsec);
					
					if(Bsec==1)
					{
						biht=(rand()%100);
						if(biht>95)
						{
							printf("k���k bir Zelemna devriyesine denk geldin. hemen sakland�n fakat bir tanesi seni g�rd� ve sava�a tutu�tunuz.");
							DMcan=100,Dcan=100,Dsaldiri=10,saldiri=hasar/3,tur=0,Ddef=10;
							savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
							can=Darena[0];
							exp=Darena[1];
							altin=Darena[2];
							hasar=Darena[3];
							onur=Darena[4];
							if(can>0)
							{
								printf("sava�t���n ki�i devriye lideri olmakla beraber k�y�n de lideri ��kt�. senin �ok yi�it�e d�v��t���n� s�yledi ve sana k�ye giri� izinini verdi(giri� izni yapal�m)");
							}
							
						}
						
						else if(biht>90)
						{
							printf("bozk�r�n bir yerde �ukurla�t���n� g�r�yorsun ve bir hazine ma�aras� oldu�unu farkediyorsun. i�erideki hazineyi almak ister misin?\n[1]evet al\n[2]hay�r alma\nne yapmak istersin: ");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("kazanc�n�z\n400 alt�n\n30 ta� ok");
								altin= altin+400;
								ok[1]=ok[1]+30;
								
							}
							
							else if(Bsec==2)
							{
								printf("hi� ellemeden ��kt�n�z");
							}
							
							else
							{
								printf("hi� ellemeden ��kt�n�z");
							}
							
						}
						
						else if(biht>85)
						{
							printf("bozk�rda bir kelle avc�s�n� g�rd�n ve seni durdurdu. Birka� sayfas�n� kontrol ettikten sonra senin bir su�lu olmad���n� s�yledi. Bir su�luyu arad���n� ve su�luyu bulup �ld�rmede ona yard�m edersen �d�l� b�l��ebilece�ini s�yledi.\n[1] yard�m et \n[2]yard�m etme\nne yapmak istiyorsun");
							scanf("%d",&Bsec2);
							
							if(Bsec==1)
							{
								printf("bunu duydu�una sevindi ve sana arad���n ki�inin resmini g�sterdi. G�zg�rmez Peek ad�nda birisi ve �ok atik birisiymi� aramaya koyuluyorsunuz.\n------------\n------------\n------------\n------------\n------------\n");
								printf("arad���n�z adam size gece uyuyorken bir suikast ger�ekle�tiriyor. Orta��n�n bo�az� �oktan kesilmi� ve oluk oluk kan ak�yor. bir sava� ba�lamak zorunda art�k\n");
								
								DMcan=300,Dcan=300,Dsaldiri=30,saldiri=hasar/3,tur=0,Ddef=30;
								savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
								can=Darena[0];
								exp=Darena[1];
								altin=Darena[2];
								hasar=Darena[3];
								onur=Darena[4];
								if(can>0)
								{
									printf("ona al��maya ba�lam��t�n. �ld� ve ona yara��r bir �ekilde g�m�ld�. Mezari ba��nda g�zel bir konu�ma sonras� rakibinin kelesi ve aranan ki�iler listesiyle kasabaya indin");
									altin=altin+300;
									printf("kelleye konan �d�l 300 altin\naltin: %d",altin);
								}
							
							}
							
							else
							{
								printf("senin bir korkak oldu�unu s�yledi ve yoluna gitti.");
							}
						}
						
						else if(biht>80)
						{
							printf("bir t�ccara rastlad�n. yolda kald���n� ve acilen paraya ihtiyac� oldu�unu s�yledi. elindeki mallar�n� yar� fiyat�na sana satmak istiyor. Almak ister misin?\n[1]evet isterim \n[2]hay�r istemem\n");
							printf("daha bitmedi sonra dene �ans�n�");
							
						}
						
						else if(biht>75)
						{
							printf("bir katibe denk geldin kendisi yolda kalm�� ve yol g�venli�ini sa�laman kar��l���nda sana belli bri �cret sunmak istiyor ne dersin");
						}
						
						else if(biht>70)
						{
							printf("yolda bir efsun ta�� g�r�yorsun(yetenek a�ac� i�in)");
						}
						
						else if(biht>65)
						{
							printf("bozk�r�n en derinlerine do�ru yol almaya ba�lad�n devam etmek istedi�ine emin misin?\n[1]evet\n[2]hay�r\nne yapmak istersin :");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("bir ��l� and�rsa da su bulunmas�nda s�k�nt� ya�amad���ndan �ansl�s�n. Derinlerde bir ejderha yuvas�na rastlad�n. i�ine girmek ister misin?\n[1]evet giriyorum\n[2]Hay�r bu kadar e�lence yeter eve gidelim\nne yapmak istersin: ");
								scanf("%d",&Bsec2);
								
								if(Bsec2==1)
								{
									printf("ejderha yuvas�nda de�il ama yumurtalar� burada. ne yapmak ister misin?\n[1]evet gir ve al\n[2]gir ve ejderhay� bekle\n[3]�abucak ka�\nne yapmak istersin: ");
									scanf("%d",Bsec2);
									if(Bsec==1)
									{
										printf("yumurtalar� al�p ka�t�n.(envantere eklenecek ama �imdilik yumurta eklenmedi�inden al para)");
										altin=altin+300;
										printf("yumurtan�n fiyat� 300 altin\naltin: %d",altin);
									}
									
									else if(Bsec==2)
									{
										printf("ejdeyhayla m� �ava�can �en oyyy (daha eklemedik ama kesin yenemezdin:))");
									}
									
									else
									{
										printf("gece ge� olmadan eve d�nd�n pek bir �ey bulamad�n birka� tav�an, da� ve toprak.");
									}
								}
								
								else
								{
									printf("gece ge� olmadan eve d�nd�n pek bir �ey bulamad�n birka� tav�an, da� ve toprak.");
								}
							}
							else
							{
								printf("gece ge� olmadan eve d�nd�n pek bir �ey bulamad�n birka� tav�an, da� ve toprak.");
							}
						}
						
						else if(biht>60)
						{
							printf("");
						}
						
						else if(biht>55)
						{
							
						}
						
						else if(biht>50)
						{
							
						}
						
						else if(biht>45)
						{
							
						}
						
						else if(biht>40)
						{
							
						}
						
						else if(biht>35)
						{
							
						}
						
						else if(biht>30)
						{
							
						}
						
						else if(biht>25)
						{
							
						}
						
						else if(biht>20)
						{
							
						}
						
						else if(biht>15)
						{
							
						}
						
						else if(biht>10)
						{
							
						}
						
						else if(biht>5)
						{
							
						}	
					}
					
					else if(Bsec==2)
					{
						printf("kumar �ad�rlar� kuruluyor daha sonra gelmeniz s�ylendi\n");
					}
					
					else if(Bsec==3)
					{
						printf("Zelemna kabilesinin k�y�ne geldin ama senden giri� belgesi sordular. olmad���n� g�r�nce seni kovalad�lar. can�n� zor kurtard�n\n");
					}
					
					else if(Bsec==4)
					{
						printf("senin i�ni u�suz bucaks�z bu bozk�r� ke�fetmeye bir grup talip oldu. Senin yerine ke�if yapmak i�in 300 alt�n fiyat istediler ve yola ��kmaya haz�rlar.\n");
						//ke�if giden ki�i �alm��sa bo� g�z�kcek ama talan edilmi� olcak doluysa tekrar gidilmi�se talan edilmi� g�stercek
						printf("[1]evet 300 alt�n veriyorum yola ��k�n(l�tfen bir kervan gelmeden di�erini yolamay�n)\n[2]yok ben fakirim\n");
						printf("ne yapmak istersin : ");
						scanf("%d",&Bsec1);
						
						if(Bsec1==1)
						{
							for(Bi1=0;Bi1<20;Bi1++)
							{
								for(Bi2=0;Bi2<20;Bi2++)
								{
									B3[Bi1][Bi2]=0;
								}
							}
							
							for(Bi1=0;Bi1<20;Bi1++)
							{
								for(Bi2=0;Bi2<20;Bi2++)
								{
									printf("%d",B3[Bi1][Bi2]);
								}
								printf("\n");
							}
						}
						
						else if(Bsec1==2)
						{
							printf("�ifu\'lar�n ba�� senin reddetmene �z�ld� biz can�m�z� ortaya koyuyoruz dedi ve art�k senin i�in fiyat�n 400 alt�na ��kt���n� s�yledi.");
						}
						
						else
						{
							printf("zannederim yanl�� bir tu�a bast�n.");
						}
					}
					
					else
					{
						printf("do�ru bir tu�a basmad�n ve g�n bo�a ge�ti");
					}
					
				break;
				
				case 11:
					
					while(Lliman != 0){
	
	printf("Limana geldiniz.\nNe yapmak istersiniz?\n");
	printf("Liman:\n1-Liman'da gez.\n2-Gemileri gez.\n3-G�reve git.\n4-Liman'dan ��k\n");
	scanf("%d",&Lsecim1);
	
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
		printf("Yap�lacaklar:\n1-Bal�k��ya git.\n2-Kervanlar� gez.\n3-Sandallara bak.\n4-Giyim ku�am yerlerine bak.\n5-Hana git.\n6-Yap�lacaklara geri d�n.\n");
		printf("Ne yapmak istersin:");
		scanf("%d",&Lsecim1);
		
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
			printf("Bal�k��ya gittin.\nBizim Karakter:Merhabalar kolay gelsin.Bal�k piyasas� ne durumda onu ��renebilir miyim?\n");
			printf("Bal�k��:Size de merhaba te�ekk�rler.Balik piyasasi �uan iyi durumda de�il.Ayn� zamanda bal�k getirecek tedarik�ilerde azald�.Denizde artan korsanc�l�k y�z�nden mallarimiz g�venli bir �ekilde limana ula�m�yor.Umar�m bu korsanlar belalarini bulurlar.\n");
			printf("Bizim karakter:Anlad�m.Peki bu korsanlar denizin her yerinde mi olurlar?\nT�ccar:Hay�r ama �o�u yerde onlara rastlamak m�mk�n.�zellikle ticaret yollari �zerinde.Ger�ekten onlar�n ac�mas� yok beyim.\n");
			printf("Bizim karakter:Anlad�m te�ekk�r ederim bal�k��.\n1-Yap�l�caklara geri d�n.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
			   printf("Geri d�n�l�yor...");
			   break;	
			}
		}
   }

		else if(Lsecim1 == 2){
   			while(Lliman != 0){
   				
   			printf("Limanda gezerken g�z�ne yeni gelen kervanlar takildi ve yanlar�na gittin:Merhabalar kolay gelsin.Kervan ticareti hakkinda bilgi almak istiyorum.\nT�ccar:Size de merhabalar te�ekk�rler.Tabi nasil yardimci olabilirim?\n");
			printf("Bizim karakter:Ticaret yollarini e�kiyalar�n �ok bast���n� duydum do�ru mu?\nT�ccar:Ah efendim ah hi� sormay�n.Sizlere �unu s�yleyeyim her kervan �l�m� yanlar�nda ta��yorlar.\n");
			printf("Bizim karakter:Peki bu kadar zahmet kazand���n�z para i�in yeterli oluyor mu?\nT�ccar:Olmaz m� efendim hehehe.Sen de kervana kat�l�p ticaret yapmay� d���n�r m�s�n?\n1-Kervana katil.\n2-Umursama ve yap�lcaklar listesine geri d�n.\n");
			scanf("%d",&Lsecim1);
			
			if(Lsecim1 == 1){
				printf("Kervana katildin.Kervan 3'e ayrilacakt�r1-�pek Yolu.\n2-K�rk Yolu.\n3-Baharat Yolu.\nHangisini se�mek istersin?\n");
				scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("ipek yolu �zerinde giderken yolda e�kiyalar taraf�ndan bask�na u�rad�n.\n1-Sava��n.\n2-Ka�.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("E�kiyalar ile sava�t�n�z ve kaybettiniz.Esir al�nd�n.E�kiyalar seni bir s�re s�r�klediler ve yol kenar�n att�lar.\n");
						can = can - 10;
						altin = altin - 15;
					    printf("Can�n�z: %d\n",can);
						printf("Alt�n�n�z: %d\n",altin);
						printf("Uzun bir �aban�n ard�ndan geri d�nd�n.\n");
						printf("Geri d�n�l�yor...\n");
						break;	
					}
					else{
						printf("Ka�t�n ama kavurucu Arap s�ca��n�n ortas�nda kald�n.Ya�amak i�in y�r�men laz�m ama y�r�d�k�e s�cakl�k ve susuzluk art�yor.\n");
						while(LGgun < 10){
							printf("G�nler ge�iyor ve bitmek bilmeyen yolda s�cakl�k ve susuzlu�un verdi�i yorgunluktan bay�ld�n.\n");
							LGgun ++;
							printf("Yeni g�n: %d\n",LGgun);
							printf("Bir m�ddet sonra g�z�n� a�t�n ama nerede oldu�unu bilmiyorsun.Yan�na y�z� kapal� bir adam geldi ve su verdi.Suyu i�tikten sonra bira rahatlad�n.\n");
							can = can + 5;
							printf("Can�n: %d\n",can);
							printf("Kendine geldikten sonra adama:Neredeyim ben?Siz kimsiniz?\nAdam kendi dilinde bir�eyler s�yledi ve en ufak bir�ey anlamad�n.\n");
							printf("Arkadan bir ses geldi:Lut ��l� yak�nlar�nda bir yerdeyiz.Senin ne i�in var buralarda?\nBizim karakter:Avrupa'dan bir ticaret kervan� ile yola ��kt�m ama yolda e�kiyalar taraf�ndan sald�r�ya u�rad�k �o�u ki�i �ld� kalanlarda ka�t� onlara ne oldu bilmiyorum ama ��lde y�r�rken susuzluk ve s�aktan bay�lm���m.\n");
					        printf("Adam:Anlad�m yabanc�.Buralarda dikkatli olman laz�m.S�yle bakal�m ne yapmak istersin.\nBizim karakter:Efendim �ncelikle yard�mlar�n�z i�in minnettar�m e�er olursa evime gitmek istiyorum bu konuda bana yard�mc� olabilir misiniz?");
					        printf("Adam:Pekala yabanc� sana fazla olan bir at� ve biraz erzak verebilirim ama bu at uzun yol i�in dayanakl� de�il.Eve d�nerken at�n� dinlendirmelisin.\nAta bindin ve yola ��kt�n.\n");
					        LGgun = 20 + LAgun;
					        printf("Yeni g�n: %d\n",LGgun);
					        printf("Sonunda kendi topraklar�na d�nd�n ama bu yolculuk sana pahal�ya patlad�.");
					        altin = altin - 50;
					        can = can - 10;
					        printf("Can�n�z: %d\n",can);
					        printf("Alt�n�n�z: %d\n",altin);
					        
						}
						  printf("Geri d�n�ld�...\n");
						  break;
					}
				}
				if(Lsecim1== 2){
					printf("K�rk yolu �zerinden giden kervana kat�ld�n ve yola ��kt�n�z.Amur Nehri yak�nlar�na geldiniz ve t�ccarlar ellerindeki hayvan k�rklerini satmaya ba�lad�lar.\n1-Satmalar�na yard�m et.\n2-Gezintiye ��k.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("T�ccarlara elinden geldi�ince yard�m ettin ve mallar� satt�n�z.T�ccarlar bu garetn kar��l���nda sana giyebilce�in g�zel bir hayvan postu hediye ettiler.Ticaret bitti ve kervanla birlikte tekrar geri d�nd�n\n");
						printf("Yeni e�ya: Hayvan postu.");
						altin = altin + 20;
						onur = onur + 5;
						exp = exp + 50;
						def = def + 10;
						printf("Alt�n�n�z: %d\n",altin);
						printf("Onurunuz: %d\n",onur);
						printf("Tecr�beniz: %d\n",exp);
						printf("Defans�n�z: %d\n",def);	
						printf("Geri d�n�ld�...\n");
						break;
					}
					else{
						printf("Etraf� g�zlemledin ve ticaret bitince geri d�nd�n�z..\n");
						exp = exp + 50;
						printf("Geri d�n�ld�...\n");
						break;
					}
				}	
				if(Lsecim1 == 3){
					printf("Kervan ile beraber baharat yolu �zerinden yola ��kt�n�z.Bir �ok yerden ge�tiniz ve Arap Yar�madas� taraflar�na kadar geldiniz.Ama o da ne!!E�kiyalar �zerinize do�ru geliyor.\n1-Sava�.\n2-Ka�.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("E�kiyalar ile senin �nderli�inde sava�t�n�z ufak bir zayiat verseniz de sava�� kazand�n�z.Ve e�kiyalardan bir �ok de�erli e�ya kazand�n�z.\n");
						altin = altin + 200;
						exp = exp + 20;
						kilic_yetenegi = kilic_yetenegi + 15;
						def = def+ 10;
						printf("Alt�n�n�z: %d\n",altin);
						printf("Tecr�beniz: %d\n",exp);
						printf("K�l�� yete�eni: %d\n",kilic_yetenegi);
						printf("Defans: %d\n",def);
						printf("E�kiyalar ile sava�t�ktan sonra yoluna devam ettin ve Halep'e ula�t�n�z.T�ccarlar ile beraber mallar� satmaya ba�lad�n�z.\n1-Yard�m et.\n2-Gezintiye ��k.\n");
						scanf("%d",&Lsecim1);
						
						if(Lsecim1 == 1){
							printf("T�ccarlar ile mallar� satt�n�z ve bunun kar��l���nda sen de kazand�n.\n");
							altin = altin + 100;
							exp = exp + 20;
							printf("Yeni e�ya:ipek kaftan.\n");
							def = def + 5;
							printf("Alt�n�n�z: %d\n",altin);
							printf("Tecr�beniz: %d\n",exp);
							printf("Defans�n�z: %d\n",def);
							printf("Ticaret bitti ve geri d�nd�n�z...\n");
							LGgun = LAgun + 7;
							printf("Yeni g�n: %d",LGgun);
							printf("Geri d�n�l�yor...\n");
							break;
						}
						else{
							printf("Pazarda gezintiye ��kt�n ve etraf� g�zlemlerken 2-3 �ehir soytar�s� �n�n� kesti.\n1-Kar�� koy.\n2-Teslim ol.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Soytar�lar� kar�� koydun ve hepsinin hakk�ndan geldin.\n");
								kilic_yetenegi = kilic_yetenegi + 10;
								can = can - 5;
								altin = altin + 15;
								printf("K�l�� yetene�in: %d",kilic_yetenegi);
								printf("Can�n�z: %d",can);
								printf("Alt�n�n�z: %d",altin);
								printf("Pazarda gezintin bitti ve t�ccarlar ile beraber geri d�nmek i�in yola koyuldunuz...\n");
								LGgun = LAgun + 7;
								printf("Yeni g�n: %d",LGgun);
								printf("Geri d�n�l�yor...\n");
								break;
							}
							else{
								printf("Soytar�lara teslim oldun ve onurun Araplar aras�nda alay konusu oldu");
								altin = altin - 100;
								onur = onur - 20;
								can = can - 10;
								printf("Alt�n�n�z: %d",altin);
								printf("Onurunuz: %d",onur);
								printf("Can�n�z: %d",can);
								printf("Bu utan� verici hadisenin ard�ndan t�ccarlar�n yan�na d�nd�n ve geri d�nmek �zere yola koyuldunuz...\n");
								printf("Geri d�n�l�yor...\n");
								break;
							}
						}
						printf("Malar� satt�n�z ve t�ccarlarile geri d�nd�n�z...");
						LGgun = 20 + LAgun;
						printf("Yeni g�n: %d",LGgun);
					}
					else if(Lsecim1 == 2){
						printf("E�kiyalar�n sald�r�sndan ka�t�n ve kendini zor kurtard�n ama Arap Yar�madas�n�n kavurucu s�cakl���nda susuz ve a� olarak tek ba��na kald�n.S�cakl�k ve susuzluk git gide artt� ve dayanamay�p ba�ld�n.\n");
						printf("G�z�n� a�t�n ve yan�nda duran suyu i�tin ve biraz kendine geldin.Yan�na biri yakla�t� ve sana:Kendine gelmi�sin yabanc� s�yle bakal�m buralarda i�in ne?\nBizim karakter:Avrupa'dan ticaret i�in gelen bir kervan ile birlikteydim.Yolda e�kiyalar pusu att� �o�u ki�i �ld� ya da ka�t�.Bende ka�t�m ama s�cak ve susuzluktan bay�lm���m.\n");
						printf("Adam:Buralarda dikkatli olmak laz�m.Buran�n e�kiya �oktur ve ac�mas�zd�r.Bizler buralar�n Bedevileriyiz.S�yle bakal� �imdi ne yapacaks�n.\nBizim karakter:Evime d�nmeyi istiyorum efendim.Bu konuda bana yard�mc� olabilir misiniz?\n");
						printf("Bedevi:Hahaha bu acele de eyin nesi yabanc�.istersen bizimle biraz kal�p sonra da gidebilirsin.\n1-Kal.\n2-Git.\n");
						scanf("%d",&Lsecim1);
						if(Lsecim1 == 1){
							printf("Bedeviler yan�nda 1 hafta ge�irdin ve bir s�r� tecr�be kazand�n.Sonras�nda onlar�n verdi�i at ve biraz erzak ile geri d�nd�n.\n");
							LGgun = 7 + LAgun;
							exp = 20 + exp;
							printf("Yeni g�n: %d\n",LGgun);
							printf("Tecr�ben: %d",exp);
							printf("Geri d�n�l�yor..\n");
							break;
						}
						
					}
				}
			}
					else{
				printf("Bizim karakter:Hay�r te�ekk�rler sadece bilgi almak i�in sormu�tum.\n");
				printf("Geri d�n�l�yor.\n");
				break;
			}
		 }
	   }
	   if(Lsecim1 == 3){
	   	while(Lliman != 0){
		   	printf("Limanda gezerken g�z�ne g�zel sandallar tak�ld�.Sandal sat�cs�n�n yan�na gittin:\n1-Sandan fiyatlar�n� sor.\n2-Sandal ile ne yapabiece�ini sor.\n3-Ayr�l.\n");
		   	scanf("%d",&Lsecim1);
		   	if(Lsecim1 == 1){
		   		 	
		   		printf("Bizim karakter:Merhaba kolay gelsin.Sandal fiyatlar� hakk�nda bilgi almaya gelmi�tim de.Fiyatlar nedir?\nSandalc�:Size de merhaba beyim te�ekk�rler.B�y�k olanlar 500 alt�n orta olanlar 250 alt�n ve k���k olanlar 100 alt�n.\n");
		   		while(Lliman != 0){
		   		printf("Bizim karakter:Anlad�m te�ekk�rler.\n1-Sandal sat�n al.\n2-Ayr�l.\n");
		   		scanf("%d",&Lsecim1);
		   	    
		   	    if(Lsecim1 == 1){
		   	    	while(Lliman != 0){
					   
		   	    	printf("Hangi sandal� almak istersin:\n1-B�y�k.\n2-Orta.\n3-K���k.\n4-��k.\n");
		   	    	scanf("%d",&Lsecim1);
		   	    	printf("Alt�n�n�z: %d\n",altin);
					if(Lsecim1 == 1){
						
						if(altin > 500){
							printf("Bizim karakter:Bu b�y�k sandal� almak istiyorum.\nSandalc�:�ok do�ru bir se�im efendim tamamd�r.\n");
							altin = altin - 500;
							printf("Alt�n�n�z: %d\n",altin);
							printf("Geri d�n�l�yor..\n");
							break;
						}
						else{
							printf("Alt�n�n�z yetersiz.");
							break;
							
						}
					}
					else if(Lsecim1 == 2){
							if(altin > 250){
								printf("Bizim karakter:Bu orta boy sandal� almak istiyorum.\nSandalc�:�ok o�ru bir karar efendim tamamd�r.\n");
								altin = altin - 250;
								printf("Alt�n�n�z: %d\n",altin);
								break;
							}
							else{
								printf("Alt�n�n�z yetersiz.");
								break;
							}
						}
						else if(Lsecim1 == 3){
					
							if(altin > 100){
								printf("Bizim karakter:Bu k���k sandal� istiyorum.\nSandalc�:�ok do�ru bir karar efendim tamamd�r.\n");
								altin = altin - 100;
								printf("Alt�n�n�z: %d\n",altin);
								break;
							}
							else{
								printf("Alt�n�n�z yetersiz.");
								break;
							}
						}
						else if(Lsecim1 == 4){
							printf("Geri d�n�l�yor...\n");
							break;
						}
				}
					} 
					else{
						printf("Snadalc�ya te�ekk�r ettin ve ayr�ld�n");
						printf("Geri d�n�l�yor...\n");
						break;
					}  
			   }
		}
			   else if(Lsecim1 == 2){
			   	while(Lliman != 0){
				   
			   	printf("Bizim karakter:S�yle bakal�m sandalc�.Bu sandallar ile neler yapabilirim?\nSandalc�:Beyim bu sandallar ile bal�k tutabilir.Gezintiye ��kabilir ve hatta �ehir bile de�i�tirebilirsiniz.Ancak sizleri bir konuda uyarmam laz�m �ok dikkatli olman�z laz�m efendim zira e�kiyalar giderek �o�almakta ve bu tedirgin edici.\n");
			   	printf("Bizim karakter:Sen merak etme sandalc� �yle bir durumda g�recekleri son �ey y�z�m olur.hehehe.Te�ekk�rler Sandalc�.\n");
			   	printf("Geri d�n�l�yor...\n");
			   	break;
			   }
		}
			   else if(Lsecim1 == 3){
			   	printf("Geri d�n�l�yor...\n");
			   	break;
			   }
			}
		}
			   if(Lsecim1 == 4){
			   	printf("Limanda giyim ku�an satan yerlere geldin.\n");
			  
			   	while(Lliman != 0){
			   		printf("��eridekiler:\n1-Kaftan.\n2-Tak�lar.\n3-G�mlek.\n4-�orap.\n5-Ayakkab�.\n6-��k.\nNe almak istersin?\n");
			   		scanf("%d",&Lsecim1);
			   	if(Lsecim1 == 1){
			   		while(Lliman != 0){
					   
			   			printf("Bizim karakter:Merhaba kolay gelsin.Bu kaftanlar�n fiyat� ne kadar?\nT�ccar:Merhaba efendim ho� geldnizi.\n1-Siyah olanlar 50 altin.\n2-A��k renkli olanlar 40 altin.\n3-Di�erleri 15.\n4-��k.\n");
			   			scanf("%d",&Lsecim1);
			   			
			   		if(Lsecim1 == 1){
			   			if(altin > 50){
			   				printf("Bizim karakter:Pekala t�ccar.Bana �u siyah olanlardan bir tane ver bakal�m.\n");
			   				printf("Yeni e�ya: Siyah kaftan.\n");
			   				altin = altin -50;
			   				def = def + 10;
			   				cekicilik = cekicilik + 10;
			   				printf("Alt�n�n�z: %d\n",altin);
			   				printf("Defans�n�z: %d\n",def);
			   				printf("�ekicilik: %d\n",cekicilik);
			   			
					   }
					   else{
					   		printf("Paran�z yetersiz.\n");
					   	break;
					   }
					}
					   else if(Lsecim1 == 2){
					   	if(altin > 40){
					   		printf("Bizim karakter:Pekala t�ccar efendi.�u a��k renkli olanlardan 1 tane almak istiyorum.\n");
					   		altin = altin - 40;
					  	 	def = def + 5;
					   		cekicilik = cekicilik + 5;
					   		printf("Alt�n�n�z: %d\n",altin);
			   				printf("Defans�n�z: %d\n",def);
			   				printf("�ekicilik: %d\n",cekicilik);
			   			
						}
						else{
							printf("Paran�z yetersiz.\n");
						break;
						}
					  }
					   else if(Lsecim1 == 3) {
					   		if(altin > 15){
					   			printf("Bizim karakter:Pekala t�ccar.�unlardan bana bir tane ver bakal�m.\n");
					   			altin = altin - 15;
					   			def = def + 3;
					   			cekicilik = cekicilik + 3;
					   			printf("Alt�n�n�z: %d\n",altin);
			   					printf("Defans�n�z: %d\n",def);
			   					printf("�ekicilik: %d\n",cekicilik);
			   				
				}
				else{
					printf("Paran�z yetersiz.\n");
				break;
				}
			}
			else if(Lsecim1 == 4){
				printf("Geri d�n�l�yor...\n");
			break;
			}
		}
	}
					else if(Lsecim1 == 2){
						printf("Bizim karakter:Merhaba t�ccar.Elinde tak� olarak ne var s�yle bakal�m.\n");
					
						while(Lliman != 0){
							printf("T�ccar:Size de merhabalar beyim ho� geldiniz.Tabi ki.\n1-�u y�z�kler 10 altin.\n2-Kolyeler de 10 atlin.\n3-Bileklikler 15 altin.\n4-�ans t�ls�mlar� 20 altin.\n5-��k.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
							if(altin > 10){
								printf("Bizim karakter:Pekala t�ccar efendi.Bana �u y�z�klerden ver bakal�m 1 tane.\n");
								printf("Yeni e�ya.Bak�r Y�z�k.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 5;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paran�z yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 2){
							if(altin > 10){
								printf("Bizim karakter:Pekala t�ccar efendi.�u kolyeden alay�m.\n");
								printf("Yeni e�ya:G�m�� Kolye.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 10;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paran�z yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 3){
							if(altin > 15){
								printf("Bizim karakter:O zaman �u bilekliklerden 1 tane alay�m t�ccar.\n");
								printf("Yeni e�ya:Bielklik.\n");
								altin = altin - 15;
								cekicilik = cekicilik + 10;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paran�z yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 4){
							printf("�u �ans t�ls�mlar� ne t�r �eyler i�erir t�ccar s�yle bakal�m.\n");
							
							while(Lliman != 0){
								if(altin > 20){
									printf("T�ccar:Tabi efendim.3 �e�it var.\n1-Kaplan G�z� T�ls�m�.\n2-Kuvars T�ls�m�.\n3-Kehribar T�ls�m�.\n4-��k.\nHnagisini alamk istersniz beyim.\n");
									scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Pekala t�ccar efendi s�yle bakal�m bu Kaplan G�z� T�ls�m� ne i�e yarar.\nT�ccar:Tabi efendim.Bu ta� sizin di�er insanlara olan ba�l�l���n�z� azalt�r beyim.Ancak bu durum ikili ili�kilerinizi etkiliyebilir.\n1-Al.\n2-Alma.\n");
								scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Anlad�m t�ccar efendi.Ver bakay�m bir tane.\n");
								printf("Yeni e�ya:Kaplan G�z� T�ls�m�.\n");
								altin = altin - 20;
								cekicilik = cekicilik - 5;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
									
						}
							else{
								printf("Paran�z yetersiz.\n");
								break;
							}
						}
								else{
									printf("Anlad�m t�ccar efendi kals�n.\n");
								}
						}
						else if(Lsecim1 == 2){
							printf("Bizim karakter:Pekala t�ccar efendi bana kuars t�ls�m�n� anlat bakal�m.\nT�ccar:Heheh kuvars demek istediniz herhalde efendim.Bu t�ls�m duygusal dengeliyicidir efendim.Beyin fonksiyonlar�n� d�zenledi�ine inan�l�r.\n1-Al.\n2-Alma.\n");
							scanf("%d",&Lsecim1);
								if(Lsecim1 == 1){
									if(altin > 20){
										printf("Bizim karakter:Anlad�m t�ccar ver bakal�m.\n");
										altin = altin - 20;
										cekicilik = cekicilik + 5;
										bilgelik = bilgelik + 10;
										printf("Alt�n�n�z: %d\n",altin);
										printf("�ekicilik: %d\n",cekicilik);
						      			printf("Bilgeli�iniz: %d",bilgelik);	
						}
						else{
							printf("Paran�z yetersiz.\n");
						break;
						}
							}
							else{
								printf("Bizim karakter:Anlad�m t�ccar efendi kals�n.\n");
							break;
						}
				}
					else if(Lsecim1 == 3){
						printf("Bizim karakter:Bana kehribar t�ls�m�ndan bahset t�ccar.\nT�ccar:Tabi efendim.Bu t�ls�m k�t� talihi g�t�r�p �ans getirir.T�ls�m�n ayn� zamanda zehirlenmeyi �nledi�ine inan�l�r.Ayn� zamanda cinsel a��dan g�� verir efendim hehe.\n1-Al.\n2-Alma.\n");
						scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 20){
									printf("Biim karakter:Hehehe pekala t�ccar efendi ver bakal�m kehribar t�ls�m�ndan bir tane.\n");
									printf("Yeni e�ya:Kehribar t�ls�m�.\n");
									altin = altin- 20;
									cekicilik = cekicilik + 10;
									bilgelik = bilgelik + 10;
									printf("Alt�n�n�z: %d\n",altin);
									printf("�ekicilik: %d\n",cekicilik);
									printf("Bilgeli�iniz: %d",bilgelik);
					}
					else{
						printf("Paran�z yetersiz.\n");
					break;
					}
				}
						else{
							printf("Bizim karakter:hehe.Kals�n t�ccar efendi te�ekk�rler.Dedin ve ��kt�n.\n");
						break;
						}
					}
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Kals�n t�ccar.\nGeri d�n�l�yor...\n");
					break;
					}
				}
			}
			else if(Lsecim1 == 5){
				printf("Geri d�n�l�yor...\n");
			break;
			}
			}
		}
					else if(Lsecim1 == 3){
						printf("Bizim karakter:Merhaba t�ccar efendi kolay gelsin.G�mlek bak�yorum da sendekiler nas�l?\n");
							while(Lliman != 0){
								printf("T�ccar:Ho� geldiniz beyim buyrun.Yeni �r�nlerim var.\n1-�u �ekilli olanlar 25 altin.\n2-D�z olanlar 35 altin.\n3-��k.\nHangisini almak istersiniz?\n");
								scanf("%d",&Lsecim1);
									if(Lsecim1 == 1){
										if(altin > 25){
											printf("Bizim karakter:�u �ekilli olanlar�ndan alay�m bir tane t�ccar.\n");
											printf("Yeni e�ya:�ekilli g�mlek.\n");
											altin = altin - 25;
											cekicilik = cekicilik + 10;
											printf("Alt�n�n�z: %d\n",altin);
											printf("�ekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paran�z yetersiz.\n");
					}
				}
						else{
							if(altin > 35){
								printf("Bizim karakter:Bana �u d�z olanlardan ver t�ccar efendi.\n");
								printf("Yeni e�ya:D�z renk g�mlek.\n");
								altin = altin - 35;
								cekicilik = cekicilik + 15;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paran�z yetersiz.\n");
					}
				}
			}
		}
		
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Merhaba t�ccar efendi.�orap almak istiyorum.\n");
						
						while(Lliman != 0){
							printf("T�ccar:Ho� geldinizi beyim buyurun.Elimde �ok g�zel �oraplar var.\n1-�u ince olanlar 15.\n2-Kal�n olanlar 20 altin beyim.\n3-��k.\nHangisini almak istersiniz?\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 15){
									printf("Bizim karakter:�u ince olanlardan alay�m bir tane t�ccar efendi.\n");
									printf("Yeni e�ya:�nce �orap.\n");
									altin = altin - 15;
									printf("Alt�n�n�z: %d\n",altin);
					}
					else{
						printf("Paran�z yetersiz.\n");
					break;
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 20){
								printf("Bizim karakter:�u kal�n olanlardan alay�m bir tane t�ccar efendi.\n");
								printf("Yeni e�ya:Kal�n �orap.\n");
								altin = altin - 20;
								printf("Alt�n�n�z: %d\n",altin);
					}
					else{
						printf("Paran�z yetersiz.\n");
					break;
					}
				}
				else if(Lsecim1 == 3){
					printf("Geri d�n�l�yor...\n");
				break;
				}
			}
		}
					if(Lsecim1 == 5){
						printf("Bizim karakter:Merhaba t�ccar efendi.Ayakkab� almak istiyorum.\n");
					
						while(Lliman != 0){
							printf("T�ccar:Ho� geldiniz beyim buyurun.Elimde �ok g�zel ayakkab�lar var.\n1-�u sandaletler 40 altin.\n2-Deri ayakkab�lar 50 altin.\n3-Asker ayakkab�s� da 60 alt�n beyim.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 40){
									printf("Bizim karakter:Pekala t�ccar efendi bana �u sandaletlerden ver.\n");
									printf("Yeni e�ya:Sandalet.\n");
									altin = altin - 40;
									cekicilik = cekicilik + 5;
									printf("Alt�n�n�z: %d\n",altin);
									printf("�ekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paran�z yetersiz.\n");
						
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 50){
								printf("Bizim karakter:Pekala t�ccar efendi bana �u deri ayakkab�lardan ver.\n");
								printf("Yeni e�ya:Deri ayakkab�.\n");
								altin = altin - 50;
								cekicilik = cekicilik + 10;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paran�z yetersiz.\n");
					
					}
				}
						else{
							if(altin > 60){
								printf("Bizim karakter:Tamam t�ccar efendi.Bana �u asker ayakkab�s�ndan bir tane ver bakay�m.\n");
								printf("Yeni e�ya:Asker Ayakkab�s�.\n");
								altin = altin - 60;
								cekicilik = cekicilik + 15;
								printf("Alt�n�n�z: %d\n",altin);
								printf("�ekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paran�z yetersiz.\n");
					break;
					}
				}
			}
		}
			else if(Lsecim1 == 6){
				printf("Geri d�n�l�yor...\n");
			break;
			}
	   }		
   }    
	if(Lsecim1 == 5){
		printf("Hana do�ru giderken yolda h�rs�zlar cebini �arpt� ve pe�lerine d��t�n.Uzun bir kovalamacadan sonra h�rs�zlardan birini yakalad�n ama h�rs�z di�li ��kt� ve ufak bir kavga tutu�tunuz.\n");
   		printf("Adam sana sald�rmaya haz�rlan�yor:\n1-Sa�a gitmek i�in D'ye bas.\n2-Sola gitmek i�in A'ya bas.\n3-E�ilmek i�in C'ye bas.\n4-Kendini geri �ekmek i�in S'ye bas.\n");
   		srand(time(NULL));
		Lsira6 = can / 15;
		Lsaldiri1 = rand() % 4;
		Lsira1 = 0;
		Lsira2 = 0;
	
	while(Lsira1 < 3){
		Lsaldiri1 = rand() % 4;
		Lsaldiri1++;
		scanf(" %c",&Lhamle);
		
		if(Lhamle == 'd')
		{
			
			if(Lsaldiri1 == 1){
				printf("D��man sald�r�sndan ka�t�n.\n");
			
			if(Lsira2 == 0){
				printf("1-Sald�r.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("D��mana vurdun.\n");
				}
				else{
					Lsira2++;
					printf("Bekledin.\n");
				}
			}
			else{
				Lsira1 = Lsira1 + 3;
				printf("Tebrikler.\n");
			}
		}
		else{
			can = can - 10;
			Lsira4++;
			Lsira2=0;
			printf("Hit yedin.\n");
		}
	}	
		else if(Lhamle == 'a')
		{
			
			if(Lsaldiri1 == 2){
				printf("D��man sald�r�sndan ka�t�n.\n");
			
			if(Lsira2 == 0){
				printf("1-Sald�r.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("D��mana vurdun.\n");
				}
				else{
					Lsira2++;
					printf("Bekledin.\n");
				}
			}
			else{
				Lsira1 = Lsira1 + 3;
				printf("Tebrikler.\n");
			}
		}
		else{
			can = can - 10;
			Lsira4++;
			Lsira2=0;
			printf("Hit yedin.\n");
		}
	}	
	else if(Lhamle == 'w')
		{
			
			if(Lsaldiri1 == 3)
			{
				printf("D��man sald�r�sndan ka�t�n.\n");
			
			if(Lsira2 == 0){
				printf("1-Sald�r.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("D��mana vurdun.\n");
				}
				else{
					Lsira2++;
					printf("Bekledin.\n");
				}
			}
			else{
				Lsira1 = Lsira1 + 3;
				printf("Tebrikler.\n");
			}
		}
		else{
			can = can - 10;
			Lsira4++;
			Lsira2=0;
			printf("Hit yedin.\n");
		}
	}	
		else if(Lhamle == 's')
		{
			
			if(Lsaldiri1 == 4){
				printf("D��man sald�r�sndan ka�t�n.\n");
			
			if(Lsira2 == 0){
				printf("1-Sald�r.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
				if(Lsira3 == 1){
					Lsira1++;
					printf("D��mana vurdun.\n");
				}
				else{
					Lsira2++;
					printf("Bekledin.\n");
				}
			}
			else{
				Lsira1 = Lsira1 + 3;
				printf("Tebrikler.\n");
			}
		}
		else{
			can = can - 10;
			Lsira4++;
			Lsira2=0;
			printf("Hit yedin.\n");
		}
	}	


			else{
				continue;
			}
			if(Lsira4 >= Lsira6){
				printf("Kaybettiniz.\n");
				Lsira5=0;
				break;
			}
			if(Lsira1 >= 3){
				Lsira5 = 1;
			}
}
	if(Lsira5 == 1){
		printf("Tebrikler kazand�n�z.\n");
		altin = altin + 100;
		onur = onur + 10;
		printf("Alt�n�n�z: %d",altin);
		printf("Onurunuz: %d",onur);
	}
	else if(Lsira5 == 0){
		printf("Kaybettiniz.\n");
		altin = altin - 50;
		onur = onur - 5;
		printf("Alt�n�n�z: %d\n",altin);
		printf("Onurunuz: %d\n",onur);
		
	}	
	printf("Hana girdin.\n");
	
	while(Lliman != 0){
				   
		printf("Ne yapmak istersin:\n1-Bir�eyler i�.\n2-Hanc� ile konu�.\n3-Karn�n� doyur.\n4-Dinlen.\n5-��k.\n");
		scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Handa bir�eyler i�tin ve kendine geldin bu seni �ok rahatlatt�.\n");
				can = can + 5;
				altin = altin - 5;
				printf("Can�n�z: %d\n",can);
				printf("Alt�n�n�z: %d\n",altin);
		}
				   else if(Lsecim1 == 2){
				   	printf("Hanc�n�n yan�na giderek:Merhaba hanc� kolay gelsin.S�yle bakal�m buraya ne t�r insanlar gelir.\nHanc�:Saolas�n beyim.Buras� bir han beyim her yerden insan gelir biz param�za bakar�z.E�er dinlenmek istersen uygun yerimiz var.Yaln�z burada kal�rken dikkat etmelisin beyim her yerden insan geldi�i i�in neden geldiklerini de bilemeyiz!\n");
				   	printf("Pekala hanc� te�ekk�rler.\nAyr�ld�n.\n");
				   }
				   else if(Lsecim1 == 3){
				   	printf("Yemek yedin ve kar�n�n� doyurdun bu seni �ok rahatlatt�.\n");
				   	can = can + 10;
				   	altin = altin - 15;
				   	printf("Can�n�z: %d\n",can);
				   	printf("Alt�n�n�z: %d\n",altin);
				   }
				   else if(Lsecim1 == 4){
				   	printf("Dinlenmek i�in han da kald�n ve ak�am handa m�zik e�li�inde vakit ge�irdikten sonra g�zel bir uyku �ektin...Ama o da ne!!Paran yok!\n");
				   	LGgun = 1 + LAgun;
				   	printf("Yeni g�n: %d\n",LGgun);
				   	printf("Sinirli bir �ekilde hanc�n�n yan�na gittin:Hey sen s�yle bakal�m e�yalar�m nerede!\nHanc�:Ben sizi dikkatli olman�z konusunda uyard�m beyim s�yleyin bakal�m ne oldu.\nBizim karakter:Uyand�m ve baz� de�erli e�yalar�m�n olmad���n� g�rd�m.\nHanc�:Kusura bakmay�n beyim yapabilece�im bir�ey yok bir dahaki sefere daha dikkatli olun.\n");
					   altin = altin - 100;
					   exp = exp + 10;
					   printf("Alt�n�n�z: %d\n",altin);
					   printf("Tecr�beniz: %d",exp);				   	
				   }
				   else if(Lsecim1 == 5){
				   	printf("Geri d�n�l�yor...\n");
				   	break;
				   }
			   }
			}
			else if(Lsecim1 == 6){
				printf("Geri d�n�l�yor...\n");
			break;
			}
	}
}
				else if(Lsecim1 == 2){
	  				while(Lliman != 0){
					  
					printf("Limanda gemilere bakarak y�r�rken bir gemici adam�n yan�na geldin:\n1-Gemi fiyatlar�n� sor.\n2-Ayr�l.\n");
					scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("Bizim karakter:Kolay gelsin gemici.Gemilerin fiyat�n� ��rnmek istiyorum.\n");
				
					printf("Gemici s�yle bakal�m sat�n almak ister misin?\n1-Evet.\n2-Hay�r.\n");
					scanf("%d",&Lsecim1);
						while(Lliman != 0){
							printf("Gemici:Peki.Gemiler en pahal�dan en ucuza do�ru gider.\n�u en soldaki en pahalas� ad� KISMET'tir.�ok g��l� bir gemidir.Ayn� zamanda sava� gemisidir.Fiyat� 10.000 alt�nd�r.\nDi�er gemi y�k gemisidir lakin g��l�d�r.Heniz bir ad� yok.Fiyat� 7.000 alt�nd�r.\nEn k���k olan�n ad� Ser�edir h�zl�d�r lakin g��s�zd�r savunmas�zd�r.Fiyat� 4.000 alt�nd�r.\n");
				if(Lsecim1 == 1){
					printf("Gemici:Pekala hangisini almak istersin:\n1-K�smet.\n2-Y�k gemisi.\n3-Ser�e.\n4-Ayr�l.\nNe yapmak istiyorsun.\n");
					scanf("%d",&Lsayac);
					
				
				if(Lsayac == 1){
					printf("Gemici:Pekala beyim.K�smet art�k sizindir.�stedi�iniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 10.000;
					printf("Alt�n�n�z: %d\n",altin);
					
				}
				else{
					printf("Paran yetersiz!\n\n");
					
				
				}
				if(Lsayac == 2){
					printf("Gemici:Pekala beyim.Bu y�k gemisi sizindir.�stedi�inizi zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 7.000;
					printf("Alt�n�n�z: %d\n",altin);
				
				}
				else{
					printf("Paran�z yetersiz!\n\n");
				
				}
				if(Lsayac == 3){
					printf("Gemici:Pekala beyim.Ser�e art�k sizindir.�stedi�iniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 4.000;
					printf("Alt�n�n�z: %d\n",altin);
				
				}
				else{
					printf("Paran yetersiz!\n\n");
				
				}
				if(Lsayac == 4){
					printf("Bizim karakter:Ya da te�ekk�rler gemici.\n");
				
				}
			}
			else if(Lsecim1 == 2){
				printf("Geri d�n�l�yor...\n");
			break;
			}
		
		}
	}
		else if(Lsecim1 == 2){
			printf("Geri d�n�l�yor...\n");
		break;
		}
      } 
     }
      else if(Lsecim1 == 3){
      	srand(time(NULL));
      	
      	Liht3 = rand() % 5;
		printf("G�rev:\nBal�k tutmak.\n");
	
		printf("G�reve gitmeye haz�r m�sn?\n1-Evet.\n2-Hay�r.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Bilgilendirme:\nSenden istenilen say�y� do�ru girersen ve e�er 10 denemeden �nce bilirsen bal��� kapaers�n.Her bal��� tutmak i�in 3 olta atma hakk�n var.E�er bal��� tutarsan hakk�n ayn� kal�r.\nG�nl�k 10 tane bal�k tutma hakk�n var.\nHadi ba�layal�m.\n");
				printf("Sandala atlad�n ve denize bal�k tutmak i�in a��ld�n.\nTutabilece�in bal�klar:\n1-�ipura.\n2-Alabal�k.\n3-Palamut.\n4-K���k bal�k.\nBakal�m ne yakalyacaks�n.\n");
				Lbaliktutma = rand() % 3;
				Lsayac3 = rand() % 30;
				Lhak4 = 3;
				Ldeneme4 = 0;
				Lj = 0;
			
			while(Lj != 10){
				
				Lhak4 = 3;
	 	while(Lhak4 != 0){
			Ldeneme4 = 0;
		 while(Ldeneme4 != 10){
					printf("Say� gir:");
					scanf("%d",&Lsans7);
					if(Lsans7 < Lsayac3){
						printf("Say�y� b�y�lt�n.\n");
					}
					else if(Lsans7 > Lsayac3){
						printf("Say�y� k���lt�n.\n");
					}
					Ldeneme4++;
					
					if(Lsayac3 == Lsans7){
						Lsayac4++;
						printf("Tebrikler do�ru.Hakk�n�z ayn� kald�\n");
						Lsans7 = Lsayac3;
						Lhak4 = 0;
						Ldeneme4 = 10;
						Lb = 1; 
						printf("Kalan hakk�n�z: %d\n",Lhak);
						printf("Eldeki bal�k say�s�: %d\n",Lsayac4);
					}
					else if(Lhak4 > 1 && Ldeneme4 == 10){
						printf("Kaybettiniz.Hakk�n�z azald�.\n");
						Lhak4--;
						printf("Kalan hakk�n�z: %d\n\n",Lhak);
						
					}
					else if(Lhak4 == 1 && Ldeneme4 == 10){
						printf("T�m haklar�n�z bitti.Kaybettiniz.\n\n");
						Lb = 0;
						Lj++;
						Lhak4--;
					}
			    }
			}	
				
			if(Lb == 1){
				printf("%d kadar bal���n�z� satt�k %d alt�n kazand�n�z:\n",Lsayac4,(Lsayac4 * 5));
				altin = altin + (Lsayac4 * 5);
				printf("Alt�n�n�z: %d\n",altin);
				Lj++;
			/*	if(Lbaliktutma == 0){ BUNLAR �UANLIK B�LYE �TEMLER �LE BERABER D�CELT�LECEK
					printf("\nYeni bal�k: �ipura.\n");
				}
				else if(Lbaliktutma == 1){
					printf("\nYeni bal�k: Alabal�k.\n");
				}
				else if(Lbaliktutma == 2){
					printf("\nYeni bal�k: Palamut.\n");
				}
				else if(Lbaliktutma == 3){
					printf("\nYeni bal�k: K���k Bal�k.\n");
				}	
			*/}
			
			printf("Bal�k tutmaya devam m�?\n1-Devam.\n2-Geri d�n.\n");
			scanf("%d",&Lsecim1);
			
	 	if(Lsecim1 == 2){
			printf("Geri d�n�l�yor...\n");
	 	break;	
	 	}
    } 
}

        else if(Lsecim1 == 2){
      		printf("O zaman limana geri d�n�yoruz.\n");
      		printf("Geri d�n�l�yor...\n");
      		break;
		  }
	  } 
	  else if(Lsecim1 == 4){
	  	printf("Limana br g�z att�n ve geri ��k�yorsun.\n");
	  	printf("Geri d�n�l�yor...\n");
	  	break;
	  }
    }
					
				
				break;	
					
				case 12:
					
					while(Esay!=0)
					{
		
						printf("hangi alandaki e�yalar�n�za bakmak istiyorsunuz?\n");
						printf("[1] sava� aletleri \n[2] z�rhlar\n[3] iksirler ve petler\n[4]ziynet e�yalar�\n");
						printf("se�iminiz: ");
						scanf("%d",&Esay1);
		
						if(Esay1==1)
						{
							printf("[1]K�sa K�l��(Hasar� 20 artt�r�r): %d              [2]Uzun K�l��(Hasar� 30 artt�r�r): %d      [3]Tek Elli A��r K�l��(Hasar� 40 artt�r�r) : %d\n",kil[0],kil[1],kil[2]);
							printf("[4]�ift Elli A��r K�l��(Hasar� 50 artt�r�r): %d    [5]Ekmek B��a��(Hasar� 10 artt�r�r): %d    [6]Han�er(Hasar� 15 artt�r�r): %d\n",kil[3],bic[0],bic[1]);
							printf("[1]K�sa Balta(Hasar� 30 artt�r�r): %d              [2]Uzun Balta(Hasar� 50 artt�r�r): %d      [3]Tek Elli A��r Balta(Hasar� 70 artt�r�r): %d\n",bal[0],bal[1],bal[2]);
							printf("[4]�ift Elli A��r Balta(Hasar� 90 artt�r�r): %d \n",bal[3]);
							printf("[1]Uzun M�zrak(Hasar� 40 artt�r�r): %d             [2]�� Ba�l� M�zrak(Hasar� 60 artt�r�r): %d \n",miz[0],miz[1]);
							printf("[3]Uzun Karg�(Hasar� 80 artt�r�r): %d              [4]Baltal� Karg�(Hasar� 100 artt�r�r): %d \n",kar[0],kar[1]);
							printf("[1]K�sa Yay(Okun hasar�n� 20 artt�r�r): %d         [2]Uzun Yay(Okun hasar�n� 30 artt�r�r): %d [3]Crossbow(Okun hasar�n� 50 artt�r�r): %d \n",yay[0],yay[1],yay[2]);
							printf("[4]Tahta Ok(Okun hasar�n� 2 artt�r�r: %d           [5]Ta� Ok(Okun hasar�n� 4 artt�r�r): %d \n",ok[0],ok[1]);
							printf("[1]Klasik Yuvarlak Kalkan(Defans� 20 artt�r�r): %d [2]Klasik Uzun Kalkan(Defans� 30 artt�r�r): %d \n",kalkan[0],kalkan[1]);
							printf("[3]B�y�k Yuvarlak Kalkan(Defans� 50 artt�r�r): %d  [4]Dayan�kl� Yuvarlak Kalkan(Defans� 70 artt�r�r): %d \n",kalkan[2],kalkan[3]);
							system("pause");
						}
		
						else if(Esay1==2)
						{
							printf("[1]Eskimi� Mi�fer(Defans� 10 artt�r�r): %d         [2]Klasik Mi�fer(Defans� 15 artt�r�r): %d \n",mig[0],mig[1]);
							printf("[3]Kaliteli Mi�fer(Defans� 20 artt�r�r): %d        [4]Dayan�kl� Mi�fer(Defans� 25 artt�r�r): %d \n",mig[2],mig[3]);
							printf("[1]Hasarl� G�vde Z�rh�(Defans� 30 artt�r�r): %d    [2]Klasik G�vde Z�rh�(Defans� 40 artt�r�r): %d \n",gov[0],gov[1]);
							printf("[3]Kaliteli G�vde Z�rh�(Defans� 50 artt�r�r): %d   [4]Dayan�kl� G�vde Z�rh�(Defans� 60 artt�r�r): %d \n",gov[2],gov[3]);
							printf("[1]Par�alanm�� Bacak Z�rh�(Defans� 5 artt�r�r): %d [2]Klasik Bacak Z�rh�(Defans� 10 artt�r�r): %d\n",bac[0],bac[1]);
							printf("[3]Kaliteli Bacak Z�rh�(Defans� 15 artt�r�r): %d   [4]Dayan�kl� Bacak Z�rh�(Defans� 20 artt�r�r): %d \n",bac[2],bac[3]);
							printf("[1]Paslanm�� Kol Z�rh�(Defans� 5 artt�r�r): %d     [2]Klasik Kol Z�rh�(Defans� 10 artt�r�r): %d \n",kol[0],kol[1]);
							printf("[3]Kaliteli Kol Z�rh�(Defans� 15 artt�r�r): %d     [4]Sa�lam Kol Z�rh�(Defans� 20 artt�r�r): %d \n",kol[2],kol[3]);
							printf("[1]Y�n Eldiven(Defans� 5 artt�r�r): %d             [2]Deri Eldiven(Defans� 10 artt�r�r): %d \n",eld[0],eld[1]);
							printf("[3]Kaliteli Eldiven(Defans� 15 artt�r�r): %d       [4]A��r Eldiven(Defans� 20 artt�r�r): %d \n",eld[2],eld[3]);
							printf("[1]Y�n Bot(Defans� 10 artt�r�r): %d                [2]Klasik Bot(Defans� 15 artt�r�r): %d \n",bot[0],bot[1]);
							printf("[3]Sa�lam Bot(Defans� 20 artt�r�r): %d             [4]Dayan�kl� Bot(Defans� 25 artt�r�r): %d \n",bot[2],bot[3]);
							system("pause");
						}
		
						else if(Esay1==3)
						{
							printf("[1]Kuvvet �ksiri(Sava� s�ras�nda +x hasar art���)              [2]Sa�l�k �ksiri(Sava� s�ras�nda +x sa�l�k art���)(eklenmedi)\n");
							printf("[3]Dayan�kl�l�k �ksiri(Sava� s�ras�nda +x dayan�kl�l�k art���) [4]�ans �ksiri(eklenmedi)\n");
							printf("[1]Kedi(Zihin yetene�i 50 artar): %d                           [2]K�pek(Tahmin yetene�i 50 artar): %d \n",pet[0],pet[1]);
							system("pause");
						}
		
						else if(Esay1==4)
						{
							printf("[1]Bronz Kolye: %d             [2]Alt�n Kolye: %d           [3]Elmas Kolye: %d \n",kolye[0],kolye[1],kolye[2]);
							printf("[1]Bronz Bileklik: %d          [2]Alt�n Bileklik: %d        [3]Elmas Bileklik: %d \n",bilek[0],bilek[1],bilek[2]);
							printf("[1]Bronz Y�z�k: %d             [2]Alt�n Y�z�k: %d           [3]Elmas Y�z�k: %d \n",yuzuk[0],yuzuk[1],yuzuk[2]);	
							printf("[1]Bronz K�pe: %d              [2]Alt�n K�pe: %d            [3]Elmas K�pe: %d \n",kupe[0],kupe[1],kupe[2]);
							system("pause");
						}		
		
						printf("[1]��kmak istiyorum \n[2]bakmaya devam etmek istiyorum \nenvanterden ��kmak ister misiniz: ");
						scanf("%d",&Esay2);
						
						if(Esay2==1)
						{
							Esay--;
						}
					}
					
				break;
				
				case 13:
					printf("Nizam S�valyeleri Kalesine girdin. ��eride bir ��valye seni kar��l�yor\n");
					printf("Nizam ��valyesi giri� biletini g�rebilir miyim?  ");				
					scanf("%d",&Kbilet);
					if(Kbilet==1){
						printf("Nizam ��valyeleri Kalesine ho�geldin! Kalenin i�inde istedi�in gibi gezebilirsin ama e�yalara fazla dokunmamaya �al��.\n");
						Ksay=1;
						while(Ksay!=0){
						printf("Ne yapmak istersin?\n");
						printf("[1]Etrafta dola� [2]Kumandan�n ofisine git [3]Kalenin deposuna git [4]siuuuuuu  ");
						scanf("%d",&Ksecim);
						if(Ksecim==1){
							a=rand()%4;
							a=a+1;
							if(a==1){
								printf("event eklenecek\n");
							}
							else if(a==2){
								printf("event eklenecek\n");
							}
							else if(a==3){
								printf("event eklenecek\n");
							}
							else if(a==4){
								printf("event eklenecek\n");
							}
						}
						else if(Ksecim==2){
							
						}
						else if(Ksecim==3){
							printf("\nKalenin deposuna geldin ve birs�r� deperli e�ya ve silah oldu�unu g�rd�n.\n");
							printf("Ne yapacaks�n?\n");
							printf("[1]De�erli e�yalar� �al(Yakalanma riski y�ksek)\n[2]Silahlar� �al(Yakalanma riski y�ksek)\n[3]Her�eyi �al(Yakalanma riski �ok y�ksek)\n[4]Hi�bir�eye ellemeden depodan ayr�l  ");
							scanf("%d",&Kdepo);
							if(Kdepo==1){
								
							}
							else if(Kdepo==2){
								
							}
							else if(Kdepo==3){
								
							}
							else if(Kdepo==4){
								printf("Hi�bir de�erli e�ya ve silaha dokunmad�n ve depodan ayr�ld�n.\n");
								
							}
						}
						else if(Ksecim==4){
							Ksay=0;
						}
			}
					}
					else{
						printf("��valye sana siktir �ekti ve seni kaleden kovdu.");
					}
					
					
					
				
				break;
			}
				
				
			while(exp>=Mexp)
			{
				if(exp>=Mexp)
				{
				exp=exp-Mexp;
				lwl+=1;
				Sexp=((1+(0,2*lwl))*Mexp)+Mexp;	
				Mexp=Sexp;
				printf("\n\n-------Seviye Atlad�n�z!!-------");
				yetenekpuani();
				}
			}
			/*if(xp>=10 && lvl==0){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}
			if(xp>=20 && lvl==1){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}
			if(xp>=45 && lvl==2){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}
			if(xp>=100 && lvl==3){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}
			if(xp>=300 && lvl==4){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}
			if(xp>=800 && lvl==5){ 
			lvl++;
			printf("\n\n-------Seviye Atlad�n�z!!-------");
			yetenekpuani();
			}*/
			
			system("pause");
			system("cls");
			
			if((((hiz/100)-Igun)>1)&&can>0)
			{
			printf("\n\n�ok h�zl�s�n g�n bitmeden bir i� daha yapabilirsin\n\n");
			}
			Igun++;
		}
			int oyunsayac=0; //SORUN OLURSA �NT� S�L
			intyilanyumurtasialmahakki=0;
			printf("G�N B�TT�\n");
            gun +=1;
			
		
		}
	}
	else if(sec=='n')
	{
		printf("Ke�ke bir �ans verseydin :'(");
	}
	else
	{
		printf("ne diyorsun be");
	}
	
	
	
	return 0;
}
