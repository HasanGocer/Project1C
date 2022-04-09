#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>  

//int main satýrý:845

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
	printf("+4 Hak Kazandýn!!\n");
	printf("ÝPUCU: Aradýðýn sayý %d ile %d arasýnda...\n",tahmin-10,tahmin+10);
	while(hak>0)
	{
		hak--;
		printf("Kalan hakkýn: %d\n",hak);
		if(hak==0)
		{
			printf("Kaybettin!!\n");
			altin-=50;
			printf("Kalan altýn: %d\n",altin);
			break;
		}
		printf("Bir sayý tahmin et: ");
		scanf("%d",&tahmin);
		if(sanssayi==tahmin)
		{
			printf("Kazandýn!!\n");
			printf("Bir tane indirim hakkýn var!!\n(Fiyatý yarýsýný hesapla)\n");
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
	printf("HATIRLATMA!!\nEðer indirim oyundan gelen bir indirim hakkýn varsa onu pazarlýkta kullanamazsýn!\n");
	while(fonkdongu!=0)
	{
		printf("[1]Pazarlýk yap\n[2]Devam et\n");
		scanf("%d",&pazarliksecim);
		if(pazarliksecim==1)
		{
			srand(time(NULL)); 
			sanspazar=rand()%100;
			printf("sans = %d\n",sanspazar);
			if(karizma>=0 && karizma<10){
			 
				if(sanspazar>=0 && sanspazar<60)
				{
					printf("Ýndirim yok\n");		
					break;			
				}
				else if(sanspazar>=60 && sanspazar<70)
				{
					printf("Yüzde 10 indirim kazandýn!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=70 && sanspazar<80)
				{
					printf("Yüzde 25 indirim kazandýn!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=80 && sanspazar<90)
				{
					printf("Yüzde 40 indirim kazandýn!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=90 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandýn!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=10 && karizma<30)
			{ 
				if(sanspazar>=0 && sanspazar<50)
				{
					printf("Ýndirim yok\n");
					break;
				}
				else if(sanspazar>=50 && sanspazar<60)
				{
					printf("Yüzde 10 indirim kazandýn!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=60 && sanspazar<75)
				{
					printf("Yüzde 25 indirim kazandýn!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=75 && sanspazar<85)
				{
					printf("Yüzde 40 indirim kazandýn!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=85 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandýn!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=30 && karizma<50)
			{ 
				if(sanspazar>=0 && sanspazar<40)
				{
					printf("Ýndirim yok\n");
					break;
				}
				else if(sanspazar>=40 && sanspazar<50)
				{
					printf("Yüzde 10 indirim kazandýn!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=50 && sanspazar<65)
				{
					printf("Yüzde 25 indirim kazandýn!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=65 && sanspazar<80)
				{
					printf("Yüzde 40 indirim kazandýn!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=80 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandýn!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=50)
			{ 
				if(sanspazar>=0 && sanspazar<30)
				{
					printf("Ýndirim yok\n");
					break;
				}
				else if(sanspazar>=30 && sanspazar<40)
				{
					printf("Yüzde 10 indirim kazandýn!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=40 && sanspazar<55)
				{
					printf("Yüzde 25 indirim kazandýn!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=55 && sanspazar<75)
				{
					printf("Yüzde 40 indirim kazandýn!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=75 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandýn!\n");
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
				printf("%d karþýlýðýnda satýn aldýn\n",itemfiyat/2);
				item++;	//envanterdeki bu item sayýsýný arttýrýr
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli altýnýn yok!\n");
			}
		}
		else
		{
			printf("Kaç tane alacaksýn? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi)
			{
				printf("%d karþýlýðýnda satýn aldýn\n",itemfiyat*almasayi);
				item+=almasayi; //envanterdeki bu item sayýsýný arttýrýr
				altin-=itemfiyat*almasayi;
			}
			else
			{
				printf("Yeterli altýnýn yok!\n");
			}
		}	
	}
	
	else
	{
		if(indirim==1)
		{
			if(altin>=itemfiyat/2)
			{
				printf("%d karþýlýðýnda satýn aldýn\n",itemfiyat/2);
				item++;	//envanterdeki bu item sayýsýný arttýrýr
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli altýnýn yok!\n");
			}
		}
		else
		{
			printf("Ürünün yeni fiyatý: %d\n",itemfiyat*(100-pazarlik)/100);
			printf("Kaç tane alacaksýn? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi*(100-pazarlik)/100)
			{
				printf("%d karþýlýðýnda satýn aldýn\n",itemfiyat*almasayi*(100-pazarlik)/100);
				item+=almasayi; //envanterdeki bu item sayýsýný arttýrýr
				altin-=itemfiyat*almasayi*(100-pazarlik)/100;
			}
			else
			{
				printf("Yeterli altýnýn yok!\n");
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
	printf("Satýþ fiyatý: %d\n",itemfiyat/2);
	int satsayac=1;
	int satmasayi;
	while(satsayac!=0)
	{
		printf("Kaç tane satmak istiyorsun? ");
		scanf("%d",&satmasayi);
		if(satmasayi==-1)
		{
			break;
		}
		else if(satmasayi>item)
		{
			printf("Biraz fazla girdin galiba!!\n");
			printf("Geri gelmek için -1'e bas\n");
		}
		else
		{
			
			altin+=(itemfiyat/2)*satmasayi;
			item-=satmasayi;
			printf("Altýnýn: %d\n",altin);
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
	
printf("rakibin tahmini saldýrý hasarý :%d\nrakibin tahmini caný :%d",Dsal2,Dcan1);
printf("%d.Tur saldýrý sýrasý sizde.\n1-[Saldýr]\n2-[Ýyileþ]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
scanf("%d",&Ssec);
							
	if(Ssec==1)
	{
		printf("saldýrý türünüzü seçiniz\n[1] reine(hasar %d dayanýklýlýk 70)\n[2]beau(hasar %d dayanýklýlýk 50)\n[3]vaillant(hasar %d dayanýklýlýk 30)\nHangi saldýrý türüyle saldýrmak istersiniz: ",(saldiri*3),(saldiri*2),saldiri);
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
			printf("Hasarýnýz=%d\n",saldiri);
			day= day -70;
			SSSay--;
			}
			
			else
			{
				printf("dayanýklýlýðýnýz yetmiyor");	
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
			printf("Hasarýnýz=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			
			else
			{
				printf("dayanýklýlýðýnýz yetmiyor");	
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
			printf("Hasarýnýz=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			}
			else
			{
				printf("dayanýklýlýðýnýz yetmiyor");	
			}
		
		}
	}

	else if(Ssec==2)
	{
		
		printf("savunma türünüzü seçin.\n[1] gratuit(defansýnýz %d artacak dayanýklýlýðýnýz 30)\n[2] loué(defansýnýz %d artacak dayanýklýlýðýnýz 50)\n[3] de valeur(defansýnýz %d artacak dayanýklýlýðýnýz 70)\nHangi savunma türüyle savunmak istersiniz: ",(def*3),(def*2),def);
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
			printf("dayanlýklýlýðýnýz%d/%d\n",day,Mday);
			printf("Canýnýz=%d/%d\n",can,Mcan);
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
			printf("dayanlýklýlýðýnýz%d/%d\n",day,Mday);
			printf("Canýnýz=%d/%d\n",can,Mcan);
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
			printf("dayanlýklýlýðýnýz%d/%d\n",day,Mday);
			printf("Canýnýz=%d/%d\n",can,Mcan);	
		}
		
		else
		{
			printf("herhangi bir þey yapmadýnýz");
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
		printf("Sýraný boþ geçtin rakibin seninle dalga geçiyor\n");
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
			printf("Aldýðýnýz hasar= %d\nKalan canýnýz= %d/%d\ndayanýklýlýðýnýz %d/%d",Dsaldiri,can,Mcan,day,Mday);
		}
		else
		{
			Dcan=Dcan+(DMcan/10);
		}
		def=def1;
		saldiri=sal1;
		printf("Aldýðýnýz hasar= 0\nKalan canýnýz= %d/%d\ndayanýklýlýðýnýz %d/%d",Dsaldiri,can,Mcan,day,Mday);
	}

	
	tur+=1;
	printf("\n");}
						
	if(Dcan<=0)
	{
	printf("GALÝBÝYET!!!\n");
	exp+=Dsaldiri;
	onur+=Dsaldiri;
	printf("Tecrübeniz: %d\n",exp);
	altin=altin+(DMcan/10);
	hasar= hasar+(DMcan/10);
	printf("Hasarýnýz %d arttý\n",DMcan/10);
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
	printf("\n\nYetenek puanýnýzý kullanýn");
	
	while(yetw!=0)
	{
		printf("\n[1]Kýlýç yeteneði [2]Yay kullanma yeteneði [3]Defans yeteneði [4]Zihin okuma [5]Tahmin yeteneði [6]Onur [7]Büyü yeteneði[8] Hýz\n");
		scanf("%d",&lvlyet);
		switch(lvlyet)
		{
			
			case 1:
				hasar+=10;
				printf("Yeni kýlýç yeteneðin: %d\n",hasar);
				yetw--;
			
			break;
		
			case 2:
				okyet+=10;
				printf("Yeni yay kullanma yeteneðin: %d\n",okyet);
				yetw--;
			
			break;
		
			case 3:
				def+=10;
				printf("Yeni defans yeteneðin: %d\n",def);
				yetw--;
			
			break;
		
			case 4:
				zih+=10;
				printf("Yeni zihin okuma yeteneðin: %d\n",zih);
				yetw--;
			
			break;
			
			case 5:
				tahm+=10;
				printf("Yeni tahmin yeteneðin: %d\n",tahm);
				yetw--;
			
			break;
			
			case 6:
				onur+=10;
				printf("Yeni onur yeteneðin: %d\n",onur);
				yetw--;
			
			break;
		
			case 7:
				buyuyet+=10;
				printf("Yeni büyü yeteneðin: %d\n",buyuyet);
				yetw--;
			
			break;
			
			case 8:
				hiz+=10;
				printf("Yeni hýz yeteneðin: %d\n",hiz);
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
		printf("Altýn kesesi buldun(10 altýn)\n");
		altin= altin+10;
		printf("Altýnýnýz: %d\n",altin);
		}
	
	else if(say1>80)
	{
		printf("Bir büyücü çýka geldi ve sana bir tür kutsama yaptý.\n");
		buyuyet= buyuyet+10;
		printf("Büyü gücünüz: %d\n",buyuyet);
	}
	
	else if(say1>70)
	{
		printf("Bir tür kapan bitkiye denk geldin. Ondan kaçmak için hamle yaptýn ama geç kaldýn. Bir tür sývý ile kaplandýn. Artýk daha hýzlýsýn?!?!?!?\n");
		hiz= hiz+10;
		printf("Hýzýnýz: %d\n",hiz);
	}
	
	else if(say1>60)
	{
		printf("Bir kemik yýðýný buluyorsun. Ormanýn derinliklerinde kaybolmuþ olmalý. Eþyalarýný almak ister misin?\n[1]Evet [2]Hayýr\nNe yapacaksýn:");
		scanf("%d",&kemik);
		if(kemik==1)
		{
			printf("Sunlar bulundu:1 kese altýn(100 altýn),20 taþ ok, 1 demir kýlýç\n");
			altin=altin+ 100;
			ok[1]= ok[1]+20;
			hasar=hasar+30;
			printf("Altýnýnýz: %d\nOkunuz: %d\nHasarýnýz: %d\n",altin,ok[1],hasar);
		}
		else
		{
			printf("Hiçbir þey yapmadan onu sonsuz yalnýzlýða býraktýn ve devam ettin\n");
		}
	}
	
	else if(say1>50)
	{
		printf("Bir periye denk geldin ve kalbinin biraz daha hýzlý attýðýný farkediyorsun... Uyandýn peri yok ama bir þeyler deðiþmiþ.\n");
		Mcan=Mcan+50;
		printf("Canýnýz: %d/%d\n",can,Mcan);
	}
	
	else
	{
		printf("Ortalýkta hiçbir þey yok\n");
	}
}

int hasen(void)
{
	
	int say1=(rand()%100);
	
	if(say1==1)
	{
		printf("Bir gece uyku tulumunda sessiz sakince uyurken ay tanrýsý senin rüyalar aleminde ona sunduðun minneti kabul ediyor ve...\nSana altýn bir kýlýç veriyor!!\n");
		hasar +=150;
	}
	
	if(say1==2)
	{
		printf("Bir ejderha sen yataðýnda fosur fosur osurup uyurken seni bir lokmada ham yaptý. Acýsýz gibi görünse de beynin tüm acýyý hissetti.\n");
		can -= 1000;
	}
	
	if(say1==3)
	{
		printf("Uyuduðun yerin yanýnda bir kese altýn buldun(100 altýn). Muhtemelen bir hayýrsever senin haline acýyýp koydu.\n");
		altin=altin+100;
	}
	
	if(say1==4)
	{
		int koylu;
		printf("Yolda yürürken bir köylüye rastladýn. Senden yardým istiyor.\n[1]Yardým et\n[2]Yoluna devam et\nNe yapacaksýn:");
		scanf("%d",&koylu);
		if(koylu==1)
		{
			printf("Köylünün sabaný taþa sýkýþmýþ güçlü kollarýnla birkaç hamlede kurtardýn. Köylü ve ailesi sana minnettar.\n");
			onur=onur+50;
			printf("Onurunuz: %d",onur);
		}
		else
		{
			printf("Köylünün dili uzun çýktý. Yardým etmediðini tüm ahali öðrendi.\n");
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
		printf("Yolda dinlenirken güzel bir cadýya denk geldin ve dikkatini çektin. Senden hoþlandý ve sana bir iksir verdi.içtin ve bayýldýn. Ayýldýðýnda cadý yoktu.\n");
		Mcan=Mcan+100;
		printf("Canýnýz: %d/%d\n",can,Mcan);
	}
	
	if(say1==6)
	{
		printf("Bir ustaya denk geldin. Seni sevdi ve sana bir büyü öðretmek istedi. Büyüler gelince rasgele bir büyü öðret\n");
	}
	
	if(say1==7)
	{
		printf("Bir Nizam Þövalyesi yanýndan geçiyor. Senin güçlü olduðunu gördüðü ve hoþuna gitti. Seni minik bir düelloya davet ediyor.\n");
		
		int Ssec,DMcan=300,Dcan=300,Dsaldiri=300,saldiri=hasar/3,tur=0,Ddef=300;
						
		while(Dcan>0&&can>0)
		{
			printf("%d.Tur saldýrý sýrasý sizde.\n1-[Saldýr]\n2-[Ýyileþ]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
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
				printf("Hasarýnýz=%d\n",saldiri);
			}
			else if(Ssec==2)
			{
				can= can+(Mcan/10);
				if(can>Mcan)
				{
					can=Mcan;
				}
				printf("Canýnýz=%d\n",can);
			}
			else if(Ssec==3)
			{
				printf("Þövalye sana\"senin onurlu ve güçlü bir savaþçý olduðunu düþünmüþtüm\" diyor. Ve gidiyor\n");
			break;
			}					
			
			else
			{
				printf("Sýraný boþ geçtin rakibin seninle dalga geçiyor\n");
			}
							
			if(tur%3==0||tur%3==1)
			{
				Dsaldiri = Dsaldiri -(def/10);
				can= can-Dsaldiri;
				printf("Aldýðýnýz hasar=%d\nKalan canýnýz=%d/%d\n",Dsaldiri,can,Mcan);
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
		printf("Þövalye senin karþýnda diz çöküyor ve senin bu gücünden etkileniyor.Sana Nizam Þövalyesi Karargahýna giriþ belgesi veriyor.(Ýtemler geldiðnide eklenir ve Nizam Þövalyesi Karargahý da eklenir)\n");
	}
	
	if(say1==8)
	{
		printf("Bir nene görüyorsun. Çok tatlý birisi. Yanýna gidip halini hatrýný soracakken alnýna dokunuyor ve gözüne perde iniyor. Bir süre sonra düzeliyorsun\n");
	zih=zih+10;
	printf("Zihin gücü: %d\n",zih);
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
	int cikis; //Satýþ ekranýndan çýkar
	int kel; //KUAFÖR
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
	int kediotu=0; //ÝTEM 
	int yilanyumurtasi=0; //ÝTEM
	int bilgi[8]={0,0,0,0,0,0,0}; //ÝTEMLER
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
	printf("Selam dünyalý, bu girdiðin evrene birçok yiðit savaþçý girmeyi denese de çýkmayý baþaramadý.\nBu sebepten çok dikkatli ol! Dünyaya giriþ yapmak istediðine hala emin misin?\n");
	printf("Kabul ediyorsan y'ye, Reddediyorsan n'ye bas...");
	scanf("%c",&sec);
	
	if(sec=='y')
	{
		
		printf("Bana kendini tanýt...\n");
		printf("Ýsmin ne?\n");
		scanf("%s",&isim);
		system("CLS");
		printf("Mesleðin ne?\n");
		
		while(mes1!=0)
		{
			printf("[1]Savaþçý\n[2]Okçu\n[3]Büyücü\n[4]Dedektif\n");
			scanf("%d",&mes);
			switch(mes)
			{
				case 1: hasar+=150;			printf("Yeni kýlýç yeteneðin: %d",hasar);
					mes1--;
				break;
				
				case 2: okyet+=150;			printf("\nYeni yay kullanma yeteneðin: %d",okyet);
					mes1--;
				break;
				
				case 3: buyuyet+=150;			printf("\nYeni büyü yeteneðin: %d",buyuyet);
					mes1--;
				break;
				
				case 4: tahm+=75; zih+=75;	printf("\nYeni tahmin yeteneðin: %d\nYeni zihin yeteneðin: %d",tahm,zih);
					mes1--;
				break;
				
				default: printf("Tekrar dene!\n\n");
				break;
			}
		}
				
				system("pause");
				system("cls");
				
		printf("\nElinde bulunan 10 adet puaný karakterini geliþtirmek için kullan\n");
		
		printf("\n[1]Kýlýç yeteneði [2]Yay kullanma yeteneði [3]Defans yeteneði [4]Zihin okuma [5]Tahmin yeteneði [6]Onur [7]Büyü yeteneði[8] Hýz\n");
		
		
		while(puan!=0)
		{
			printf("Hangi özelliðinizi geliþtirmek istersiniz:");
    		scanf("%d",&yet);
    		
			switch(yet)
			{
    			case 1:
					hasar+=10;
					printf("\nYeni kýlýç yeteneðin: %d\n",hasar);
					puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 2: 
					okyet+=10;	
					printf("\nYeni yay kullanma yeteneðin: %d\n",okyet);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 3: 
					def+=10;
					printf("\nYeni defans yeteneðin: %d\n",def);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 4: 
					tahm+=10;
					printf("\nYeni zihin okuma yeteneðin: %d\n",zih);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 5: 
					zih+=10;
					printf("\nYeni tahmin yeteneðin: %d\n",tahm);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 6: 
					onur+=10;
					printf("\nYeni onur yeteneðin: %d\n",onur);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				case 7: 
					buyuyet+=10;
					printf("\nYeni büyü yeteneðin: %d\n",buyuyet);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			case 8: 
					hiz+=10;
					printf("\nYeni hýz yeteneðin: %d\n",hiz);
    				puan--;
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
    			
				default:
    				printf("Tekrar dene!!");
    				printf("Kalan puanýnýz: %d\n\n",puan);
    			break;
			}
		}
    			can=Mcan;
    			system("cls");
		
		printf("\nGireceðin evrende çok düþük ihtimallerde nadir eþyalarla kutsanabilir, güçlü büyücülerin efsunlarýna uðrayabilir\nveya ansýzýn bir ejderha tarafýndan yutulabilirsin.\nO yüzden vereceðin her kararda sonraki kararýnýn seni sona yaklaþtýrmadýðýndan emin ol.");
		printf("\n\nHasarýný günden güne antrenman yaparak artýrabilir veya sakatlanýp azalmasýna sebep olabilirsin.");
		printf("\nCan barýn her þeyden önemlidir. birçok þeyden etkilendiði gibi birçok þeye de etki etmektedir.");
		printf("\nDefans gücün bardaki sarhoþla antrenman sýrasýnda geliþir ama cebindeki çakýya dikkat et!! \n(Defansýný azaltýp canýný azaltabilir.)");
		printf("\nOk sayýný çalý kullanarak günden güne artýrabilirsin veya yerden bularak da kazanbilirsin.");
		printf("\nDüþmanlarýna dikkat etmelisin. Onlarýn gücünü öðrenebilmek için tahmin yeteneðininin yeteri kadar olmasý gerekir.\nTahmin yeteneðini tavernadaki kýzlar hakkýnda tahmin yaparak kazanabilirsin.\n\n");
        
		while(can>0)
		{
		Igun=0;
		while(Igun<=(hiz/100)&&can>0)
		{
            printf("%d. Gün\n",gun);
			hasen();
            printf("Baþlýyoruz hazýr mýsýn?\n");
            printf("Seviyeniz: %d\n",lwl);
            printf("Tecrübeniz: %d/%d\n",exp,Mexp);
   			printf("Hasarýnýz: %d\n",hasar);
   			printf("Canýnýz: %d/%d\n",can,Mcan);
   			printf("Defansýnýz: %d\n",def);
   			printf("Ok yeteneðiniz: %d\n",okyet);
   			printf("Okunuz: %d\n",ok[1]);
   			printf("Tahmin yeteneðiniz: %d\n",tahm);
   			printf("Zihin yeteneðiniz: %d\n",zih);
   			printf("Onurunuz: %d\n",onur);
   			printf("Hýzýnýz: %d\n",hiz);
   			printf("Altýnýnýz: %d\n",altin);
   			
   			day=Mday;
            printf("[1]Arenaya gir\n[2]Aþk çeþmesine git\n[3]Bara git\n[4]Ormana git\n[5]Büyücünün inine gir\n[6]Ýntihar maðrasýna gir\n[7]Evde dinlen(iyileþ)\n[8]Talim alanýna git\n[9]Çarþýya git\n[12]envantere bak\n");
            printf("Ne yapmak istersin:");
   			scanf("%d",&karar);
            
			switch(karar)
			{
				
				case 1:
					
					printf("Arenaya gittin.\n1-Cher[güç 1000]\n2-Aimer[güç 500]\n3-Ami[güç 300]\n4-Ordinaire[güç 100]\n5-Cupidite[güç 50]\n6-Haine[güç 20]\nRakibini seç:\n");
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
					printf("boþ geçtin manyak niye\n");
					}
				
				break;
				
				case 2:
					
					printf("Aþk çeþmesine geldiniz: 1-Dilek tutmak.\n2-Yeni insanlar ile tanýþma.\n3-Ticaret yapmak.\n");
					printf("Ne yapmak istersin:");
					scanf("%d",&secim);
					
					    
					    if(secim == 1)
						{
						iht = rand() % 10;
						printf("Ýhtimaller:1-Zengin olmak.\n2-Onurun artmasý.\n3-Yeni bir zýrh.\n4-Güçlenmek.\n");
						scanf("%d",&secim1);
					
						if(iht == 1)
						{
							printf("Dileðini tuttuktan sonra yolda yürürken bir hýrsýzýn güzel bir kadýnýn çantasýný çalarken gördün.1-Peþine düþ.\n2-Umursama.\n");
							scanf("%d",&secim2);
							if(secim2 == 2)
							{
								// piþmanlýk ileride gelecek...
							}
							else if(secim2 == 1)
							{
								printf("Uzun bir çabadan sonra çantayý hýrsýzdan aldýn ve hýrsýzý patakladýn.Çantayý açtýn ve o da ne!! içinde bir sürü para var.1-Çantayý sahibine götür.\n2-Çanta al ve kaç.\n");
								scanf("%d",&secim3);
								
								if(secim3 == 1)
								{
							
									printf("Çantayý sahibine götürdün ve kadýn bunun karþýlýðýnda sana bir miktar para verdi.\n");
									altin = altin + 200;
									onur = onur + 20;
									printf("Altýnýnýz: %d\n",altin);
									printf("Onurunuz: %d\n",onur);
								}
								else
								{
									altin = altin + 500;
									onur = onur - 10;
									printf("Altýnýnýz: %d\n",altin);
								    printf("Onurunuz: %d\n",onur);
								}
							}
						}
						}	
				        
						if(iht == 2)
						{
				        	printf("Yolda giderken bir adamýn siyahi bir adamý aþaðýladýðýný gördün.1-Siyahi adama yardým et.\n2-Umursama.\n");
				        	scanf("%d",&secim4);
				        	
				        	if(secim4 == 1)
							{
				        		printf("Adamýn yanýna gittin ve yaptýðýnýn yanlýþ olduðunu söyledin ama o da ne!! Adam sana karþýlýk verdi.1-Sende karþýlýk ver.\n2-Uyarmaya devam et.\n");
				        		scanf("%d",&secim5);
								
								if(secim5== 1)
								{
				        			printf("Adamý patakladýn ve adam sinirli bakýþlar ile kaçtý.Siyahi adam ise kýsýk ve korku dolu bir ses ile koþarak uzaklaþtý.\n");
				        			onur = onur + 15;
				        			printf("Onurunuz: %d\n",onur);
								}
								
								if(secim5 == 2)
								{
									printf("Adam senin uyarý ve hoþgörüne raðmen ayný harekete devam ediyor.1-Karþýlýk ver.\n2-Birþey yapma ve uzaklaþ");
									scanf("%d",&secim6);
									
									if(secim6 == 1)
									{
										printf("Adamý patakladýn ve adam sinirli bakýþlar ile kaçtý.Siyahi adam ise kýsýk ve korku dolu bir ses ile koþarak uzaklaþtý.\n");
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
							printf("Yolda giderken bir at arabasýndan sandýk düþtüðünü gördün.Hemen gidip açtýn ve o da ne!Ýçinde çok güzel bir zýrh var.1-Zýrhý al.\n2-At arabasýnýn arkasýndan baðýr.\n");
							scanf("%d",&secim7);
							
							if(secim7 == 1)
							{
							   printf("Zýrh hoþuna gitti ve zýrhý aldýn.");
							   def = def + 10;
							   printf("Defansýnýz: %d\n",def);
							}
							else
							{
								printf("At arabsýnýn akrasýndan baðýrdýn lakin seni duymadýlar.Yeni zýrh...");
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
								printf("Dileðini tuttun ve yolda gidiyorsun o da ne!! Habeþli Hasen Tanrýsý sana ilahi bir güç bahþetti.");
								hasar = hasar + 700;
								printf("Hasarýnýz: %d\n",hasar);
							}
				    	}
				    	
						if(secim == 2)
						{
				       	printf("Bir kadýn ile tanýþtýn.");
				       	printf("Kadýn:Merhabalar bana bir konuda yardýmcý olur musunuz?1-Yardým et.\n2-Umursama.\n");
				       	scanf("%d",&secim8);
				       	if(secim8 == 1)
						{
				       		printf("Bizim Karakter:Tabi ki! Buyrun sizi dinliyorum!\n");
				       		printf("Kadýn:Þu köþede gördüðünüz adamlar bana zorbalýk yapýyorlar.Bana yardým etmeniz karþýlýðýnda size çalýþtýðým barda bir içki verebilir ve bara giriþinizin kolay olmasýný saðlayabilirim.\n1-Yabancý kadýnýn dediðini yap.\n2-Yapma ve uzaklaþ.\n");
				       	    scanf("%d",&secim9); 
						   	
							if(secim9 == 1)
							{
				       			printf("Yabancý kadýnýn dediðini yaptýn ve adamlarý patakladýn.Ceblerinden bir miktar altin çýktý");
				       			altin = altin + 50;
				       			onur = onur + 20;
				       			printf("Onurunuz: %d",onur);
				       			printf("Altýnýnýz: %d",altin);
				       			printf("Yabancý Kadýn:Çok teþekkür ederim efendim.Adým Lisa.Hemen þu aþaðýdaki barda çalýþýyorum isterseniz gidebiliriz.\n1-Git.\n2-Gitme");
				       			scanf("%d",&secim11);
									
									if(secim11 == 1)
									{
				       					printf("Lisa ile beraber çalýþtýðý bara gittiniz ve içtiniz.Lisa sana bir iþini halletmen karþýlýðýnda barýn özel giriþi için bir giriþ kartý vereceðinin söyledi.");
				       					printf("Fakat bu iþ için 3 gün sonra gelmen gerektiðini ve iþi o zaman anlatacaðýný söyledi.\n1-Kabul et.\n2-Kabul etme.\n");
				       					scanf("%d",&secim11);
				       					
									   	if(secim11 == 1)
										{
				       						Ggun = gun + 3;
				       						printf("Lisa:Bara akþam saatlerinde gelen bir zorba var.Zamanýnda benim en kýymetli eþyamý çaldý.Eðer eþyamý alýp hakettiðini ona verirsen anlaþmamýz gerçekleþir");
				       						printf("Lisa'nýn dediði adamý takip ettin ve adamla yüzleþmek için uygun bir fýrsat buldun.\n1-Adamla yüzleþ.\n2-Bekle.\n");
				       						scanf("%d",&secim12);
				       						
											if(secim12 == 1)
											{
				       							printf("Adamdan eþyayý aldýn ve adamý fena benzettin.\n");
				       							altin = altin + 15;
				       							printf("Altýnýnýz: %d\n",altin);
				       							printf("Eþyayý aldýn ve Lisaya götürdün ve bunun karþýlýðýnda bara özel giriþ kartýný aldýn\n");
											}
											
											else
											{
												printf("Bekledin ve adam gözden kayboldu görev baþarýsýz!!");
											}
									   	}
									
										else if(secim11 == 2)
										{
									   		printf("Lisa'nýn dediðini yapmadýn ve bu yüzden sinirlenen Lisa oyalandýðýný düþündü ve seni bardaki bir kaç soytarýya dövdürdü\n");
									   		can = can - 10;
									   		altin = altin - 20;
									   		printf("Canýnýz: %d\n",can);
									   		printf("Altýnýnýz: %d\n",altin);
										}
									}
							   }
					}
								else
								{
								printf("Yabancý kadýnýn dediðini yapmadýn ve uzaklaþtýn.");
								}
					} 	
						   
						   if(secim == 3)
						   {
						   		printf("Yolda giderken bir yandan da ticareti nasýl yapabilirsin diye düþünürken çarþýdaki bir tüccara:Merhabalar kolay gelsin.Ticaret yapmak istiyorum da öneribileceðiniz bir ticari iþ var mý?\n");
						   		printf("Tüccar:Sizlere de merhabalar.Ýþler þuan pek iyi deðil fakat karþýda gördüðün tüccara danýþabilirsin.\n\n\nKarþýdaki tüccarýn yanýna gittin.\n");
						   		printf("Bizim Karakter:Merhabalar.Karþýdaki Tüccar beni size yönlendirdi.Adým(karakterin adý)ticaret yapmak istiyorum.Elinizde yapabileceðimiz tiari bir iþ var mý?");
						   		printf("Tüccar:Sizlere de merhabalar.Çok iyi bir zamanda geldiniz.Evet elimde yapabileceðimiz ticari bir iþ var?Size anlatmamý ister misiniz:1-Kabul et.\n2-Etme.\n");
						   		scanf("%d",&secim11);
						   	
						   	if(secim11 == 1)
							{
						   		printf("Bizim Karakter: Buyrun sizi dinliyorum.\n");
						   		printf("Tüccar:Efendim öncelikle adým Philip.Burada Tüccar Philip diye bilinirim.Eðer kabul ederseniz yapacaðýmýz iþ ipek üzerine.Ýpek ile ilgileniyorsanýz açýklayacaðým.Yoksa vaktimi çalmayýn.1-Kabul et.\n2-Kabul etme.\n\n\n");
						   		scanf("%d",&secim12);
								   
								   if(secim12 == 1)
								   {
						   			printf("Bizim Karakter: Evet sizi dinliyorum.\n Tüccar:Elimde satýlacak güzel ipekler var.Bunlarý satabilemk için bir yatýrýmcýya ihtiyacm var eðer kabul ederseniz sizdrn 100 altýn istiyorum eðer iþ tutarsa verdiðiniz paranýn en az 3 katýný alacaksýnýz.");
						   			printf("Paranýz: %d\n",altin);
						   			printf("1-Kabul et.\n2-Kabul etme.\n");
						   			scanf("%d",&secim13);
									   
									   if(secim13 == 1)
									   {
						   				printf("Bizim karakter:Tamamdýr kabul ediyorum.Ama size güvenebilir miyim bilmiyorum?\n Tücaar:Çok haklsýnýz efendim. Bu zamanda güvenilir insan bulmak zor.Bana olan güvenceniz için size bu iþaretli demiri alýn.Bunu kime gösterirseniz beni gösterir.");
						   				printf("Bizim karakter:Pekala tüccar Philip.Peki bu iþ ne zaman içerisinde biter?\n Tüccar:Efendim bu iþ en az 7 en çok 10 gün içerisinde bitecektir diye umuyorum.Bu 3 gün içerisinde size verdiðim bu iþareti karþýda gördüðünüz adama gösterin o sizi yönlendirecektir.");
						   				printf("Bizim karakter:Pekala Philip.Þimdiden güzel haberlerini bekliyorum görüþmek üzere.\n");
						   				
											if(Ggun = 7 + Agun)
											{	   
						   						printf("Yeni gün: %d\n",Ggun);
						   						printf("Bizim Karakter:Merhabalar ben bu iþaretin sahibini arýyorum kendisinden bir haber var mý?\n Adam: Hayýr.Sonra yeniden gelin.\n");
						   					}
						   					
											if(Ggun = 8 + Agun)
											{
						   						printf("Yeni gün: %d\n",Ggun);
						   						printf("Bizim Karakter:Tekrardan merhaba.Herhangi bir haber var mý?\n Adam:Henüz bir haber yok.Sonra yeniden gelin.\n");
									   		}
											
											if(Ggun = 9 + Agun)
											{
												printf("Bizim Karakter:Kolay gelsin.Var mý bir haber?\n Adam:Beni takip edin efendim.\n");
												printf("Tüccar ile beraber gittin ve gittiðiniz yerde Tüccar Philip ile karþýlaitýn.\n");
												printf("Bizim karakter: Merhaba Tüccar Philip umarým güzel haberler almak için geldim(hafif gülümsemeler).\n Tüccar Philip:HEHEHEHE tabi ki efendim tam istediðimi gibi oldu.Bu iþten tam 10.000 altýn kazandýk.\n\n\n");
												printf("Tüccar Philip:Size bu ticaretten verdiðiniz deðerin 3 katýný vermeyi teklif ediyorum.Cevabýnýz nedir?\n 1-Kabul et.\n 2-Kabul etme.\n");
												scanf("%d",&secim14);
												
												sayi = rand() % 3;
												sayi = sayi + 3;
												
												if(secim14 == 1)
												{
													printf("Bizim karakter:Peki.Kabul ediyorum.Bu güzel ticaret için teþekkür ediyorum Philip.\n Tüccar Philip:Bende sizlere teþekkür ederim efendim tam zamanýnda sizin gibi birini buldum.Ayný zamanda bu iþaret ile istediðiniz zaman buraya gelebilirsiniz.\n");
													altin = 100 * 3;
													onur = onur + 10;
													printf("Altýnýnýz: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else
												{
													printf("Bizim Karakter:Bu güzel ticaret içiin öncelikle teþekkür ederim Tüccar Philip.Lakin bu teklif bana uymuyor.\n");
													printf("Teklif ver.");
													scanf("%d",&teklif);
													
													if(teklif <= sayi){
													printf("Tüccar Philip:Hehehe bu teklif biraz fazla oldu ama kabul ediyorum.\n");
													altin = 100 * teklif;
													onur = onur + 10;
													printf("Altýnýnýz: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else{
													printf("Tüccar Philip:fendim bu teklif benim için çok fazla.3 katý hepimiz için en iyisi.\n");
								    				altin = altin * 3;
								    				printf("Altýnýnýz: %d\n",altin);
												}
												}
											}
									
										if(secim13 == 2)
										{
											printf("Bizim karakter: Hayýr ilgilenmiorum teþekkürler.");
										}
									}
								}
								
								if(secim11 == 2)
								{
								   	printf("Ýlgilenmiyorum!!");
								}
							}
						}
				
				break;
				
				case 3:
					
					int bar,bar1;
					printf("Bara girdin konuþacak birkaç kiþi var.\nHangisiyle konuþmak istersin?\n[1]\n[2]\n[3]\n");
					scanf("%d",&bar);
					if(bar==1)
					{
						printf("\n[1]Kaç [2]Odaya git");
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
					
					printf("Ormana girdiniz.\n[1]Ok toplamak\n[2]Ormaný keþfetmek\n[3]Meyve toplamak\n[4]Ormanýn derinliklerine gir\nNe yapmak istersiniz:");
					scanf("%d",&orman1);
					
					if(orman1==1)
					{
						Oorman=(rand()%15);
						printf("%d tane çubuk buldun ve güzel oklar yaptýn.\n",Oorman);
					}
					
					else if(orman1==2)
					{
						Korman=(rand()%25);
						
						if(Korman>20)
						{
							printf("Orman kýyýlarýnda gezerken bir meyve sepeti buldun.\n");
							printf("Ýtem eklenince meyve sepeti eklensin\n");
						}
						
						else if(Korman>15)
						{
							printf("Ormanýn kýyýlarýnda gezerken bir kese altýn buldun. Kýsa günün karý.\n");
							altin=altin + 100;
							printf("Toplam altýnýnýz: %d\n",altin);
						}
						
						else if(Korman>10)
						{
							printf("Ormanýn kýyýsýnda gezerken yaþlý bir dedeye ras geldin. Yardým istiyor yardým eder misin?\n");
							printf("Yardým ederse þans göre iyi veya kötü bir þey olsun\n");
						}
						
						else
						{
							printf("Ne bir þey gördün ne bir þeye rastladýn bomboþ bir gün geçirdin\n");
						}
					}
					
					else if(orman1==3)
					{
						printf("Güzel ve tatlý meyveler topladýn\n");
						printf("Ýtemler geldiðinde meyveler eklenmeli rastgelelikle meyveler bulsun\n");
					}
					
					else if(orman1==4)
					{
						//[21][11]

						printf("ormanýn derinliklerine dalýyorsun burada bir sürü pisliðin döndüðüne dair dedikodular zihnini kurcalýyor.\n");
						printf("içeri giriyorsun þimdi vereceðin kararlar çok önemli çünkügirdiðin her alanda ya seni öldürecek risklere sahip bir yere girmiþ olacaksýn ya da büyük ödüllere kavuþacaksýn\n");
						printf("ilk olarak derinlere fazla gidersen bazý canavarlarla karþýlaþabilirsin o yüzden fazla uzaklaþmadýðýndan ve dönüþ yolunu bildiðinden emin ol\n");
						printf("gittiðin yolun tam tersine giderek ormandan çýkacaksýn dikkat et dönüþ yolunu unutursan ormanda ölümle burun burunasýn\n");
						
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
						
						printf("ileri girmek için w\'ye bas\nsaða gitmek içind\'ye bas\nsola gitmek için a\'ya bas\ngeri gitmek içins\'ye bas\ngeri dönmek için g\'ye bas\nne yapmak istersin: ");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("Çýkmak istiyorsun demek o zaman geldiðin yolu hatýrlayýp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("Çýkmak istiyorsun demek o zaman geldiðin yolu hatýrlayýp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("Çýkmak istiyorsun demek o zaman geldiðin yolu hatýrlayýp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
										printf("buraya önceden gelmiþsin ya da baþkasý talan etmiþ\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("Çýkmak istiyorsun demek o zaman geldiðin yolu hatýrlayýp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
							printf("ileri girmek için w\'ye bas\nsaða gitmek içind\'ye bas\nsola gitmek için a\'ya bas\ngeri dönmek için s\'ye bas\nne yapmak isteresin: ");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
									printf("ormanýn o kadar derinlerine daldýn ki kendini bir canavarýn ininin öünde buldun ve canavar seni çoktan görmüþtü. savaþmaktan baþka çaren yok\n");
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
								printf("galiba yanlýþ bir tuþa bastýn\n");
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
							printf("baþarýyla ormandan çýktýn. tebrik ederim\n");	
						}
						else
						{
							printf("bir bekçi seni kurtardý ama o geceyi tek baþýna geçirmenin acýsýný unutamayacaksýn ya seni bulmasaydý(baþka ihtimaller getir)\n");
						}
					}
					
				break;
				
				case 5:
					
					printf("Büyücü Ýnine Girdiniz. Ne Yapmak Ýstersiniz?\n[1]Büyücüden Tavsiye Al\n[2]Büyücüye Meydan Oku (YÜKSEK TEHLÝKE)\n[3]Büyücüden Maðaranýn Anahtarýný Ýste\n");
					scanf("%d",&buyucusecimi);
					
					if(buyucusecimi==1)
					{
						altin=altin-10;
						printf("kalan altýnýnýzz: %d",altin);
						printf("Büyücü: Ne hakkýnda tavsiye almak istersin genç adam?\n");
						printf("[1]Ýksir Tarifi");
						printf("[2]Büyü Öðrenme");
						printf("[3]Silah Efsunlama");

						scanf("%d",&buyucutavsiyesecimi);
						
						if(buyucutavsiyesecimi==1)
						{
							printf("Ne Ýksirinin Tarifini istiyorsun?\n");
							printf("[1]Görünmezlik(500G)\n[2]Güç(250g)\n[3]Saðlýk\n(100G)");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								//altin=altin-500;
								//printf("kalan altýnýnýzz: %d",altin);
								printf("Tarifi Þu:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi Þu:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi Þu:");
							}
						}
						
						else if(buyucutavsiyesecimi==2)
						{
							printf("Ne Büyüsü Öðrenmek istiyorsun?\n");
							printf("[1]Alevtopu(1000G)\n[2]Ýyileþtirme(700G)\n[3]Stamina Yenileme(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Alevtopu Büyüsünü Öðrendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Ýyileþtirme Büyüsünü Öðrendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Stamina Yenileme Büyüsünü Öðrendiniz.\n");
							}
						}
						
						else if(buyucutavsiyesecimi==3)
						{
							printf("Kýlýcýna Ne Efsunu Yaptýrmak istiyorsun?\n");
							printf("[1]Alevleme(2000G)\n[2]Zehir(1200g)\n[3]Dayanýklýlýk(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Silahýnýza Alevleme Efsununu Yaptýrdýnýz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silahýnýza Zehir Efsununu Yaptýrdýnýz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silahýnýza Dayanýklýlýk Efsununu Yaptýrdýnýz.\n");
							}
						}
					}
					
					
					else if(buyucusecimi==2)
					{
						int buyucusavassecimi;
						buyucuhasar=hasar*2;
						buyucucan=can*5;
						int magarayaatilma=0;
						
						printf("Yerinden Kalkan Büyücünün Gözlerindeki Parýltýyý Görünce Ýçin Ürperdi.\n");
						printf("Çok Belalý Bir Ýþe Giriþtin... \n Büyücüye Meydan Okumadan Önce Ýki Kere Düþünmen Gerekirdi\n Ne Yapmak Ýstiyorsun?\n [1]Saldýr\n [2]Kaç\n [3]Baðýþlanma Dile\n");
						scanf("%d",&buyucusavassecimi);
						
						if(buyucusavassecimi==1)
						{
						
							can=can-buyucuhasar;
							printf("Kalan Canýn:%d\n",can);
							
							buyucucan=buyucucan-hasar;
							printf("Büyücünün Kalan Caný:%d\n",buyucucan);
						}
						
						else if(buyucusavassecimi==2)
						{
							buyucumanahtar=2;
							printf("Kimse Bu Kadim Büyücüye Meydan Okuyup da Ondan Kaçabilmiþ Deðildir.\n Büyücü Senin Çaresiz Kaçýþýna Biraz Acýmýþ Olacak ki Seni Öldürmek Yerine Maðaranýn Ýçine Fýrlatýp Kapýyý Kitledi.\n Artýk Bu Maðaradan Kaçýþýn Senin Elinde.\n");
						}
						
						else if(buyucusavassecimi==3)
						{
							printf("Onurunu Bir Kenara Býraktýn Ve Büyücüden Baðýþlanma Diledin...\n Büyücü Seni Bu Seferlik Affetmeye Karar Verdi.\n Birdaha Bulaþmaman Kaydýyla Tabii.\n");
						}
					}
					
					else if(buyucusecimi==3)
					{
						buyucurng=(rand()%101);
						
						if(buyucurng>=50)
						{
							printf("Büyücüyle Biraz Tartýþtýnýz Ve Sonunda Sana Maðaranýn Anahtarýný Ödünç Vermeye Razý Oldu.\n");
							buyucumanahtar=1;
						}
						
						else
						{
							printf("Büyücü Kesinlikle Maðaraya Girmene Karþý Çýktý Ve Seni Maðaradan Kovdu.\n");
							break;
						}
					}
					
					if(buyucumanahtar==1)
					{
						printf("Sonunda Þu Halk Arasýndaki Meþhur Maðaraya Girebildin.\nMaðaranýn Ýçinde Biraz Ýlerledin Ve Karþýna Ýki Yol Ayrýmý Çýktý.\nSað a Mý Gideceksin Sol a Mý?\n[1]Sað\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sað'a Gittin...\nBiraz Ýlerledin ve Karþýna Efsunlu Bir Köpek Çýktý.\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							can=can-25;
							printf("Biraz Daha Ýlerledin Ve Karþýna Efsunlu Bir Goblin Çýktý...\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							printf("Yürümeye Devam Ettin Ve Maðaranýn Çýkýþýný Buldun Doðru Yönde Ýlerlediðin Ýçin Þanslýsýn.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz Ýlerledin ve Karþýna Efsunlu Bir Ayý Çýktý.\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							can=can-15;
							printf("Biraz Daha Ýlerledin Ve Karþýna Efsunlu Bir Yýlan Çýktý...\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							printf("Yürümeye Devam Ettin Ve Yolun Çýkmaza Girdi...\nGeri Döndün Ve Saða Ýlerledin.\nYaralý Olduðun Ýçin Karþýna Çýkan Yaratýklarýn Yanýndan Koþarak Geçip Onlarý Atlattýn ve Sonunda Çýkýþa Varabildin.\n");
							//burada kazandýðý eþyalar ve altýn yazýlýp eklenecek þuan bu sürümde altýn olmadýðý için ekleyemedim.
						}
					}
					
					else if(buyucumanahtar==2)
					{
						can=can/2;
						printf("Büyücü Seni Maðaranýn Ýçine Baya Bir Sert Fýrlatmýþ Olacak ki, Bilincini Kaybetmiþsin Ve Yaralanmýþsýn.\n Kalan Canýn:%d\n",can);
						printf("Maðaranýn Ýçinde Biraz Ýlerledin Ve Karþýna Ýki Yol Ayrýmý Çýktý.\nSað a Mý Gideceksin Sol a Mý?\n[1]Sað\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sað'a Gittin...\nBiraz Ýlerledin ve Karþýna Efsunlu Bir Köpek Çýktý.\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							can=can-25;
							printf("Biraz Daha Ýlerledin Ve Karþýna Efsunlu Bir Zombi Çýktý...\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							printf("Yürümeye Devam Ettin Ve Maðaranýn Çýkýþýný Buldun Doðru Yönde Ýlerlediðin Ýçin Þanslýsýn.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz Ýlerledin ve Karþýna Efsunlu Bir Ayý Çýktý.\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							can=can-15;
							printf("Biraz Daha Ýlerledin Ve Karþýna Efsunlu Bir Yýlan Çýktý...\nOnla Savaþtýn...\nKalan Canýn:%d",can);
							printf("Yürümeye Devam Ettin Ve Yolun Çýkmaza Girdi...\nGeri Döndün Ve Saða Ýlerledin.\nAðýr Yaralý Olduðun Ýçin Karþýna Çýkan Yaratýklarýn Yanýndan Koþarak Geçip Onlarý Atlattýn ve Sonunda Çýkýþa Varabildin.\n");
							//üstteki ayný þekilde
						}
					}
					
				break;
				
				case 6:
					
					printf("Ýntihar Maðarasýna girdin\n");
					printf("Maðara çok soðuk\nNe yapacaksan yap çabuk yap!!\n");
					while(intmagara!=0){
						
						if(intmagaradancikis==1){
							break;
						}
						
						printf("[1]Maðaranýn derinliklerine gir\n");
						printf("[2]Geri dön\n");
						scanf("%d",&intmagarayolsecim1);
						system("CLS");
						if(intmagarayolsecim1==1){
							printf("Verdiðin nefesin buhar olarak havada yayýldýðýný görüyorsun. Yol 3'e ayrýlýyor.\n");
							printf("Sol taraftan gelen bir ýþýðýn olduðunu farkediyor\nSað tarafta ise hiçbir ýþýðýn olmadýðýný, sadece birkaç ipin olduðunu görüyorsun\n");
							while(intmagara!=0){
								
								if(intmagaradancikis==1){
									break;
								}
								
								printf("Ne yapacaksýn?\n");
								printf("[1]Düz git\n"); //Ýkiye ayrýlýyor
								printf("[2]Sola git\n"); //Ateþ
								printf("[3]Saða git\n"); //Ýp
								printf("[4]Geri dön\n");
								scanf("%d",&intmagarayolsecim2);
								system("CLS");
								if(intmagarayolsecim2==1){ //Düz
									while(intmagara!=0){
										
										if(intmagaradancikis==1){
											break;
										}
										
										printf("Yol ikiye ayrýlýyor\n[1]Sola git\n[2]Saða git\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim2);
										system("CLS");
										
										if(intmagarasecim2==1){ //Yýlanlara gider
										
											if(intmagaragorevi1==1 || intmagaragorevi1==2){
												printf("Bu yol ihtiyarýn söylediðine göre yýlanlarýn olduðu yere açýlýyor\n");
												system("PAUSE");
												system("CLS");
											}
											
											else if(intmagaragorevi1==0){
												printf("tssssssssssssss...\n");
												system("PAUSE");
												system("CLS");
												printf("-Lanet olsun. Bu sesler hiç hoþ deðil\n");
												system("PAUSE");
												system("CLS");
												printf("Bu seslerin yýlan sesi olduðunu farkediyorsun\nBuraya girmek oldukça tehlikeli olmalý...\n");
												system("PAUSE");
												system("CLS");
											}
											
											while(intmagara!=0){
												printf("Ne yapacaksýn?\n[1]Yýlan yumurtasý çal\n[2]Yýlan kes\n[3]Yýlanlarla Konuþ\n[4]Kendini yýlanlarýn arasýna at\n[5]Geri dön\n");
												scanf("%d",&intmagarayilan);
												system("CLS");
												
												if(intmagarayilan==1){ //Yýlan yumurtasýný çal
													
													if(intyilanyumurtasialmahakki==1){
														printf("Bugünkü hakkýný kullandýn!\n");
														continue;
													}
													
													intyilanyumurtasialmahakki=1;
													
													if(kediotu==0){
														printf("Yanýnda kediotu olmadan yýlanlara yaklaþýyorsun\nOnlar ortama göre renk deðiþtirirler\nBu yüzden adýmlarýný dikkatli atmalýsýn\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtalarý gördün!\nYaklaþýyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtalara ulaþman 3 adýmýný alacak\n");
														system("PAUSE");
														system("CLS");
														srand(time(NULL));
														intmagarayilansans1=rand()%10;
														
														printf("1.ADIM\n\n");
														
														if(intmagarayilansans1>=0 && intmagarayilansans1<5){
															printf("Güzel, hiçbiri seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana saldýrýyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜÞ EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilansans2=rand()%10;
														
														printf("2.ADIM\n\n");
														
														if(intmagarayilansans2>=0 && intmagarayilansans2<5){
															printf("Güzel, hiçbirisi seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana saldýrýyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜÞ EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilansans3=rand()%10;
														
														printf("3.ADIM\n\n");
														
														if(intmagarayilansans3>=0 && intmagarayilansans3<5){
															printf("Güzel, hiçbirisi seni farketmedi\n");
															system("PAUSE");
															system("CLS");
														}
														
														else{
															printf("Olamaz!\nBiri seni farketti ve sana saldýrýyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜÞ EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilanyumurtasayisi=rand()%10;
														intmagarayilanyumurtasayisi+=2;
														printf("Sonunda yumurtalarýn yanýna vardýn\n");
														
														while(intmagara!=0){
															printf("%d tane yýlan yumurtasý görüyorsun\nKaç tane alacaksýn?\n",intmagarayilanyumurtasayisi); //ÝLERÝDE HEPSÝNÝ ALAMAMASI ÝÇÝN ÇANTA AÐIRLIÐI OLACAK
															scanf("%d",&intalinanyumurtasayisi);
															system("CLS");
															
															if(intalinanyumurtasayisi>intmagarayilanyumurtasayisi || intalinanyumurtasayisi<=0){
																printf("Bu mümkün deðil!!\n");
															}
															
															else{
																
																intmagarayilanyumurtasayisi-=intalinanyumurtasayisi;
																yilanyumurtasi+=intalinanyumurtasayisi;
																printf("%d tane yumurta aldýn\nKalan yumurta sayýsý: %d\n",intalinanyumurtasayisi,intmagarayilanyumurtasayisi);
																system("PAUSE");
																system("CLS");
																
																if(intalinanyumurtasayisi>=2 && intmagaragorevi1==2){
																	printf("Güzel!\nÞimdi ihtiyara gidip 2 yýlan yumurtasýný verebilirsin\n");
																	intmagaragorevi1=3;
																}
																
																break;
															}
														
														}
														
														printf("Burada iþin bittiðine göre hýzla dýþarý çýkýyorsun\n");
														system("PAUSE");
														system("CLS");
														
													}
													
													else if(kediotu==1){
														printf("");
													}
													
												}
												
												else if(intmagarayilan==2){ //Yýlan kes
													printf("Hadi Baþlayalým!\n"); //DÖVÜÞ EKLENECEK *****************************************
													break;
												}
												
												else if(intmagarayilan==3){ //Yýlanlarla konuþ
													
													if(intsurungenlekonusmayetenegi==1){ //Yýlanla konuþ
														printf("EKLENECEK\n"); //YILANLA KONUÞMA EKLENECEK **************************************
													}
													
													else{ //Yýlanla konuþamama
														printf("Yýlanlarla konuþmak için sürüngen dilini öðrenmelisin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
												}
												
												else if(intmagarayilan==4){ //YILANLARA ÖL
													printf("Yolun sonuna geldik %s...\n",isim);
													system("PAUSE");
													system("CLS");
													printf("Kararýný verdin.\nBirden fazla Ölüm Yýlanýnýn zehrini damarlarýnda hissetmen sadece birkaç saniye aldý\n");
													printf("Canýn çok yandý. Ama sonunda...\n");
													system("PAUSE");
													system("CLS");
													printf("--------------------------------------\nBu acýmasýz hayata gözlerini yumdun...\n--------------------------------------\n");
													printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
													printf("Tamamlanan Görevler: %d/%d\n");
													printf("Kazandýðýn Para: %d\n");
													printf("Harcadýðýn Para: %d\n");
													printf("--------------------------------------\n");
													printf("Yolun sonuna geldik %s...\n",isim);
													return 0;
												}
												
												else if(intmagarayilan==5){ //Geri dön
													printf("Mantýklý bir seçim...\n");
													system("PAUSE");
													system("CLS");
													break;
												}
												
											}
				
										}
										
										else if(intmagarasecim2==2){ //Maðaradan çýkýþ
											printf("Saðdan ilerledikçe bir gözüne yoðun bir ýþýk geliyor\nBurasý maðaranýn çýkýþý olmalý\n");
											while(intmagara!=0){
												printf("Ne Yapacaksýn?\n[1]Maðaradan çýk\n[2]Geri dön\n");
												scanf("%d",&intmagarasecim6);
												system("CLS");
												
												if(intmagarasecim6==1){
													printf("Maðaradan çýktýn.\n");
													intmagaradancikis=1;
													break;
												}
												
												else if(intmagarasecim6==2){
													break;	
												}
												
											}
										
										}
										
										else if(intmagarasecim2==3){ //Geri dön
											break;
										}
										
									}
									
								}
								
								else if(intmagarayolsecim2==2){ //Sol
									
									if(intmagarasolsecimi==0){
										printf("Sol taraftan ilerledikçe bir sýcaklýk geldiðini hissediyorsun\n");
										printf("Artýk daha aydýnlýk\nBir dakika\nNeden çýðlýk sesleri geliyor?\n");
										system("PAUSE");
										system("CLS");
										printf("Biraz daha ilerledikçe sýcaklýk, aydýnlýk ve anlam veremediðin þekilde çýðlýk sesleri artýyor\n");
										system("PAUSE");
										system("CLS");
									}
									
									intmagarasolsecimi=1;
									
									while(intmagara!=0){
										printf("Bir kapý gördün\n[1]Kapýya doðru git\n[2]Düz git(Ýntihar et)\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim3);
										system("CLS");
										
										if(intmagarasecim3==1){ //Kapýya gitmek
											srand(time(NULL));
											intmagaraalevsans1=rand()%10;
											
											if(intmagaraalevsans1>=0 && intmagaraalevsans1<5){ //Þansa yakalanmadý
												srand(time(NULL));
												intmagaraalevsans2=rand()%10;
												
												if(intmagaraalevsans2>=0 && intmagaraalevsans2<5){
													printf("Olamaz! Kapý açýlýyor...\n");
													system("PAUSE");
													system("CLS");
													printf("Kapý açýlýrken aniden kapýnýn arkasýna saklandýn\nDýþarýya koyu tonlarda kýyafet giymiþ, uzun boylu biri çýktý ve koþarak gözden kayboldu\n");
													printf("Tam olarak ne olduðunu tanýmlayamasan da insana benzediði aþikar\n");
													system("PAUSE");
													system("CLS");
													printf("Aceleyle çýktýðý için kapýyý açýk býraktý\n");
												}
												
												else{
													printf("Kapýnýn açýk olduðunu gördün\n");
													system("PAUSE");
													system("CLS");
												}
												
												printf("Hemen kapýdan içeri girdin ve maðaranýn devam ettiðini gördün\n");
												printf("Yerde bir merdiven var. Burasý aþaðý iniyor\n");
												system("PAUSE");
												system("CLS");
												while(intmagara!=0){
													printf("Seçimini Yap\n");
													printf("[1]Merdivenden aþaðý in\n[2]Düz git\n[3]Geri dön\n");
													scanf("%d",&intmagaraalevsecim1);
													system("CLS");
													
													if(intmagaraalevsecim1==1){ //Merdivenden in
														printf("Merdivenden aþaðý iniyorsun\n");
														printf("Ortalýkta hiçkimse yok\nSadece 1 adet sandýk ve bir masa üzerinde yarým þarap þiþesi...\n");
														system("PAUSE");
														system("CLS");
														printf("Sandýðýn kilitli olduðunu görüyorsun\n");
														
														if(intmagaragorevi1==4 && intmagararuyaittirme==0){
															
															while(intmagara!=0){
																printf("[1]Sandýðý ittir\n[2]Vazgeç\n");
																scanf("%d",&intmagarasecim9);
																system("CLS");
																
																if(intmagarasecim9==1){
																	printf("Sandýðý boþ bir yere doðru ittiriyorsun ve aþaðý açýlan bir yolun olduðunu görüyorsun\n");
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
																printf("[1]Açýlan yoldan git\n[2]Vazgeç\n");
																scanf("%d",&intmagarasecim10);
																system("CLS");
																
																if(intmagarasecim10==1){
																	printf("Ýlerledikçe etrafa mavi yeþil ve sarý ýþýk veren birçok çiçek türü görüyorsun\n");
																	printf("Bir maðarada bunlarýn olmasý garip...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Ýleride bir adam var ve boþ boþ duvara bakýyor\n");
																	printf("Onunla iletiþime geçemiyorsun\n(ÝLERÝDE GÖREV OLARAK EKLENECEK)\n"); //YENÝ BÝR GÖREV
																}
																
																else if(intmagarasecim10==2){
																	break;
																}
				
															}
															
														}
														
														while(intmagara!=0){
															printf("[1]Sandýðý aç\n[2]Sandýðý zorla\n[3]Masayý incele\n[4]Yukarý çýk\n");
															scanf("%d",&intmagaraalevsecim2);
															system("CLS");
														
															if(intmagaraalevsecim2==1){ //Sandýðýn kilidini aç
																
																if(intmagarasandiksayaci==0){
																	
																	if(intalevanahtar==1){ //Sandýklarýn kilidini aç
																		printf("Sandýðý açtýn!!\n");
																		printf("Sandýktan 50 adet Tahta Ok ve 1 adet Uzun Kýlýç aldýn\n");
																		ok[0]+=50;
																		kil[1]=1;
																		intmagarasandiksayaci=1;
																	}
																	
																	else{ //Anahtarsýz açmaya çalýþmak
																		printf("Anahtar olmadan kilidi açamazsýn\n");
																	}
																	
																}
																
																else{ //Sandýk zaten açýlmýþ
																	printf("Sandýktaki her þeyi topladýn!\n");
																}
															
															}
															
															else if(intmagaraalevsecim2==2){ //Sandýklarý zorla
																printf("Sandýðý tüm gücünle zorladýn ama baþaramadýn\nHatta biraz ses yaptýn\n");
																srand(time(NULL));
																intmagarasandiksans=rand()%10;
																
																if(intmagarasandiksans==0){
																	printf("Sandýðý açamaman yetmezmiþ gibi bir de bileðine zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldý!!\n");	
																}
																
																else if(intmagarasandiksans==1){
																	printf("Sandýðý açamaman yetmezmiþ gibi bir de parmaðýna zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldý!!\n");	
																}
																
																else if(intmagarasandiksans==2){
																	printf("Sandýðý açamaman yetmezmiþ gibi bir de beline zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldý!!\n");	
																}
																
															}
															
															else if(intmagaraalevsecim2==3){ //Masayý incele
																printf("Masaya þöyle iyice bir bakýnca þiþelerin altýnda sýkýþtýrýlmýþ bir kaðýt parçasý buldun\n");
																printf("Kaðýdý okumaya baþladýn...\n");
																system("PAUSE");
																system("CLS");
																printf("------------------------------------HAFTALIK RAPOR------------------------------------\n");
																printf("Ýþ: Suçlularýn Cezalandýrýlmasý\n");
																printf("Konum: Ýntihar Maðarasý 1.Kat / 1.Oda\n");
																printf("1.Kiþi'nin Ýþlediði Suç: Hýrsýzlýk (12800 Altýn)\n");
																printf("2.Kiþi'nin Ýþlediði Suç: Çarþýda kavga çýkarma ve iki kiþinin ölümüne sebep olma\n");
																printf("3.Kiþi'nin Ýþlediði Suç: Arena'da hile yapma\n");
																printf("Cezalandýrma iþlemi: Canlý canlý yakma\n");
																printf("Rapor No: 10041\n");
																printf("--------------------------------------Q9822VMR5---------------------------------------\n");
																system("PAUSE");
																system("CLS");
																
																printf("Kaðýdý okuyunca ürperdin\nBurada daha fazla kalmanýn mantýðýný bulmaya çalýþýyorsun\nMerak hayatýndan önemli mi?\n");
																system("PAUSE");
																system("CLS");
																printf("Bir söylentiye göre bu raporda yazýlan kiþiler sadece suçlularýn yuzde 1'i\n");
																system("PAUSE");
																system("CLS");
																
																if(intalevanahtar==0){
																	printf("Kaðýdý yerine býraktýn ve þarap þiþesini incelemeye baþladýn\nÞiþeyi biraz sallayýnca içinde bir þey olduðunu anladýn\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Tabi ya, anahtar!\n");
																	printf("Anahtarý buldun!\n");
																	intalevanahtar=1;
																	system("PAUSE");
																	system("CLS");
																}
															}
															
															else if(intmagaraalevsecim2==4){ //Yukarý Çýk
																break;
															}
															
														}
														
													}
													
													else if(intmagaraalevsecim1==2){ //Düz git
														
														intmagarahizlakac=0;
														
														printf("Ýlerledikçe çýðlýklar artýyor\n");
														
														if(intalevanahtar==1){
															printf("O kaðýt parçasýný okuduktan sonra bu çýðlýklarýn nereden ve kimden geldiðini daha iyi anlýyorsun\n");
														}
														
														system("PAUSE");
														system("CLS");
														printf("Ýlerlerken büyükçe bir çiyan yolunu kesti\n");
														
														if(intboceklekonusmayetenegi==1){
															printf("Böcekle konuþ\n");
														}
														
														else{
															printf("Böcekçe bilmediðin için onunla iletiþime geçemiyorsun\nÇiyan yolundan çekiliyor\n");
															system("PAUSE");
															system("CLS");
														}
														
														printf("4 tane koyu renk kýyafetli insansý yaratýklar görüyorsun\nAma burada durdukça baþýn aðrýyor\n");
														printf("Çünkü bu çýðlýk sesleri dayanýlacak gibi deðil\nYoksa...\n");
														system("PAUSE");
														system("CLS");
														printf("Evet. Bu yaratýklar ya insan deðil ya da saðýr\nHenüz çözemedin\n");
														system("PAUSE");
														system("CLS");
														printf("Suçlularýn cezasýný vermekle yükümlüler görüldüðü üzere...\nManzara korkunç\n");
														printf("Ýnsanlarý canlý canlý ateþe atmaktan baþka bir þey yapmýyorlar þu anda\n");
														system("PAUSE");
														system("CLS");
														printf("O da ne!!\nAralarýndan biri seni gördü!!\n");
														printf("[1]Kaç\n[2]Kendini savun\n");
														
														scanf("%d",&intmagaraalevsecim3);
														system("CLS");
														
														if(intmagaraalevsecim3==1){
															printf("Hýzla uzaklaþýyorsun\nKapýnýn olduðu yere geri geldin\n");
															
															while(intmagara!=0){
																
																if(intmagarahizlakac==1){
																	break;
																}
																
																printf("[1]Merdivenden in\n[2]Biraz soluklan\n");
																scanf("%d",&intmagaraalevsecim4);
																system("CLS");
																
																if(intmagaraalevsecim4==1){
																	printf("Hýzla merdivenden aþaðý indin\n");
																	system("PAUSE");
																	system("CLS");
																	printf("[1]Sandýða saklan\n[2]Þarap þiþesini insansýnýn kafasýnda patlat\n");
																	scanf("%d",&intmagaraalevsecim5);
																	system("CLS");
																	
																	while(intmagara!=0){
																		
																		if(intmagaraalevsecim5==1){
																		
																			if(intmagarasandiksayaci==1){
																				printf("Sandýða saklandýn ve bir süre bekledin\nO aptal insansý seni bulamadý\n");
																				printf("Hýzla yukarý çýkýyorsun...\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{
																				printf("Sandýk kilitli!!\nÝnsansý hýzla merdivenden indi\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				printf("Bir pençe darbesi aldýn\n");
																				can-=20;
																				
																				if(can>=50){ //Yara sýyýrdý kalkýp devam etti
																					printf("Yara sýyýrdýðý için fazla zarar görmeyip insansýyý ittin ve yere düþtü\nHemen oradan uzaklaþtýn\n");	
																					system("PAUSE");
																					system("CLS");
																					break;
																				}
																				
																				else{ //Yere düþtü bayýldý
																					printf("Yere düþtün, dayanamayýp bayýldýn\n"); //DÜZENLENECEK REHÝN ALINACAK ********************
																					return 0;
																				}
																				
																			}
				
																		}
																		
																		else if(intmagaraalevsecim5==2){
																			printf("Ýnsansý merdivenden indiði gibi kafasýnda þiþeyi patlattýn\nHýzla yukarý çýktýn...\nPeþinde kimse yok artýk...\n");
																			system("PAUSE");
																			system("CLS");
																			intmagarahizlakac=1;
																			break;
																		}
																		
																		else{
																			printf("Yanlýþ bir hareket yapmanýn sýrasý deðil!\n");
																			system("PAUSE");
																			system("CLS");
																			printf("Bir pençe darbesi aldýn\n");
																			can-=20;
																			system("PAUSE");
																			system("CLS");
																			printf("-20 Can\n");
																			system("PAUSE");
																			system("CLS");
																			
																			if(can>=20){ //Yara sýyýrdý kalkýp devam etti
																				printf("Yara sýyýrdýðý için fazla zarar görmeyip insansýyý ittin ve yere düþtü\nYukarý çýktýn\nGörünüþe göre peþini býraktýlar\n");	
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{ //Yere düþtü bayýldý
																				printf("Yere düþtün, dayanamayýp bayýldýn\n"); //DÜZENLENECEK REHÝN ALINACAK **************************
																				return 0;
																			}
																			
																		}
																		
																	}
																	
																}
																
																else if(intmagaraalevsecim4==2){ //Soluklan
																	printf("Biraz soluklandýktan sonra peþinden kimsenin gelmediðini farkettin\n");
																	break;
																}
																
																else{
																	printf("Yanlýþ bir hareket yapmanýn sýrasý deðil!\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Bir pençe darbesi aldýn\n");
																	can-=20;
																	system("PAUSE");
																	system("CLS");
																	printf("-20 Can\n");
																	system("PAUSE");
																	system("CLS");
																	
																	if(can>=20){ //Yara sýyýrdý kalkýp devam etti
																		printf("Yara sýyýrdýðý için fazla zarar görmeyip insansýyý ittin ve yere düþtü\nGörünüþe göre peþini býraktýlar\n");	
																		system("PAUSE");
																		system("CLS");
																		break;
																	}
																	
																	else{ //Yere düþtü bayýldý
																		printf("Yere düþtün, dayanamayýp bayýldýn\n"); //DÜZENLENECEK REHÝN ALINACAK **************************
																		return 0;
																	}
																	
																}
															
															}
															
														}
														
														else if(intmagaraalevsecim3==2){ //Kendini savun DÖVÜÞ EKLENECEK **************
															printf("KENDÝNÝ SAVUNMA EKLENECEK\n");
														}
														
														else{
															printf("Yanlýþ bir hareket yapmanýn sýrasý deðil!\n");
															system("PAUSE");
															system("CLS");
															printf("Bir pençe darbesi aldýn\n");
															can-=20;
															system("PAUSE");
															system("CLS");
															printf("-20 Can\n");
															system("PAUSE");
															system("CLS");
																	
															if(can>=20){ //Yara sýyýrdý kalkýp devam etti
																printf("Yara sýyýrdýðý için fazla zarar görmeyip insansýyý ittin ve yere düþtü\nHemen oradan uzaklaþtýn\n");	
																system("PAUSE");
																system("CLS");
																break;
															}
																
															else{ //Yere düþtü bayýldý
																printf("Yere düþtün, dayanamayýp bayýldýn\n"); //DÜZENLENECEK REHÝN ALINACAK **************************
																return 0;
															}
															
														}
															
													}
													
													else if(intmagaraalevsecim1==3){ //Geri dön
														break;
													}
													
												}
											}
											
											else{ //Þansa yakalandý
												
												if(intmagarateklif1sayac==0){
													printf("Olamaz! Kapý bir anda açýlýyor...\n");
													system("PAUSE");
													system("CLS");
													printf("Þanssýzsýn!\nO insansý yaratýk seni farketti\nAma saldýrmak yerine konuþmayý tercih etti\n");
													system("PAUSE");
													system("CLS");
													printf("-Hey! Sen kimsin?\n");
													system("PAUSE");
													system("CLS");
													printf("-Ben %s. Peki sen kimsin?\n",isim);
													system("PAUSE");
													system("CLS");
													printf("-Sen benimle dalga mý geçiyorsun? Buraya gelen bir yabancýnýn aptal olmasý gerekir.\nBuraya geldiysen bunun bir bedeli olacak.\n");
													system("PAUSE");
													system("CLS");
													printf("-Anlaþýldý, seninle fazla konuþulmuyor. Teklifin ne?\n");
													system("PAUSE");
													system("CLS");
													printf("-Bana 50 altýn ver, bu konuyu kapatalým. Ha, bu arada, o kapýdan içeri girmeye çalýþma sakýn.\nEðer bir daha seni buralarda görürsem teklif olmayacak!\n");
													system("PAUSE");
													system("CLS");
													printf("-Düþünmeme izin ver...\n");
													system("PAUSE");
													system("CLS");
													while(intmagara!=0){
														printf("[1]Teklifi kabul et(-50 Altýn)\n[2]Teklifi reddet(+40 Onur)\n");
														scanf("%d",&intmagarateklif1);
														system("CLS");
														
														if(intmagarateklif1==1){
															printf("-Tamam, teklifi kabul ediyorum.\n");
															altin-=50;
															system("PAUSE");
															system("CLS");
															printf("-50 Altýn\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-Güzel, akýllý insanlarý severim. Bir daha seni buralarda görmeyim.\n");
															system("PAUSE");
															system("CLS");
															break;
														}
														
														else if(intmagarateklif1==2){
															printf("-Ne olduðu belli olmayan biri için deðil 50 altýn, 1 altýn bile harcamam.\n");
															onur+=40;
															printf("+40 Onur\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-Peki yabancý. Fazlasýyla cesursun. Ancak cesaretle aptallýk arasýnda ince bir çizgi vardýr bilir misin?\nAptallar hakettiðini bulsun o zaman!\n");
															printf("(Kýlýcýný çýkarýr)\n");
															system("PAUSE");
															system("CLS");
															printf("DÖVÜÞ EKLENECEK\n"); //DÖVÜÞ EKLENECEK
															break;
														}
														
														else{
															printf("Ýnsansý sinirlenmeye baþlýyor\n");
															system("PAUSE");
															system("CLS");
														}
														
													}
													
													break;
													
												}
												
												else{
													printf("-Yine mi sen! Gel bakalým.\n");
													printf("(Kýlýcýný çýkarýr)\n");
													system("PAUSE");
													system("CLS");
													printf("DÖVÜÞ EKLENECEK\n"); //DÖVÜÞ EKLENECEK
													break;	
												}
												
											}
											
										}
										
										else if(intmagarasecim3==2){ //Alev ölüm
											printf("Yürüdükçe çýðlýk seslerinin azaldýðýný, ancak aydýnlýðýn arttýðýný farkediyorsun\n");
											system("PAUSE");
											system("CLS");
											printf("Ve iþte geldin. Kendini alevlerin ortasýna atacaksýn\n");
											printf("Hayatýn gözünün önünden geçiyor. Baþarýlarýn, baþarýsýzlýklarýn...\n");
											system("PAUSE");
											system("CLS");
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Kendini alevlerin ortasýna attýn. Belki de birileri duymuþtur son çýðlýklarýný...\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu acýmasýz hayata gözlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
											printf("Tamamlanan Görevler: %d/%d\n");
											printf("Kazandýðýn Para: %d\n");
											printf("Harcadýðýn Para: %d\n");
											printf("--------------------------------------\n");
											return 0;
											
										}
										
										else if(intmagarasecim3==3){ //Geri dön
											break;
										}
									
									}
									
								}
								
								else if(intmagarayolsecim2==3){ //Sað
									printf("Saða doðru hareket ettin\n");
									while(intmagara!=0){
										printf("[1]Hemen bir ip bul ve sonsuzluða kavuþ\n[2]Etrafta biraz gezin\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim4);
										system("CLS");
										
										if(intmagarasecim4==1){ //Ýp ölüm
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Kararýný verdin. Acýsýz bir ölüm oldu\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu acýmasýz hayata gözlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
											printf("Tamamlanan Görevler: %d/%d\n");
											printf("Kazandýðýn Para: %d\n");
											printf("Harcadýðýn Para: %d\n");
											printf("--------------------------------------\n");
											printf("Yolun sonuna geldik %s...\n",isim);
											return 0;
										}
										
										else if(intmagarasecim4==2){ //Gezin
										
											if(intmagaragezinsecimi==0){
												printf("Bir meþale buldun ve artýk etrafý daha iyi görüyorsun\n");
												printf("Korkunç bir manzara...\nHeryerde ipe asýlmýþ koca hayatlar...\n");
												printf("Biraz gezindikten sonra birdenbire konuþma sesleri duyuyorsun\n");
											}
											
											intmagaragezinsecimi=1;
											
											while(intmagara!=0){
											
												if(intmagaragorevi1==0){
													printf("[1]Sese doðru git\n[2]Gezinmeye devam et\n[3]Geri dön\n");
												}
											
												else{
													printf("[1]Ýhtiyar Büyücünün yanýna git\n[2]Gezinmeye devam et\n[3]Geri dön\n");	
												}
											
												scanf("%d",&intmagarasecim5);
								            	system("CLS");
												
												if(intmagarasecim5==1){ //Sese git yýlan görevi
													if(intmagaragorevi1==0){ //Maðara görevi yapýlmadý ilk defa gelindi 
														printf("Maðaranýn içinde ilerledikçe sesleri daha net duyuyorsun\nÜrpertici\n");
														printf("Oraya gitmek istediðinden emin misin?\n[1]Devam et\n[2]Ayrýl\n");
														scanf("%d",&intmagaragorevkarar);
														system("CLS");
														
														if(intmagaragorevkarar==1){ //Göreve gir
															printf("Gelen seslerin insan sesi olduðunu anlýyorsun ama konuþan her kimse senin bilmediðin bir dili konuþuyor\n");
															printf("En son çocukluðunda bu dili duymuþtun\n");
															system("PAUSE");
															system("CLS");
															printf("Ýlerledikçe 7 tane meþalenin ortasýnda oturan 80 Yaþlarýnda saçlarýna ve sakallarýna aklar düþmüþ bir adamý gördün.\nOna yaklaþýyorsun...\n");
															printf("Bir anda\n-DUR!\ndiye baðýrdý\n");
															system("PAUSE");
															system("CLS");
															printf("Birkaç dakika sonra oturduðu yerden kalktý ve yanýna yaklaþtý\n");
															system("PAUSE");
															system("CLS");
															printf("Hayattan býkmýþ bir biçimde,\n");
															printf("-Hoþgeldin %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Merhaba. Ýsmimi nereden biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Buraya geleceðin belliydi. Her özel savaþçý buraya gelmiþtir. Sen de onlardan birisin iþte...\n");
															system("PAUSE");
															system("CLS");
															printf("-Az önce konuþtuðun dil, yaptýðýn ritüelimsi þeyler. Bunlarýn açýklamasý nedir?\n");
															system("PAUSE");
															system("CLS");
															printf("-Her zaman böyle meraklý mýsýndýr %s?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Yeri geldiðinde herkes biraz meraklý olmalý. Her neyse, gerçekten burada ne yapýyorsun?\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben uzun yýllardýr burada yaþarým.\n");
															system("PAUSE");
															system("CLS");
															printf("-Burada mý? Bir maðarada öyle mi?\n");
															system("PAUSE");
															system("CLS");
															printf("-Evet. Dýþarýda iþler hiç iyi gitmiyor %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Neler biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Zamaný geldiðinde öðreneceksin. Ama þuan senden yapmaný istediðim bir þey var.\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben yaþlý bir adamým %s, güçlerim ve yeteneklerim sýnýrlý.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Dinliyorum ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-Güçlerim bu gezegenin yok olmamasý için gerekli %s. Bunu çok kiþiye anlattým ama inanmadýlar.\nHaksýz deðiller tabi, ölmekte olan bir ihtiyara kim inanýr ki?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Sadede gel ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-Bende olan bu laneti çözebilmem için bana 2 tane yýlan yumurtasý gerekli.\nYýlan dediðime bakma, maðaradaki renk deðiþtiren Ölüm Yýlanlarýndan bahsediyorum.\n");
															system("PAUSE");
															system("CLS");
															printf("-Eðer bana 2 tane Ölüm Yýlaný yumurtasý getirirsen 100 altýn ile ödüllendirileceksin.\nNe düþünüyorsun?\n");
															while(intmagara!=0){
																printf("Görevi;\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
																
																if(intmagaragorev1secimi==1){ //Görevi kabul et
																	printf("-Maðaranýn giriþinde yol üçe ayrýlýr. Buraya geldiðine göre sað tarafý seçmiþsin.\nHerneyse, maðaranýn giriþinden düz git, yol ikiye ayrýlacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, çarþýda bulabileceðin 'uyutucu etkiye sahip kediotu'nu yýlanlarýn ortasýna atarsan iþin kolaylaþabilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anladým. Görüþmek üzere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Görüþmek üzere...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-----------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVÝ ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //Görevi reddet
																	printf("-Þuan müsait deðilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlýyorum evlat. Yalnýz, bir an önce müsait olursan iyi olur.\n");
																	system("PAUSE");
																	system("CLS");
																	intmagaragorevi1=1;
																	break;
																}
																
															}
															
														}
														
														else if(intmagaragorevkarar==2){ //Göreve girme
															printf("Riske girmemeyi tercih ettin\n");
															break;
														}
													
													}
													
													else if(intmagaragorevi1==1){ //Maðara görevi dinlendi karar aþamasýna geç
														while(intmagara!=0){
																printf("Görevi\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
															
																if(intmagaragorev1secimi==1){ //Görevi kabul et
																	printf("Maðaranýn giriþinde yol üçe ayrýlýr. Buraya geldiðine göre sað tarafý seçmiþsin.\nHerneyse, maðaranýn giriþinden düz git, yol ikiye ayrýlacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, çarþýda bulabileceðin 'uyutucu etkiye sahip kediotu'nu yýlanlarýn ortasýna atarsan iþin kolaylaþabilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anladým. Görüþmek üzere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Görüþmek üzere...\n");
																	printf("-----------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVÝ ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //Görevi reddet
																	printf("-Þuan müsait deðilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlýyorum evlat. Yalnýz, bir an önce müsait olursan iyi olur.\n");
																	system("PAUSE");
																	system("CLS");
																	intmagaragorevi1=1;
																	break;
																}
																
															}
															
													}
													
													else if(intmagaragorevi1==2){ //Maðara görevi alýndý büyücüyle konuþma
														printf("-Hoþgeldin %s.\n",isim);
														printf("-Sadece geziniyorum\n");
													}
													
													else if(intmagaragorevi1==3 && yilanyumurtasi>=2){ //Maðara görevi tamamlanýyor
														printf("-Ýþte. 2 adet Ölüm Yýlaný yumurtasý.\n");
														system("PAUSE");
														system("CLS");
														yilanyumurtasi-=2;
														printf("-Güzel. Teþekkür ederim %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Ne yapacaksýn bu yumurtalarý ihtiyar?\n");
														system("PAUSE");
														system("CLS");
														printf("-Dedim ya, güçlerimin kaybolmamasýný saðlayacak iksiri hazýrlayacaðým.\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya bildiklerin?\n");
														system("PAUSE");
														system("CLS");
														printf("-Tamam. Anlatacaðým.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bu evrende kaç gezegen vardýr bilir misin evlat?\n");
														system("PAUSE");
														system("CLS");
														printf("-Bazý söylentiler duydum çocukluðumdan beri\nAma doðrusunu bilmiyorum.\n");
														system("PAUSE");
														system("CLS");
														printf("-Evrenimizde 7 yarý-tanrý, 7 gezegen vardýr\nBunlar; Yaþam ve doða gezegeni\nBilgi gezegeni\nAþk ve Þehvet gezegeni\nTicaret gezegeni\nSavaþ gezegeni ve Zulüm gezegeni\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya 7.gezegen?\n");
														system("PAUSE");
														system("CLS");
														printf("-7. gezegen ya! Doðru. Fakat ben her þeyi bilemem %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Her gezegenin kendi içinde bir dengesi vardýr. Maalesef son zamanlarda bu denge bozuluyor.\n");
														system("PAUSE");
														system("CLS");
														printf("-Neden?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar...\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar mý?\nOnlar da ne?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar yarý-tanrýlar tarafýndan görevlendirildi.\nGezegenler arasý portallarý ve bu portallardan geçenleri kontrol ederler.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bunda bir sorun yok. Ancak son zamanlarda portallardan baþka gezegenlere geçmek daha da kolaylaþtý.\nArtýk gelen geçen belli deðil. Gezegenlerin dengesinin bozulmasýnýn bir sebebi bu.\n");
														system("PAUSE");
														system("CLS");
														printf("-Çocukken bizi korkutmak için okutulan kitaplardaki yaratýklarýn bazýlarýný bu gezegende gördüm %s.\nOnlarýn burada olmamasý gerek.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Hatta bir kere...üzere...\n");
														system("PAUSE");
														system("CLS");
														printf("(Büyücü iksiri hazýrlarken kokusundan etkilendin)\n");
														system("PAUSE");
														system("CLS");
														printf("-En kýsa zamanda dediðinizi yapacaðým.\nÞimdi gitmem gerek.\n");
														system("PAUSE");
														system("CLS");
														printf("-Güzel. Hadi kolay gelsin!\n");
														system("PAUSE");
														system("CLS");
														printf("Ýntihar maðarasýna doðru koþuyorsun\nHava o kadar sýcak ki maðaranýn soðuðu bile serinletemiyor\n");
														system("PAUSE");
														system("CLS");
														printf("Sola doðru gidiyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Kapýnýn açýk olduðunu görüp içeri giriyorsun\nMerdivenden iniyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Odada üzerinde þarap þiþesinden baþka hiçbir þey olmayan bir masa ve bir sandýk görüyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Sandýðý tüm gücünle ittirirken...\n");
														system("PAUSE");
														system("CLS");
														printf("...\n");
														system("PAUSE");
														system("CLS");
														printf("(Ayýlýyorsun)\n");
														system("PAUSE");
														system("CLS");
														printf("-Dediðim gibi %s. Dýþarýda yaþýyorsan, dikkatli olacaksýn.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("(Öksürük sesi)\nVerdiðin bilgiler için teþekkür ederim ihtiyar.\nBen kalkayým artýk.\n");
														system("PAUSE");
														system("CLS");
														printf("Tamam. Ha! Az daha ödülü vermeyi unutuyordum.\n");
														system("PAUSE");
														system("CLS");
														printf("Ýþte söz verdiðim gibi, 100 altýn.\n");
														altin+=100;
														onur+=50;
														printf("+100 Altýn\n");
														system("PAUSE");
														system("CLS");
														printf("---------------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVÝ TAMAMLANDI\n---------------------------------------\n");
														intmagaragorevi1=4;
														printf("+50 Onur\n");
														system("PAUSE");
														system("CLS");
														printf("Artýk büyücüye gelip bilgi alabilirsin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
													else if(intmagaragorevi1==4){ //Görev tamamen bitti büyücü ile konuþma para karþýlýðý bilgi olabilir
														
														while(intmagara!=0){
															printf("Hoþgeldin %s\nSenin için ne yapabilirim?\n",isim);
															printf("[1]Elinde hangi bilgiler varmýþ görelim\n[2]Yetenek üretmek istiyorum\n[3]Verdiðin bilgilerin ne iþe yaradýðýný söyle\n[4]Ayrýl\n");
															scanf("%d",&intmagarasecim8);
															system("CLS");
															
															if(intmagarasecim8==1){
																printf("DÜZENLENECEK\n");//DÜZENLENECEK******************************************
																while(intmagara!=0){
																	
																	intbilgisayfa=1;
																	
																	if(intbilgisayfa==1){
																		
																		printf("Elimdeki Bilgiler\n");
																		
																		if(bilgi[0]==0){
																			printf("[1] Yedinci Gezegenin Adý: X Altýn\n");
																		}
																		
																		else if(bilgi[0]==1){
																			printf("[1] Yedinci Gezegenin Adý (ALINDI)\n");	
																		}
																		
																		if(bilgi[1]==0){
																			printf("[2] Doða ve Yaþam Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[1]==1){
																			printf("[2] Doða ve Yaþam Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[2]==0){
																			printf("[3] Bilgi Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[2]==1){
																			printf("[3] Bilgi Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[3]==0){
																			printf("[4] Aþk ve Þehvet Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[3]==1){
																			printf("[4] Aþk ve Þehvet Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[4]==0){
																			printf("[5] Ticaret Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[4]==1){
																			printf("[5] Ticaret Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[5]==0){
																			printf("[6] Savaþ Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[5]==1){
																			printf("[6] Savaþ Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[6]==0){
																			printf("[7] Zulüm Gezegeninin Yarý Tanrýsýnýn Özellikleri: X Altýn\n");
																		}
																		
																		else if(bilgi[6]==1){
																			printf("[7] Zulüm Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[7]==0){
																			printf("[8] X Gezegeninin Yarý Tanrýsýnýn Özellikleri(Bunu açmak için Yedinci Gezegenin adýný öðrenmelisin!!): X Altýn\n");
																		}
																		
																		else if(bilgi[7]==1){
																			printf("[8] X Gezegeninin Yarý Tanrýsýnýn Özellikleri (ALINDI)\n");
																		}
																		
																		printf("[9] Geri dön\n");
																		printf("[10] 2.Sayfaya Geç\n");
																		printf("----------------------------------------------------1.SAYFA----------------------------------------------------\n");
																		
																		printf("Seçimini Yap\n");
																		scanf("%d",&intbilgisec1);
																		system("CLS");
																		
																		if(intbilgisec1==1){
																			
																			if(bilgi[0]==1){
																				printf("Buna zaten sahipsin!\n");
																			}
																			
																			else{
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
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
																				printf("Satýn aldýn\n");
																				bilgi[7]=1;
																			}
																			
																			system("PAUSE");
																			system("CLS");
																			
																		}
																		
																		else if(intbilgisec1==9){ //Geri dön
																			break;
																		}
																		
																		else if(intbilgisec1==10){ //2.Sayfaya geç
																			intbilgisayfa=2;
																			system("PAUSE");
																			system("CLS");
																		}
																		
																	}
																	
																	if(intbilgisayfa==2){
																		while(intmagara!=0){
																			printf("2.SAYFA EKLENECEK\n");
																			printf("[1] Ýlk seçenek\n");
																			printf("[2] 1.Sayfaya Geç\n");
																			printf("----------------------------------------------------2.SAYFA----------------------------------------------------\n");
																			printf("Seçimini Yap\n");
																			scanf("%d",&intbilgisec2);
																			system("CLS");
																			
																			if(intbilgisec2==1){
																				printf("Ýlk seçeneði aldýn (DENEME)\n");
																			}
																			
																			else if(intbilgisec2==2){
																				intbilgisayfa=1;
																				break;
																			}
																			
																		}
																		
																	}
																	
																} //while bitiþi
																
															}
															
															else if(intmagarasecim8==2){
																printf("DÜZENLENECEK\n"); //DÜZENLENECEK
															}
															
															else if(intmagarasecim8==3){
																printf("Verdiðim bilgileri birleþtirerek yeni yetenekler üretip kullanabilirsin\n");
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
												
												else if(intmagarasecim5==2){ //Gezinmeye devam et böcekler
													
													if(intbocekgorme==0){
														printf("Etrafta böceklerin olduðunu görünce iðreniyorsun.\n");
														printf("O da ne!!\nYaklaþýk 2 Metre boyunda kocaman bir hamam böceði!!\nÝðrenç...\n");
														intbocekgorme=1;
													}
													
													else{
														printf("Hamam böceði hala orada\n");	
													}
				
													printf("[1]Saldýr\n[2]Saklan\n[3]Kaç\n");
													scanf("%d",&intmagarasecimbocek1);
													system("CLS");
													
													if(intmagarasecimbocek1==1){ //Saldýr EKLENECEK
															
													}
													
													else if(intmagarasecimbocek1==2){ //Saklan
														printf("Hemen bir taþýn arkasýna saklandýn\n");
														if(intmagaraokalma==0){
															printf("Þansa bak!!\nYanýnda yakýn zamanda kendi hayatýna kýymýþ birinin oklarýný buldun\n");
															printf("Kýyafetlerine baktýðýnda onun bir savaþçýnýn cesedi olduðunu anladýn\nOklar hala kullanýlabilir durumda\n");
															printf("[1]Oklarý topla(Onurun düþer)\n[2]Görmezden gel\n");
															scanf("%d",&intmagaraoktopla);
															system("CLS");
															
															if(intmagaraoktopla==1){ //Ok almaya çalýþtý
																srand(time(NULL));
																intmagaraoktoplasans=rand()%10;
																
																if(intmagaraoktoplasans>=0 && intmagaraoktoplasans<8){
																	ok[0]+=50;
																	printf("Oklarý topladýn ama galiba bir savaþçýnýn oklarýný çalmanýn ne anlama geldiði hakkýnda bir fikrin yok!\n");
																	printf("Yaþasa da Yaþamasa da...\n");
																	onur-=30;
																	printf("30 Onur Kaybettin!\nSessizce uzaklaþýyorsun\n");
																	system("PAUSE");
																	system("CLS");
																}
																
																else{ //Ayaðýn kaydý
																	printf("Yere düþmüþ sadaðý yavaþça almaya çalýþýrken ayaðýn kaydý ve biraz ses yaptýn!\n");
																	srand(time(NULL));
																	intmagarasesyapmasans=rand()%10;
																	
																	if(intmagarasesyapmasans>=0 && intmagarasesyapmasans<5){ 
																		ok[0]+=50;
																		printf("Neyseki hamam böceði bunu duymadý\nÞanslý günündesin...\n");
																		printf("Oklarý topladýn ama galiba bir savaþçýnýn oklarýný çalmanýn ne anlama geldiði hakkýnda bir fikrin yok!\n");
																		printf("Yaþasa da Yaþamasa da...\n");
																		onur-=30;
																		printf("30 Onur Kaybettin!\n");	
																	}
																	
																	else{
																		printf("Olamaz!\nHamam böceði bunu duymuþ olmalý\n");
																		printf("Hemen karar ver!\n[1]Saklanmaya devam et\n[2]Hýzlýca kaç\n");
																		scanf("%d",&intmagarabocekkac);
																		system("CLS");
																		
																		if(intmagarabocekkac==1){ //Saklanmaya devam
																			printf("Hamam böceði bugün tembel gününde. Seni umursamadý.\n");
																		}
																		
																		else if(intmagarabocekkac==2){ //Hýzlýca Kaç
																			
																			if(hiz>100){
																				printf("Hýz yeteneðin çok iyi olduðu için sýkýntýsýz bir þekilde ortamdan uzaklaþtýn\n");	
																			}
																			
																			else{
																				printf("Koþarken ayaðýn bir taþa takýldý ve yere düþtün\n");
																				can-=20;
																				printf("20 Can Azaldý!!\n");
																			}
																			
																		}
																		
																	}
																	
																}	
																
															}
															
															else if(intmagaraoktopla==2){ //Ok almadý
																printf("Onurlu bir savaþçý olma yolunda önemli bir test\n");
																onur+=10;
																printf("10 Onur Kazandýn!\n");
																printf("Buradan uzaklaþmanýn tam zamaný\n");
																system("PAUSE");
																system("CLS");
																intmagaraokalma=1;
															}
														//	break;
														}
														
														else{
															printf("Hamam böceði seni duymuþ olsa da pek de umursamadý\n");
															printf("Sessizce uzaklaþýyorsun\n");
															break;
														}
														
													}
													
													else if(intmagarasecimbocek1==3){ //Kaçmaya Çalýþtýn
														srand(time(NULL));
														intboceksans=rand()%2;
														
														if(intboceksans==0){ //Kaçtýn
															printf("Kaçmayý baþardýðýn için þanslýsýn\n");
														}
														
														else{ //Kaçamadýn
															printf("Olamaz!!\nHamam böceði seni duymuþ olmalý.\n[1]Onunla dovüþ\n[2]Konuþmaya çalýþ\n");
															scanf("%d",&intmagarasecimbocek2);
															system("CLS");
															
															if(intmagarasecimbocek2==1){ //Dövüþ EKLENECEK
															}	
															
															else if(intmagarasecimbocek2==2){ //Konuþmaya Çalýþ
																printf("Onunla konuþmaya çalýþtýðýnda biraz sakinleþtiðini gördün.\n");
																
																if(intboceklekonusmayetenegi==1){ //Konuþ
																	printf("Sana hikayesini anlatýyor. Duyduðuna göre ilk defa böcek dýþýnda bir yaratýkla konuþuyor. Onun ilgisini çektin\n");
																	printf("GÖREV VEYA EVENT GELECEK\n"); //***************
																}
																
																else if(intboceklekonusmayetenegi==0){ //Konuþamayýp Kaçmak
																	printf("Bir dakika\nSen onun dilini bilmiyorsun ki!\nHamam böceðinin bir boþluðundan yararlanýp yavaþça ondan uzaklaþýyorsun\n");
																	printf("Buraya gelmeden önce onun dilini öðrensen iyi olur.\n");
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
										
										else if(intmagarasecim4==3){ //Geri dön
											break;
										}
										
									}
									
								}
								
								else if(intmagarayolsecim2==4){ //Geri dön
									break;
								}
								
							}
							
						}
						
						else if(intmagarayolsecim1==2){ //Geri dön
						
							if(intalevanahtar==1 || intmagarasandiksayaci==1){
								printf("Ne maceraydý ama!!\n");
							}
							
							printf("Bu ortamdan uzaklaþtýðýn için kendini daha rahat hissediyorsun\n");
							break;
						}
					}
					
				break;
				
				case 7:
					
					if(din==0)
					{
						printf("Evde bir güzel dinlendin günün boþ geçti ama yaralarýn tamamen iyileþti.");
						can=Mcan;
					}
					
					if(din==1)
					{
						printf("Evde oturmaktan çok sýkýldýðýn için dýþarýda vakit geçirmeye karar verdin.");
						gun--;
					din=1;
					}
					
				break;
				
				case 8:
					
					printf("Talim alanýna hoþgeldin! Hangi yeteneðini geliþtirmek istersin?\n[1]Kýlýç [2]Okçuluk [3]Büyücülük [4]Dayanýklýlýk [5]Hýz [6]Max Can\n");
					scanf("%d",&talim);
					
					if(talim==1)
					{
							printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
							scanf("%d",&talim1);
						
						if(talim1==1)
						{
							hasar=hasar+5;
							printf("Kýlýç ustalýðýn 5 arttý! Yeni kýlýç ustalýðýnýz=%d\n",hasar);
						}
						
						else if(talim1==2)
						{
							i=rand()%15;
							can=can-i;
							hasar=hasar+15;
							printf("Kýlýç ustalýðýn 10 arttý ama canýn %d azaldý!\nYeni kýlýç ustalýðýn=%d\nMevcut canýn=%d\n",i,hasar,can); 
						}
						
						else if(talim1==3)
						{
						    i=rand()%20;
						    j=i+15;
						  	can=can-j;
						  	hasar=hasar+25;
						  	printf("Kýlýç ustalýðýn 25 arttý ama canýn %d azaldý!\nYeni kýlýç ustalýðýn=%d\nMevcut canýn=%d\n",j,hasar,can);
						}
					}
					
					else if(talim==2)
					{
						printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
						scanf("%d",&talim2);
						
						if(talim2==1)
						{
							okyet=okyet+5;
							printf("Okçuluðun 5 arttý! Yeni okçuluðun=%d\n",ok);
						}
						
						else if(talim2==2)
						{
							i=rand()%15;
							can=can-i;
							okyet=okyet+15;
							printf("Okçuluðun 10 arttý ama canýn %d azaldý!\nYeni okçuluðun=%d\nMevcut canýn=%d\n",i,ok,can);
						}
						
						else if(talim2==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							okyet=okyet+25;
							printf("Okçuluðun 25 arttý ama canýn %d azaldý!\nYeni okçuluðun=%d\nMevcut canýn=%d\n",j,ok,can);
						}
					}
					
					else if(talim==3)
					{
						printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
						scanf("%d",&talim3);
						if(talim3==1)
						{
							buyuyet=buyuyet+5;
							printf("Büyü gücün 5 arttý! Yeni büyü gücünüz=%d\n",buyuyet);
						}
						
						else if(talim3==2)
						{
							i=rand()%15;
							can=can-i;
							buyuyet=buyuyet+15;
							printf("Büyü gücün 10 arttý ama canýn %d azaldý!\nYeni büyü gücün=%d\nMevcut canýn=%d\n",i,buyuyet,can);
						}
						
						else if(talim3==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							buyuyet=buyuyet+25;
							printf("Büyü gücün 25 arttý ama canýn %d azaldý!\nYeni büyü gücün=%d\nMevcut canýn=%d\n",j,buyuyet,can);
						}
					}
					
					else if(talim==4)
					{
						printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
						scanf("%d",&talim4);
						
						if(talim4==1)
						{
							def=def+5;
							printf("Dayanýklýlýðýn 5 arttý! Yeni dayanýklýlýðýn=%d\n",def);
						}
						
						else if(talim4==2)
						{
							i=rand()%15;
							can=can-i;
							def=def+15;
							printf("Dayanýklýlýðýn 15 arttý ama canýn %d azaldý!\nYeni dayanýklýlýðýn=%d\nMevcut canýn=%d\n",i,def,can);
						}
						
						else if(talim4==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							def=def+25;
							printf("Dayanýklýlýðýn 25 arttý ama canýn %d azaldý!\nYeni dayanýklýlýðýn=%d\nMevcut canýn=%d\n",j,def,can);
						}
					}
					
					else if(talim==5)
					{
						printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
						scanf("%d",&talim5);
						
						if(talim5==1)
						{
							hiz=hiz+5;
							printf("Hýzýn 5 arttý! yeni hýzýn=%d\n",hiz);
						}
						
						else if(talim5==2)
						{
							i=rand()%15;
							can=can-i;
							hiz=hiz+15;
							printf("Hýzýn 15 arttý ama canýn %d azaldý!\nYeni hýzýn=%d\nMevcut canýn=%d\n",i,hiz,can);
						}
						
						else if(talim5==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							hiz=hiz+25;
							printf("Hýzýn 25 arttý ama canýn %d azaldý!\nYeni hýzýn=%d\nMevcut canýn=%d\n",j,hiz,can);
						}
					}
					
					else if(talim==6)
					{
						printf("Ne kadar çalýþacaksýn [1]Hafif [2]Dengeli [3]Aðýr\n");
						scanf("%d",&talim6);
						
						if(talim6==1)
						{
							Mcan=Mcan+5;
							printf("Maksimum canýn 5 arttý! Yeni maksimum canýn=%d\n",Mcan);
						}
						
						else if(talim6==2)
						{
							i=rand()%15;
							can=can-i;
							Mcan=Mcan+15;
							printf("Maksimum canýn 15 arttý ama canýn %d azaldý!\nYeni maksimum canýn=%d\nMevcut canýn=%d\n",i,Mcan,can);
						}
						
						else if(talim6==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							Mcan=Mcan+25;
							printf("Maksimum canýn 25 arttý ama canýn %d azaldý!\nYeni maksimum canýn=%d\nMevcut canýn=%d\n",j,Mcan,can);
						}
					}
				
				break;
				
				case 9:
					
					hak=6;
					oyunsayac=0;
					srand(time(NULL)); 
					sanssayi = rand()%100;
					
					printf("Çarþýya hoþgeldin\n"); //PAZARLIK EKLENECEK(Karizma yeteneði) ÝSÝMLER DEÐÝÞECEK VE ÇEÞÝTLENDÝRÝLECEK || Envanter geldiðinde hasar ve defans item alýnýnca ve envantere koyulduðunda artacak
					
					while(shp!=0)
					{
						printf("Ne yapmak istersin?\n");
						printf("[1]Çarþýnýn sahibiyle konuþ\n[2]Silah dükkanýna git\n[3]Zýrh dükkanýna git\n[4]Büyü dükkanýna git\n[5]Ýksir dükkanýna git\n[6]Evcil hayvan dükkanýna git\n[7]Aksesuar dükkanýna git\n[8]Kuaföre git\n[9]Eþya sat\n[10]Çarþýdan ayrýl\n");
						scanf("%d",&duksec);
						
						if(duksec==1) //OYUN
						{
							printf("Çarþýnýn sahibi ile konuþmaya gittin...\n");
							
							while(shp!=0)
							{
								printf("Biraz muhabbet ettikten sonra sana oynatacaðý bir oyunu kazanman karþýlýðýnda bir kereliðine herhangi bir üründe\nyuzde 50 indirim teklif etti!!\n");
								printf("Ama eðer kaybedersen 50 Altýnýný alacak!!\nKabul ediyorsan 1'e etmiyorsan 2'ye bas\nSeçimini Yap...\n");
								scanf("%d",&indsec);
								
								if(indsec==1)
								{
									
									if(oyunsayac==1)
									{
										printf("Bugünlük hakkýný kullandýn!!\n");
										break;
									}
									printf("Oyun basit. 0 ile 100 arasýnda bir sayý belirleniyor. 5 tahmin hakkýn var.\nÝlk turda tahminin ile belirlenen sayý arasýnda 20 veya daha az fark varsa ikinci tura geçiyorsun.\n");
									printf("Ýkinci turda tahminin ile belirlenen sayý arasýnda 10 veya daha az fark varsa üçüncü tura geçiyorsun.\nGerisini sen buluyorsun.\nHadi Baþlayalým!!\n\n");
									printf("1.TUR\n");
									hak=6;
									
									while(hak>0)
									{
										hak--;
										printf("Kalan hakkýn: %d\n",hak);
										
										if(hak==0)
										{
											printf("Kaybettin!!\n");
											altin-=50;
											printf("Kalan altýn: %d\n",altin);
											break;
										}
										printf("Bir sayý tahmin et: ");
										scanf("%d",&tahmin);
										
										if(sanssayi==tahmin)
										{
											printf("Kazandýn!!\n");
											printf("Bir tane indirim hakkýn var!!\n(Fiyatý yarýsýný hesapla)\n");
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
											printf("+2 Hak Kazandýn!!\n");
											printf("ÝPUCU: Aradýðýn sayý %d ile %d arasýnda...\n",tahmin-20,tahmin+20);
											
											while(hak>0)
											{
												hak--;
												printf("Kalan hakkýn: %d\n",hak);
												
												if(hak==0)
												{
													printf("Kaybettin!!\n");
													altin-=50;
													printf("Kalan altýn: %d\n",altin);
													break;
												}
												printf("Bir sayý tahmin et: ");
												scanf("%d",&tahmin);
												
												if(sanssayi==tahmin)
												{
													printf("Kazandýn!!\n");
													printf("Bir tane indirim hakkýn var!!\n(Fiyatý yarýsýný hesapla)\n");
													indirim=1;
													hak=0;
													break;
												}
												
												else if(((tahmin-sanssayi<=10&&tahmin-sanssayi>0) || (sanssayi-tahmin<=10&&sanssayi-tahmin>0)) && hak!=1)
												{
													printf("3.TUR\n");
													hak+=2;
													printf("+2 Hak Kazandýn!!\n");
													printf("ÝPUCU: Aradýðýn sayý %d ile %d arasýnda...\n",tahmin-10,tahmin+10);
													
													while(hak>0)
													{
														hak--;
														printf("Kalan hakkýn: %d\n",hak);
														
														if(hak==0)
														{
															printf("Kaybettin!!\n");
															altin-=50;
															printf("Kalan altýn: %d\n",altin);
															break;
														}
														printf("Bir sayý tahmin et: ");
														scanf("%d",&tahmin);
														
														if(sanssayi==tahmin)
														{
															printf("Kazandýn!!\n");
															printf("Bir tane indirim hakkýn var!!\n(Fiyatý yarýsýný hesapla)\n");
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
						
						else if(duksec==2) //SÝLAH ÇEÞÝTLERÝ
						{
							
							while(shp!=0)
							{ 
								printf("[1]Kýlýç\n[2]Balta\n[3]Mýzrak ve Kargý\n[4]Yay ve Ok\n[5]Silah dükkanýndan çýk\n");
								scanf("%d",&silsec);
								
								if(silsec==1) //KILIÇ ÇEÞÝTLERÝ 
								{
									printf("Kýlýç Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kýsa Kýlýç(Hasarý 20 arttýrýr): 40 altýn\n[2]Uzun Kýlýç(Hasarý 30 arttýrýr): 60 altýn\n[3]Tek Elli Aðýr Kýlýç(Hasarý 40 arttýrýr): 80 altýn\n");
										printf("[4]Çift Elli Aðýr Kýlýç(Hasarý 50 arttýrýr): 100 altýn\n[5]Ekmek Býçaðý(Hasarý 10 arttýrýr): 20 altýn\n[6]Hançer(Hasarý 15 arttýrýr): 30 altýn\n[7]Silah çeþitlerine geri dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(silsec==2) //BALTA ÇEÞÝTLERÝ
								{
									printf("Balta Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kýsa Balta(Hasarý 30 arttýrýr): 60 Altýn\n[2]Uzun Balta(Hasarý 50 arttýrýr): 100 Altýn\n[3]Tek Elli Aðýr Balta(Hasarý 70 arttýrýr): 140 Altýn\n");
										printf("[4]Çift Elli Aðýr Balta(Hasarý 90 arttýrýr): 180 Altýn\n[5]Silah çeþitlerine geri dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(silsec==3) //MIZRAK VE KARGI ÇEÞÝTLERÝ
								{
									printf("Mýzrak ve Kargý Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Uzun Mýzrak(Hasarý 40 arttýrýr): 80 Altýn\n[2]Üç Baþlý Mýzrak(Hasarý 60 arttýrýr): 120 Altýn\n[3]Uzun Kargý(Hasarý 80 arttýrýr): 160 Altýn\n");
										printf("[4]Baltalý Kargý(Hasarý 100 arttýrýr): 200 Altýn\n[5]Silah çeþitlerine geri dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(silsec==4) //YAY VE OK ÇEÞÝTLERÝ ANA KODDA DÜZELTÝLMELÝ OK SAYISI VE YAY YETENEÐÝ YETENEK ARTTIKÇA HASAR ARTABÝLÝR
								{
									printf("Yay ve Ok Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kýsa Yay(Okun hasarýný 20 arttýrýr): 40 Altýn\n[2]Uzun Yay(Okun hasarýný 30 arttýrýr): 60 Altýn\n[3]Crossbow(Okun hasarýný 50 arttýrýr): 100 Altýn\n");
										printf("[4]Tahta Ok(Okun hasarýný 2 arttýrýr: 4 Altýn\n[5]Taþ Ok(Okun hasarýný 4 arttýrýr): 8 Altýn\n[6]Silah çeþitlerine geri dön\n");
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
												printf("Kaç tane almak istersin?\n");
												scanf("%d",&oksay);
												
												if(oksay<=0)printf("Pozitif bir deðer gir!!\n");
												
												else
												{
													oktutar=oksay*4;
													
													if(altin>=oktutar)
													{
														printf("%d tane Tahta Ok satýn aldýn\n",oksay);
														altin=altin-oktutar;
														ok[0]+=oksay;
													}
													
													else
													{
														printf("Yeterli altýnýn yok!\n");
													}
													break;
												}
											}
										}
										
										else if(yaysec==5)
										{
											
											while(shp!=0)
											{
												printf("Kaç tane almak istersin?\n");
												scanf("%d",&oksay);
												
												if(oksay<=0)printf("Pozitif bir deðer gir!!");
												
												else
												{
													oktutar=oksay*8;
													
													if(altin>=oktutar)
													{
														printf("%d tane Taþ Ok satýn aldýn\n",oksay);
														altin=altin-oktutar;
														ok[1]+=oksay;
													}
													break;
												}
											}
										}
										
										else if(yaysec==6)
										{
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(silsec==5) //GERÝ DÖN
								{
									printf("Geri dönülüyor...\n");
									break;
								}
								
								else //TERKAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==3) //ZIRH ÇEÞÝTLERÝ
						{
							
							while(shp!=0)
							{
								printf("[1]Kalkan\n[2]Miðfer\n[3]Gövde\n[4]Bacak\n[5]Kol\n[6]Eldiven\n[7]Bot\n[8]Zýrh Dükkanýndan Çýk\n");
								scanf("%d",&zirhsec);
								
								if(zirhsec==1) //KALKAN ÇEÞÝTLERÝ
								{
									printf("Kalkan Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Klasik Yuvarlak Kalkan(Defansý 20 arttýrýr): 40 Altýn\n[2]Klasik Uzun Kalkan(Defansý 30 arttýrýr): 60 Altýn\n[3]Büyük Yuvarlak Kalkan(Defansý 50 arttýrýr): 100 Altýn\n");
										printf("[4]Dayanýklý Yuvarlak Kalkan(Defansý 70 arttýrýr): 140 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");				
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}				
								}
								
								else if(zirhsec==2) //MÝÐFER ÇEÞÝTLERÝ
								{
									printf("Miðfer Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Eskimiþ Miðfer(Defansý 10 arttýrýr): 20 Altýn\n[2]Klasik Miðfer(Defansý 15 arttýrýr): 30 Altýn\n[3]Kaliteli Miðfer(Defansý 20 arttýrýr): 40 Altýn\n");
										printf("[4]Dayanýklý Miðfer(Defansý 25 arttýrýr): 50 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==3) //GÖVDE ZIRHI ÇEÞÝTLERÝ
								{
									printf("Gövde Zýrhý Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Hasarlý Gövde Zýrhý(Defansý 30 arttýrýr): 60 Altýn\n[2]Klasik Gövde Zýrhý(Defansý 40 arttýrýr): 80 Altýn\n[3]Kaliteli Gövde Zýrhý(Defansý 50 arttýrýr): 100 Altýn\n");
										printf("[4]Dayanýklý Gövde Zýrhý(Defansý 60 arttýrýr): 120 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==4) //BACAK ZIRHI ÇEÞÝTLERÝ
								{
									printf("Bacak Zýrhý Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Parçalanmýþ Bacak Zýrhý(Defansý 5 arttýrýr): 10 Altýn\n[2]Klasik Bacak Zýrhý(Defansý 10 arttýrýr): 20 Altýn\n[3]Kaliteli Bacak Zýrhý(Defansý 15 arttýrýr): 30 Altýn\n");
										printf("[4]Dayanýklý Bacak Zýrhý(Defansý 20 arttýrýr): 40 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==5) //KOL ZIRHI ÇEÞÝTLERÝ
								{
									printf("Kol Zýrhý Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Paslanmýþ Kol Zýrhý(Defansý 5 arttýrýr): 10 Altýn\n[2]Klasik Kol Zýrhý(Defansý 10 arttýrýr): 20 Altýn\n[3]Kaliteli Kol Zýrhý(Defansý 15 arttýrýr): 30 Altýn\n");
										printf("[4]Saðlam Kol Zýrhý(Defansý 20 arttýrýr): 40 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==6) //ELDÝVEN ÇEÞÝTLERÝ
								{
									printf("Eldiven Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Yün Eldiven(Defansý 5 arttýrýr): 10 Altýn\n[2]Deri Eldiven(Defansý 10 arttýrýr): 20 Altýn\n[3]Kaliteli Eldiven(Defansý 15 arttýrýr): 30 Altýn\n");
										printf("[4]Aðýr Eldiven(Defansý 20 arttýrýr): 40 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==7) //BOT ÇEÞÝTLERÝ
								{
									printf("Bot Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Yün Bot(Defansý 10 arttýrýr): 20 Altýn\n[2]Klasik Bot(Defansý 15 arttýrýr): 30 Altýn\n[3]Saðlam Bot(Defansý 20 arttýrýr): 40 Altýn\n");
										printf("[4]Dayanýklý Bot(Defansý 25 arttýrýr): 50 Altýn\n[5]Zýrh Çeþitlerine Geri Dön\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==8) //GERÝ DÖN
								{
									printf("Geri dönülüyor...\n");
									break;
								}
								
								else //TEKRAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						else if(duksec==4){ //BÜYÜ ÇEÞÝTLERÝ
							while(shp!=0){
								printf("[1]Büyü1\n[2]Büyü2\n[3]Büyü3\n[4]Büyü4\n[5]Büyü Dükkanýndan Çýk\n");
								scanf("%d",&buyusec);
								if(buyusec==1){
									printf("Büyü1 aldýn\n");
									buyu[0]=1;
								}
								else if(buyusec==2){
									printf("Büyü2 aldýn\n");
									buyu[1]=1;
								}
								else if(buyusec==3){
									printf("Büyü3 aldýn\n");
									buyu[2]=1;
								}
								else if(buyusec==4){
									printf("Büyü4 aldýn\n");
									buyu[3]=1;
								}
								else if(buyusec==5){
									printf("Geri dönülüyor...\n");
									break;
								}
								else{
									printf("Tekrar dene!!\n");
								}
							}
						}
						else if(duksec==5) //ÝKSÝR ÇEÞÝTLERÝ DÜZENLENECEK
						{
							
							while(shp!=0)
							{
								printf("[1]Kuvvet Ýksiri(Savaþ sýrasýnda +x hasar artýþý)\n[2]Saðlýk Ýksiri(Savaþ sýrasýnda +x saðlýk artýþý)\n");
								printf("[3]Dayanýklýlýk Ýksiri(Savaþ sýrasýnda +x dayanýklýlýk artýþý)\n[4]Þans Ýksiri\n[5]Ýksir Dükkanýndan Çýk\n");
								scanf("%d",&ikssec);
								
								if(ikssec==1)
								{
									printf("Kuvvet Ýksiri aldýn\n");
									iksir[0]=1;
								}
								
								else if(ikssec==2)
								{
									printf("Saðlýk Ýksiri aldýn\n");
									iksir[1]=1;
								}
								
								else if(ikssec==3)
								{
									printf("Dayanýklýlýk Ýksiri aldýn\n");
									iksir[2]=1;
								}
								
								else if(ikssec==4)
								{
									printf("Þans Ýksiri aldýn\n");
									iksir[3]=1;
								}
								
								else if(ikssec==5)
								{
									printf("Geri dönülüyor...\n");
									break;
								}
								
								else
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==6) //PET ÇEÞÝTLERÝ
						{
							
							while(shp!=0)
							{
								printf("[1]Kedi(Zihin yeteneði 50 artar): 100 Altýn\n[2]Köpek(Tahmin yeteneði 50 artar): 100 Altýn\n[3]Petshop'tan Çýk\n");
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
									printf("Geri dönülüyor...\n");
									break;
								}
								
								else{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==7) //AKSESUAR ÇEÞÝTLERÝ 
						{
							
							while(shp!=0)
							{
								printf("[1]Kolye\n[2]Bileklik\n[3]Yüzük\n[4]Küpe\n[5]Aksesuar Dükkanýndan Çýk\n");
								scanf("%d",&akssec);
								
								if(akssec==1) //KOLYE ÇEÞÝTLERÝ
								{
									printf("Kolye Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Kolye: 50 Altýn\n[2]Altýn Kolye: 100 Altýn\n[3]Elmas Kolye: 200 Altýn\n[4]Geri\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(akssec==2) //BÝLEKLÝK ÇEÞÝTLERÝ
								{
									printf("Bileklik Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Bileklik: 50 Altýn\n[2]Altýn Bileklik: 100 Altýn\n[3]Elmas Bileklik: 200 Altýn\n[4]Geri\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(akssec==3) //YÜZÜK ÇEÞÝTLERÝ
								{
									printf("Yüzük Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Yüzük: 50 Altýn\n[2]Altýn Yüzük: 100 Altýn\n[3]Elmas Yüzük: 200 Altýn\n[4]Geri\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(akssec==4) //KÜPE ÇEÞÝTLERÝ
								{
									printf("Küpe Çeþitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Küpe: 50 Altýn\n[2]Altýn Küpe: 100 Altýn\n[3]Elmas Küpe: 200 Altýn\n[4]Geri\n");
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
											printf("Geri dönülüyor...\n");
											break;
										}
										
										else
										{
											printf("Tekrar dene!!\n");
										}
										printf("Altýnýn: %d\n\n",altin);
									}
								}
								
								else if(akssec==5) //GERÝ DÖN
								{
									printf("Geri dönülüyor...\n");
									break;
								}
								
								else //TEKRAR DENE
								{
									printf("Tekrar dene!!\n");
								}
							}
						}
						
						else if(duksec==8) //KUAFÖR
						{
							printf("Hoþgeldin\n"); //ÇEKÝCÝLÝK VEYA KARÝZMA ARTACAK
							
							while(shp!=0)
							{
							printf("[1]Saç\n[2]Sakal\n[3]Geri dön\n");
							scanf("%d",&kuaforsec);
							
							if(kuaforsec==1)
							{
								
								while(shp!=0)
								{
									printf("Altýnýn: %d\n",altin);
									printf("Nasýl bir saç modeli istersin?\n");
									printf("[1]Uzun: 50 Altýn\n[2]Kýsa: 40 Altýn\n[3]Kel: 40 Altýn\n[4]Boya\n[5]Geri dön\n");
									scanf("%d",&sacsec);
									
									if(sacsec==1)
									{
										
										if(altin>=50)
										{
											printf("Sýhhatler olsun!\n");
											altin-=50;
											kel=0; //DÜZENLENMELÝ
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
									
									else if(sacsec==2)
									{
										
										if(altin>=40)
										{
											printf("Sýhhatler olsun!\n");
											altin-=40;
											kel=0; //DÜZENLENMELÝ
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
								
									else if(sacsec==3)
									{
										
										if(altin>=40)
										{
											printf("Sýhhatler olsun!\n");
											altin-=40;
											kel=0; //DÜZENLENMELÝ
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
									
									else if(sacsec==4 && kel==0)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sarý: 75 Altýn\n[2]Kýrmýzý: 75 Altýn\n[3]Beyaz: 75 Altýn\n[4]Geri dön\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=75)
												{
													printf("Saçýný sarýya boyadýn!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
												}
											}
											
											else if(renksec==2)
											{
												
												if(altin>=75)
												{
													printf("Saçýný kýrmýzýya boyadýn!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=75)
												{
													printf("Saçýný beyaza boyadýn!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
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
									printf("Altýnýn: %d\n",altin);
									printf("Nasýl bir sakal modeli istersin?\n");
									printf("[1]Top Sakal: 40 Altýn\n[2]Kirli Sakal: 40 Altýn\n[3]Gür Sakal: 40 Altýn\n[4]Boya\n[5]Geri dön\n");
									scanf("%d",&sakalsec);
									
									if(sakalsec==1)
									{
										
										if(altin>=40)
										{
											printf("Sýhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
									
									else if(sakalsec==2)
									{
										
										if(altin>=40)
										{
											printf("Sýhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
									
									else if(sakalsec==3)
									{
										
										if(altin>=40)
										{
											printf("Sýhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altýnýn yok!!\n");
										}
									}
									
									else if(sakalsec==4)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sarý: 50 Altýn\n[2]Kýrmýzý: 50 Altýn\n[3]Beyaz: 50 Altýn\n[4]Geri dön\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=50)
												{
													printf("Sakalýný sarýya boyadýn!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
												}		
											}
											
											else if(renksec==2)
											{
												
												if(altin>=50)
												{
													printf("Sakalýný kýrmýzýya boyadýn!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=50)
												{
													printf("Sakalýný beyaza boyadýn!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altýnýn yok!!\n");
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
						
						else if(duksec==9) //EÞYA SAT
						{
							printf("Envanter Açýlýyor\n\n");
							
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
										printf("%d Kýsa Kýlýç (+20 Hasar) | Satýþ Fiyatý: %d\n",kil[0],kilf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Uzun Kýlýç (+30 Hasar) | Satýþ Fiyatý: %d\n",kil[1],kilf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Tek Elli Aðýr Kýlýç (+40 Hasar) | Satýþ Fiyatý: %d\n",kil[2],kilf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Çift Elli Aðýr Kýlýç (+50 Hasar) | Satýþ Fiyatý: %d\n",kil[3],kilf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Ekmek Býçaðý (+10 Hasar) | Satýþ Fiyatý: %d\n",bic[0],bicf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Hançer (+15 Hasar) | Satýþ Fiyatý: %d\n",bic[1],bicf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kýsa Balta (+30 Hasar) | Satýþ Fiyatý: %d\n",bal[0],balf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Uzun Balta (+50 Hasar) | Satýþ Fiyatý: %d\n",bal[1],balf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Tek Elli Aðýr Balta (+70 Hasar) | Satýþ Fiyatý: %d\n",bal[2],balf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Çift Elli Aðýr Balta (+90 Hasar) | Satýþ Fiyatý: %d\n",bal[3],balf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Uzun Mýzrak (+40 Hasar) | Satýþ Fiyatý: %d\n",miz[0],mizf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Üç Baþlý Mýzrak (+60 Hasar) | Satýþ Fiyatý: %d\n",miz[1],mizf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Uzun Kargý (+80 Hasar) | Satýþ Fiyatý: %d\n",kar[0],karf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Baltalý Kargý (+100 Hasar) | Satýþ Fiyatý: %d\n",kar[1],karf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kýsa Yay (+20 Ok Hasarý) | Satýþ Fiyatý: %d\n",yay[0],yayf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Uzun Yay (+30 Ok Hasarý) | Satýþ Fiyatý: %d\n",yay[1],yayf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Crossbow (+50 Ok Hasarý) | Satýþ Fiyatý: %d\n",yay[2],yayf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Tahta Ok (+2 Ok Hasarý) | Satýþ Fiyatý: %d\n",ok[0],okf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Taþ Ok (+4 Ok Hasarý) | Satýþ Fiyatý: %d\n",ok[1],okf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Yuvarlak Kalkan (+20 Zýrh) | Satýþ Fiyatý: %d\n",kalkan[0],kalkanf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Uzun Kalkan (+30 Zýrh) | Satýþ Fiyatý: %d\n",kalkan[1],kalkanf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Büyük Yuvarlak Kalkan (+50 Zýrh) | Satýþ Fiyatý: %d\n",kalkan[2],kalkanf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Dayanýklý Yuvarlak Kalkan (+70 Zýrh) | Satýþ Fiyatý: %d\n",kalkan[3],kalkanf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Eskimiþ Miðfer (+10 Zýrh) | Satýþ Fiyatý: %d\n",mig[0],migf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Miðfer (+15 Zýrh) | Satýþ Fiyatý: %d\n",mig[1],migf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kaliteli Miðfer (+20 Zýrh) | Satýþ Fiyatý: %d\n",mig[2],migf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Dayanýklý Miðfer (+25 Zýrh) | Satýþ Fiyatý: %d\n",mig[3],migf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Hasarlý Gövde Zýrhý (+30 Zýrh) | Satýþ Fiyatý: %d\n",gov[0],govf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Gövde Zýrhý (+40 Zýrh) | Satýþ Fiyatý: %d\n",gov[1],govf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kaliteli Gövde Zýrhý (+50 Zýrh) | Satýþ Fiyatý: %d\n",gov[2],govf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Dayanýklý Gövde Zýrhý (+60 Zýrh) | Satýþ Fiyatý: %d\n",gov[3],govf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Parçalanmýþ Bacak Zýrhý (+5 Zýrh) | Satýþ Fiyatý: %d\n",bac[0],bacf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Bacak Zýrhý (+10 Zýrh) | Satýþ Fiyatý: %d\n",bac[1],bacf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kaliteli Bacak Zýrhý (+15 Zýrh) | Satýþ Fiyatý: %d\n",bac[2],bacf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Dayanýklý Bacak Zýrhý (+20 Zýrh) | Satýþ Fiyatý: %d\n",bac[3],bacf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Paslanmýþ Kol Zýrhý (+5 Zýrh) | Satýþ Fiyatý: %d\n",kol[0],kolf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Paslanmýþ Kol Zýrhý (+10 Zýrh) | Satýþ Fiyatý: %d\n",kol[1],kolf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kaliteli Kol Zýrhý (+15 Zýrh) | Satýþ Fiyatý: %d\n",kol[2],kolf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Saðlam Kol Zýrhý (+20 Zýrh) | Satýþ Fiyatý: %d\n",kol[3],kolf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Yün Eldiven (+5 Zýrh) | Satýþ Fiyatý: %d\n",eld[0],eldf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Deri Eldiven (+10 Zýrh) | Satýþ Fiyatý: %d\n",eld[1],eldf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kaliteli Eldiven (+15 Zýrh) | Satýþ Fiyatý: %d\n",eld[2],eldf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Aðýr Eldiven (+20 Zýrh) | Satýþ Fiyatý: %d\n",eld[3],eldf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Yün Bot (+10 Zýrh) | Satýþ Fiyatý: %d\n",bot[0],botf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Klasik Bot (+15 Zýrh) | Satýþ Fiyatý: %d\n",bot[1],botf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Saðlam Bot (+20 Zýrh) | Satýþ Fiyatý: %d\n",bot[2],botf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Dayanýklý Bot (+25 Zýrh) | Satýþ Fiyatý: %d\n",bot[3],botf[3]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Kedi (+50 Zihin Yeteneði) | Satýþ Fiyatý: %d\n",pet[0],petf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Köpek (+50 Tahmin Yeteneði) | Satýþ Fiyatý: %d\n",pet[1],petf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Bronz Kolye | Satýþ Fiyatý: %d\n",kolye[0],kolyef[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Altýn Kolye | Satýþ Fiyatý: %d\n",kolye[1],kolyef[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Elmas Kolye | Satýþ Fiyatý: %d\n",kolye[2],kolyef[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Bronz Bileklik | Satýþ Fiyatý: %d\n",bilek[0],bilekf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Altýn Bileklik | Satýþ Fiyatý: %d\n",bilek[1],bilekf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Elmas Bileklik | Satýþ Fiyatý: %d\n",bilek[2],bilekf[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Bronz Yüzük | Satýþ Fiyatý: %d\n",yuzuk[0],yuzukf[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Altýn Yüzük | Satýþ Fiyatý: %d\n",yuzuk[1],yuzukf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Elmas Yüzük | Satýþ Fiyatý: %d\n",yuzuk[2],yuzukf[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Bronz Küpe | Satýþ Fiyatý: %d\n",kupe[0],kupef[0]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Altýn Küpe | Satýþ Fiyatý: %d\n",kupe[1],kupef[1]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
										printf("%d Elmas Küpe | Satýþ Fiyatý: %d\n",kupe[2],kupef[2]/2);
										printf("[1]Sat\n[2]Bakmaya devam et\n[3]Geri dön\n");
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
					
						else if(duksec==10) //ÇARÞIDAN AYRIL
						{
							printf("Çarþýdan Ayrýlýnýyor...\n");
							break;
						}
						
						else //TEKRAR DENE
						{
							printf("Tekrar dene!!\n");
						}
					 }
				break;
				
				case 10:
					
					printf("bozkýr dünyasýna giriþ yaptýnýz. Burasý zorbalarýn, adilerin ve kötü kalpli insanlarým diyarý gezerken bir Zelemna baskýnýna uðrayabilir ya da bir bozkýr hayvaný tarafýndan saldýrýya uðrayabilirsin bozkýr evlerinde kumar oynayabilir ya da özel iznin varsa Zelemna kabilesinin köyüne gidebilirsin.\n");
					printf("[1]bozkýrda gezintiye çýk\n[2]kumar çadýrlarýný bul\n[3]Zelemna kabilesinin köyüne git(daha yapýlmadý)\n[4]bozkýrý keþfetmesi için insan tut(dikkat et kiraladýðýn insan ölebilir ya da iyi bir ganimet bulursa alýp kaçabilir)\n");
					printf("ne yapmak istersin : ");
					scanf("%d",&Bsec);
					
					if(Bsec==1)
					{
						biht=(rand()%100);
						if(biht>95)
						{
							printf("küçük bir Zelemna devriyesine denk geldin. hemen saklandýn fakat bir tanesi seni gördü ve savaþa tutuþtunuz.");
							DMcan=100,Dcan=100,Dsaldiri=10,saldiri=hasar/3,tur=0,Ddef=10;
							savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
							can=Darena[0];
							exp=Darena[1];
							altin=Darena[2];
							hasar=Darena[3];
							onur=Darena[4];
							if(can>0)
							{
								printf("savaþtýðýn kiþi devriye lideri olmakla beraber köyün de lideri çýktý. senin çok yiðitçe dövüþtüðünü söyledi ve sana köye giriþ izinini verdi(giriþ izni yapalým)");
							}
							
						}
						
						else if(biht>90)
						{
							printf("bozkýrýn bir yerde çukurlaþtýðýný görüyorsun ve bir hazine maðarasý olduðunu farkediyorsun. içerideki hazineyi almak ister misin?\n[1]evet al\n[2]hayýr alma\nne yapmak istersin: ");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("kazancýnýz\n400 altýn\n30 taþ ok");
								altin= altin+400;
								ok[1]=ok[1]+30;
								
							}
							
							else if(Bsec==2)
							{
								printf("hiç ellemeden çýktýnýz");
							}
							
							else
							{
								printf("hiç ellemeden çýktýnýz");
							}
							
						}
						
						else if(biht>85)
						{
							printf("bozkýrda bir kelle avcýsýný gördün ve seni durdurdu. Birkaç sayfasýný kontrol ettikten sonra senin bir suçlu olmadýðýný söyledi. Bir suçluyu aradýðýný ve suçluyu bulup öldürmede ona yardým edersen ödülü bölüþebileceðini söyledi.\n[1] yardým et \n[2]yardým etme\nne yapmak istiyorsun");
							scanf("%d",&Bsec2);
							
							if(Bsec==1)
							{
								printf("bunu duyduðuna sevindi ve sana aradýðýn kiþinin resmini gösterdi. Gözgörmez Peek adýnda birisi ve çok atik birisiymiþ aramaya koyuluyorsunuz.\n------------\n------------\n------------\n------------\n------------\n");
								printf("aradýðýnýz adam size gece uyuyorken bir suikast gerçekleþtiriyor. Ortaðýnýn boðazý çoktan kesilmiþ ve oluk oluk kan akýyor. bir savaþ baþlamak zorunda artýk\n");
								
								DMcan=300,Dcan=300,Dsaldiri=30,saldiri=hasar/3,tur=0,Ddef=30;
								savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
								can=Darena[0];
								exp=Darena[1];
								altin=Darena[2];
								hasar=Darena[3];
								onur=Darena[4];
								if(can>0)
								{
									printf("ona alýþmaya baþlamýþtýn. Öldü ve ona yaraþýr bir þekilde gömüldü. Mezari baþýnda güzel bir konuþma sonrasý rakibinin kelesi ve aranan kiþiler listesiyle kasabaya indin");
									altin=altin+300;
									printf("kelleye konan ödül 300 altin\naltin: %d",altin);
								}
							
							}
							
							else
							{
								printf("senin bir korkak olduðunu söyledi ve yoluna gitti.");
							}
						}
						
						else if(biht>80)
						{
							printf("bir tüccara rastladýn. yolda kaldýðýný ve acilen paraya ihtiyacý olduðunu söyledi. elindeki mallarýný yarý fiyatýna sana satmak istiyor. Almak ister misin?\n[1]evet isterim \n[2]hayýr istemem\n");
							printf("daha bitmedi sonra dene þansýný");
							
						}
						
						else if(biht>75)
						{
							printf("bir katibe denk geldin kendisi yolda kalmýþ ve yol güvenliðini saðlaman karþýlýðýnda sana belli bri ücret sunmak istiyor ne dersin");
						}
						
						else if(biht>70)
						{
							printf("yolda bir efsun taþý görüyorsun(yetenek aðacý için)");
						}
						
						else if(biht>65)
						{
							printf("bozkýrýn en derinlerine doðru yol almaya baþladýn devam etmek istediðine emin misin?\n[1]evet\n[2]hayýr\nne yapmak istersin :");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("bir çölü andýrsa da su bulunmasýnda sýkýntý yaþamadýðýndan þanslýsýn. Derinlerde bir ejderha yuvasýna rastladýn. içine girmek ister misin?\n[1]evet giriyorum\n[2]Hayýr bu kadar eðlence yeter eve gidelim\nne yapmak istersin: ");
								scanf("%d",&Bsec2);
								
								if(Bsec2==1)
								{
									printf("ejderha yuvasýnda deðil ama yumurtalarý burada. ne yapmak ister misin?\n[1]evet gir ve al\n[2]gir ve ejderhayý bekle\n[3]çabucak kaç\nne yapmak istersin: ");
									scanf("%d",Bsec2);
									if(Bsec==1)
									{
										printf("yumurtalarý alýp kaçtýn.(envantere eklenecek ama þimdilik yumurta eklenmediðinden al para)");
										altin=altin+300;
										printf("yumurtanýn fiyatý 300 altin\naltin: %d",altin);
									}
									
									else if(Bsec==2)
									{
										printf("ejdeyhayla mý þavaþcan þen oyyy (daha eklemedik ama kesin yenemezdin:))");
									}
									
									else
									{
										printf("gece geç olmadan eve döndün pek bir þey bulamadýn birkaç tavþan, dað ve toprak.");
									}
								}
								
								else
								{
									printf("gece geç olmadan eve döndün pek bir þey bulamadýn birkaç tavþan, dað ve toprak.");
								}
							}
							else
							{
								printf("gece geç olmadan eve döndün pek bir þey bulamadýn birkaç tavþan, dað ve toprak.");
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
						printf("kumar çadýrlarý kuruluyor daha sonra gelmeniz söylendi\n");
					}
					
					else if(Bsec==3)
					{
						printf("Zelemna kabilesinin köyüne geldin ama senden giriþ belgesi sordular. olmadýðýný görünce seni kovaladýlar. canýný zor kurtardýn\n");
					}
					
					else if(Bsec==4)
					{
						printf("senin içni uçsuz bucaksýz bu bozkýrý keþfetmeye bir grup talip oldu. Senin yerine keþif yapmak için 300 altýn fiyat istediler ve yola çýkmaya hazýrlar.\n");
						//keþif giden kiþi çalmýþsa boþ gözükcek ama talan edilmiþ olcak doluysa tekrar gidilmiþse talan edilmiþ göstercek
						printf("[1]evet 300 altýn veriyorum yola çýkýn(lütfen bir kervan gelmeden diðerini yolamayýn)\n[2]yok ben fakirim\n");
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
							printf("Þifu\'larýn baþý senin reddetmene üzüldü biz canýmýzý ortaya koyuyoruz dedi ve artýk senin için fiyatýn 400 altýna çýktýðýný söyledi.");
						}
						
						else
						{
							printf("zannederim yanlýþ bir tuþa bastýn.");
						}
					}
					
					else
					{
						printf("doðru bir tuþa basmadýn ve gün boþa geçti");
					}
					
				break;
				
				case 11:
					
					while(Lliman != 0){
	
	printf("Limana geldiniz.\nNe yapmak istersiniz?\n");
	printf("Liman:\n1-Liman'da gez.\n2-Gemileri gez.\n3-Göreve git.\n4-Liman'dan çýk\n");
	scanf("%d",&Lsecim1);
	
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
		printf("Yapýlacaklar:\n1-Balýkçýya git.\n2-Kervanlarý gez.\n3-Sandallara bak.\n4-Giyim kuþam yerlerine bak.\n5-Hana git.\n6-Yapýlacaklara geri dön.\n");
		printf("Ne yapmak istersin:");
		scanf("%d",&Lsecim1);
		
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
			printf("Balýkçýya gittin.\nBizim Karakter:Merhabalar kolay gelsin.Balýk piyasasý ne durumda onu öðrenebilir miyim?\n");
			printf("Balýkçý:Size de merhaba teþekkürler.Balik piyasasi þuan iyi durumda deðil.Ayný zamanda balýk getirecek tedarikçilerde azaldý.Denizde artan korsancýlýk yüzünden mallarimiz güvenli bir þekilde limana ulaþmýyor.Umarým bu korsanlar belalarini bulurlar.\n");
			printf("Bizim karakter:Anladým.Peki bu korsanlar denizin her yerinde mi olurlar?\nTüccar:Hayýr ama çoðu yerde onlara rastlamak mümkün.Özellikle ticaret yollari üzerinde.Gerçekten onlarýn acýmasý yok beyim.\n");
			printf("Bizim karakter:Anladým teþekkür ederim balýkçý.\n1-Yapýlýcaklara geri dön.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
			   printf("Geri dönülüyor...");
			   break;	
			}
		}
   }

		else if(Lsecim1 == 2){
   			while(Lliman != 0){
   				
   			printf("Limanda gezerken gözüne yeni gelen kervanlar takildi ve yanlarýna gittin:Merhabalar kolay gelsin.Kervan ticareti hakkinda bilgi almak istiyorum.\nTüccar:Size de merhabalar teþekkürler.Tabi nasil yardimci olabilirim?\n");
			printf("Bizim karakter:Ticaret yollarini eþkiyalarýn çok bastýðýný duydum doðru mu?\nTüccar:Ah efendim ah hiç sormayýn.Sizlere þunu söyleyeyim her kervan ölümü yanlarýnda taþýyorlar.\n");
			printf("Bizim karakter:Peki bu kadar zahmet kazandýðýnýz para için yeterli oluyor mu?\nTüccar:Olmaz mý efendim hehehe.Sen de kervana katýlýp ticaret yapmayý düþünür müsün?\n1-Kervana katil.\n2-Umursama ve yapýlcaklar listesine geri dön.\n");
			scanf("%d",&Lsecim1);
			
			if(Lsecim1 == 1){
				printf("Kervana katildin.Kervan 3'e ayrilacaktýr1-Ýpek Yolu.\n2-Kürk Yolu.\n3-Baharat Yolu.\nHangisini seçmek istersin?\n");
				scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("ipek yolu üzerinde giderken yolda eþkiyalar tarafýndan baskýna uðradýn.\n1-Savaþýn.\n2-Kaç.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Eþkiyalar ile savaþtýnýz ve kaybettiniz.Esir alýndýn.Eþkiyalar seni bir süre sürüklediler ve yol kenarýn attýlar.\n");
						can = can - 10;
						altin = altin - 15;
					    printf("Canýnýz: %d\n",can);
						printf("Altýnýnýz: %d\n",altin);
						printf("Uzun bir çabanýn ardýndan geri döndün.\n");
						printf("Geri dönülüyor...\n");
						break;	
					}
					else{
						printf("Kaçtýn ama kavurucu Arap sýcaðýnýn ortasýnda kaldýn.Yaþamak için yürümen lazým ama yürüdükçe sýcaklýk ve susuzluk artýyor.\n");
						while(LGgun < 10){
							printf("Günler geçiyor ve bitmek bilmeyen yolda sýcaklýk ve susuzluðun verdiði yorgunluktan bayýldýn.\n");
							LGgun ++;
							printf("Yeni gün: %d\n",LGgun);
							printf("Bir müddet sonra gözünü açtýn ama nerede olduðunu bilmiyorsun.Yanýna yüzü kapalý bir adam geldi ve su verdi.Suyu içtikten sonra bira rahatladýn.\n");
							can = can + 5;
							printf("Canýn: %d\n",can);
							printf("Kendine geldikten sonra adama:Neredeyim ben?Siz kimsiniz?\nAdam kendi dilinde birþeyler söyledi ve en ufak birþey anlamadýn.\n");
							printf("Arkadan bir ses geldi:Lut çölü yakýnlarýnda bir yerdeyiz.Senin ne iþin var buralarda?\nBizim karakter:Avrupa'dan bir ticaret kervaný ile yola çýktým ama yolda eþkiyalar tarafýndan saldýrýya uðradýk çoðu kiþi öldü kalanlarda kaçtý onlara ne oldu bilmiyorum ama çölde yürürken susuzluk ve sýaktan bayýlmýþým.\n");
					        printf("Adam:Anladým yabancý.Buralarda dikkatli olman lazým.Söyle bakalým ne yapmak istersin.\nBizim karakter:Efendim öncelikle yardýmlarýnýz için minnettarým eðer olursa evime gitmek istiyorum bu konuda bana yardýmcý olabilir misiniz?");
					        printf("Adam:Pekala yabancý sana fazla olan bir atý ve biraz erzak verebilirim ama bu at uzun yol için dayanaklý deðil.Eve dönerken atýný dinlendirmelisin.\nAta bindin ve yola çýktýn.\n");
					        LGgun = 20 + LAgun;
					        printf("Yeni gün: %d\n",LGgun);
					        printf("Sonunda kendi topraklarýna döndün ama bu yolculuk sana pahalýya patladý.");
					        altin = altin - 50;
					        can = can - 10;
					        printf("Canýnýz: %d\n",can);
					        printf("Altýnýnýz: %d\n",altin);
					        
						}
						  printf("Geri dönüldü...\n");
						  break;
					}
				}
				if(Lsecim1== 2){
					printf("Kürk yolu üzerinden giden kervana katýldýn ve yola çýktýnýz.Amur Nehri yakýnlarýna geldiniz ve tüccarlar ellerindeki hayvan kürklerini satmaya baþladýlar.\n1-Satmalarýna yardým et.\n2-Gezintiye çýk.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Tüccarlara elinden geldiðince yardým ettin ve mallarý sattýnýz.Tüccarlar bu garetn karþýlýðýnda sana giyebilceðin güzel bir hayvan postu hediye ettiler.Ticaret bitti ve kervanla birlikte tekrar geri döndün\n");
						printf("Yeni eþya: Hayvan postu.");
						altin = altin + 20;
						onur = onur + 5;
						exp = exp + 50;
						def = def + 10;
						printf("Altýnýnýz: %d\n",altin);
						printf("Onurunuz: %d\n",onur);
						printf("Tecrübeniz: %d\n",exp);
						printf("Defansýnýz: %d\n",def);	
						printf("Geri dönüldü...\n");
						break;
					}
					else{
						printf("Etrafý gözlemledin ve ticaret bitince geri döndünüz..\n");
						exp = exp + 50;
						printf("Geri dönüldü...\n");
						break;
					}
				}	
				if(Lsecim1 == 3){
					printf("Kervan ile beraber baharat yolu üzerinden yola çýktýnýz.Bir çok yerden geçtiniz ve Arap Yarýmadasý taraflarýna kadar geldiniz.Ama o da ne!!Eþkiyalar üzerinize doðru geliyor.\n1-Savaþ.\n2-Kaç.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Eþkiyalar ile senin önderliðinde savaþtýnýz ufak bir zayiat verseniz de savaþý kazandýnýz.Ve eþkiyalardan bir çok deðerli eþya kazandýnýz.\n");
						altin = altin + 200;
						exp = exp + 20;
						kilic_yetenegi = kilic_yetenegi + 15;
						def = def+ 10;
						printf("Altýnýnýz: %d\n",altin);
						printf("Tecrübeniz: %d\n",exp);
						printf("Kýlýç yeteðeni: %d\n",kilic_yetenegi);
						printf("Defans: %d\n",def);
						printf("Eþkiyalar ile savaþtýktan sonra yoluna devam ettin ve Halep'e ulaþtýnýz.Tüccarlar ile beraber mallarý satmaya baþladýnýz.\n1-Yardým et.\n2-Gezintiye çýk.\n");
						scanf("%d",&Lsecim1);
						
						if(Lsecim1 == 1){
							printf("Tüccarlar ile mallarý sattýnýz ve bunun karþýlýðýnda sen de kazandýn.\n");
							altin = altin + 100;
							exp = exp + 20;
							printf("Yeni eþya:ipek kaftan.\n");
							def = def + 5;
							printf("Altýnýnýz: %d\n",altin);
							printf("Tecrübeniz: %d\n",exp);
							printf("Defansýnýz: %d\n",def);
							printf("Ticaret bitti ve geri döndünüz...\n");
							LGgun = LAgun + 7;
							printf("Yeni gün: %d",LGgun);
							printf("Geri dönülüyor...\n");
							break;
						}
						else{
							printf("Pazarda gezintiye çýktýn ve etrafý gözlemlerken 2-3 þehir soytarýsý önünü kesti.\n1-Karþý koy.\n2-Teslim ol.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Soytarýlarý karþý koydun ve hepsinin hakkýndan geldin.\n");
								kilic_yetenegi = kilic_yetenegi + 10;
								can = can - 5;
								altin = altin + 15;
								printf("Kýlýç yeteneðin: %d",kilic_yetenegi);
								printf("Canýnýz: %d",can);
								printf("Altýnýnýz: %d",altin);
								printf("Pazarda gezintin bitti ve tüccarlar ile beraber geri dönmek için yola koyuldunuz...\n");
								LGgun = LAgun + 7;
								printf("Yeni gün: %d",LGgun);
								printf("Geri dönülüyor...\n");
								break;
							}
							else{
								printf("Soytarýlara teslim oldun ve onurun Araplar arasýnda alay konusu oldu");
								altin = altin - 100;
								onur = onur - 20;
								can = can - 10;
								printf("Altýnýnýz: %d",altin);
								printf("Onurunuz: %d",onur);
								printf("Canýnýz: %d",can);
								printf("Bu utanç verici hadisenin ardýndan tüccarlarýn yanýna döndün ve geri dönmek üzere yola koyuldunuz...\n");
								printf("Geri dönülüyor...\n");
								break;
							}
						}
						printf("Malarý sattýnýz ve tüccarlarile geri döndünüz...");
						LGgun = 20 + LAgun;
						printf("Yeni gün: %d",LGgun);
					}
					else if(Lsecim1 == 2){
						printf("Eþkiyalarýn saldýrýsndan kaçtýn ve kendini zor kurtardýn ama Arap Yarýmadasýnýn kavurucu sýcaklýðýnda susuz ve aç olarak tek baþýna kaldýn.Sýcaklýk ve susuzluk git gide arttý ve dayanamayýp baýldýn.\n");
						printf("Gözünü açtýn ve yanýnda duran suyu içtin ve biraz kendine geldin.Yanýna biri yaklaþtý ve sana:Kendine gelmiþsin yabancý söyle bakalým buralarda iþin ne?\nBizim karakter:Avrupa'dan ticaret için gelen bir kervan ile birlikteydim.Yolda eþkiyalar pusu attý çoðu kiþi öldü ya da kaçtý.Bende kaçtým ama sýcak ve susuzluktan bayýlmýþým.\n");
						printf("Adam:Buralarda dikkatli olmak lazým.Buranýn eþkiya çoktur ve acýmasýzdýr.Bizler buralarýn Bedevileriyiz.Söyle bakalý þimdi ne yapacaksýn.\nBizim karakter:Evime dönmeyi istiyorum efendim.Bu konuda bana yardýmcý olabilir misiniz?\n");
						printf("Bedevi:Hahaha bu acele de eyin nesi yabancý.istersen bizimle biraz kalýp sonra da gidebilirsin.\n1-Kal.\n2-Git.\n");
						scanf("%d",&Lsecim1);
						if(Lsecim1 == 1){
							printf("Bedeviler yanýnda 1 hafta geçirdin ve bir sürü tecrübe kazandýn.Sonrasýnda onlarýn verdiði at ve biraz erzak ile geri döndün.\n");
							LGgun = 7 + LAgun;
							exp = 20 + exp;
							printf("Yeni gün: %d\n",LGgun);
							printf("Tecrüben: %d",exp);
							printf("Geri dönülüyor..\n");
							break;
						}
						
					}
				}
			}
					else{
				printf("Bizim karakter:Hayýr teþekkürler sadece bilgi almak için sormuþtum.\n");
				printf("Geri dönülüyor.\n");
				break;
			}
		 }
	   }
	   if(Lsecim1 == 3){
	   	while(Lliman != 0){
		   	printf("Limanda gezerken gözüne güzel sandallar takýldý.Sandal satýcsýnýn yanýna gittin:\n1-Sandan fiyatlarýný sor.\n2-Sandal ile ne yapabieceðini sor.\n3-Ayrýl.\n");
		   	scanf("%d",&Lsecim1);
		   	if(Lsecim1 == 1){
		   		 	
		   		printf("Bizim karakter:Merhaba kolay gelsin.Sandal fiyatlarý hakkýnda bilgi almaya gelmiþtim de.Fiyatlar nedir?\nSandalcý:Size de merhaba beyim teþekkürler.Büyük olanlar 500 altýn orta olanlar 250 altýn ve küçük olanlar 100 altýn.\n");
		   		while(Lliman != 0){
		   		printf("Bizim karakter:Anladým teþekkürler.\n1-Sandal satýn al.\n2-Ayrýl.\n");
		   		scanf("%d",&Lsecim1);
		   	    
		   	    if(Lsecim1 == 1){
		   	    	while(Lliman != 0){
					   
		   	    	printf("Hangi sandalý almak istersin:\n1-Büyük.\n2-Orta.\n3-Küçük.\n4-Çýk.\n");
		   	    	scanf("%d",&Lsecim1);
		   	    	printf("Altýnýnýz: %d\n",altin);
					if(Lsecim1 == 1){
						
						if(altin > 500){
							printf("Bizim karakter:Bu büyük sandalý almak istiyorum.\nSandalcý:Çok doðru bir seçim efendim tamamdýr.\n");
							altin = altin - 500;
							printf("Altýnýnýz: %d\n",altin);
							printf("Geri dönülüyor..\n");
							break;
						}
						else{
							printf("Altýnýnýz yetersiz.");
							break;
							
						}
					}
					else if(Lsecim1 == 2){
							if(altin > 250){
								printf("Bizim karakter:Bu orta boy sandalý almak istiyorum.\nSandalcý:Çok oðru bir karar efendim tamamdýr.\n");
								altin = altin - 250;
								printf("Altýnýnýz: %d\n",altin);
								break;
							}
							else{
								printf("Altýnýnýz yetersiz.");
								break;
							}
						}
						else if(Lsecim1 == 3){
					
							if(altin > 100){
								printf("Bizim karakter:Bu küçük sandalý istiyorum.\nSandalcý:Çok doðru bir karar efendim tamamdýr.\n");
								altin = altin - 100;
								printf("Altýnýnýz: %d\n",altin);
								break;
							}
							else{
								printf("Altýnýnýz yetersiz.");
								break;
							}
						}
						else if(Lsecim1 == 4){
							printf("Geri dönülüyor...\n");
							break;
						}
				}
					} 
					else{
						printf("Snadalcýya teþekkür ettin ve ayrýldýn");
						printf("Geri dönülüyor...\n");
						break;
					}  
			   }
		}
			   else if(Lsecim1 == 2){
			   	while(Lliman != 0){
				   
			   	printf("Bizim karakter:Söyle bakalým sandalcý.Bu sandallar ile neler yapabilirim?\nSandalcý:Beyim bu sandallar ile balýk tutabilir.Gezintiye çýkabilir ve hatta þehir bile deðiþtirebilirsiniz.Ancak sizleri bir konuda uyarmam lazým çok dikkatli olmanýz lazým efendim zira eþkiyalar giderek çoðalmakta ve bu tedirgin edici.\n");
			   	printf("Bizim karakter:Sen merak etme sandalcý öyle bir durumda görecekleri son þey yüzüm olur.hehehe.Teþekkürler Sandalcý.\n");
			   	printf("Geri dönülüyor...\n");
			   	break;
			   }
		}
			   else if(Lsecim1 == 3){
			   	printf("Geri dönülüyor...\n");
			   	break;
			   }
			}
		}
			   if(Lsecim1 == 4){
			   	printf("Limanda giyim kuþan satan yerlere geldin.\n");
			  
			   	while(Lliman != 0){
			   		printf("Ýçeridekiler:\n1-Kaftan.\n2-Takýlar.\n3-Gömlek.\n4-Çorap.\n5-Ayakkabý.\n6-Çýk.\nNe almak istersin?\n");
			   		scanf("%d",&Lsecim1);
			   	if(Lsecim1 == 1){
			   		while(Lliman != 0){
					   
			   			printf("Bizim karakter:Merhaba kolay gelsin.Bu kaftanlarýn fiyatý ne kadar?\nTüccar:Merhaba efendim hoþ geldnizi.\n1-Siyah olanlar 50 altin.\n2-Açýk renkli olanlar 40 altin.\n3-Diðerleri 15.\n4-Çýk.\n");
			   			scanf("%d",&Lsecim1);
			   			
			   		if(Lsecim1 == 1){
			   			if(altin > 50){
			   				printf("Bizim karakter:Pekala tüccar.Bana þu siyah olanlardan bir tane ver bakalým.\n");
			   				printf("Yeni eþya: Siyah kaftan.\n");
			   				altin = altin -50;
			   				def = def + 10;
			   				cekicilik = cekicilik + 10;
			   				printf("Altýnýnýz: %d\n",altin);
			   				printf("Defansýnýz: %d\n",def);
			   				printf("Çekicilik: %d\n",cekicilik);
			   			
					   }
					   else{
					   		printf("Paranýz yetersiz.\n");
					   	break;
					   }
					}
					   else if(Lsecim1 == 2){
					   	if(altin > 40){
					   		printf("Bizim karakter:Pekala tüccar efendi.Þu açýk renkli olanlardan 1 tane almak istiyorum.\n");
					   		altin = altin - 40;
					  	 	def = def + 5;
					   		cekicilik = cekicilik + 5;
					   		printf("Altýnýnýz: %d\n",altin);
			   				printf("Defansýnýz: %d\n",def);
			   				printf("Çekicilik: %d\n",cekicilik);
			   			
						}
						else{
							printf("Paranýz yetersiz.\n");
						break;
						}
					  }
					   else if(Lsecim1 == 3) {
					   		if(altin > 15){
					   			printf("Bizim karakter:Pekala tüccar.Þunlardan bana bir tane ver bakalým.\n");
					   			altin = altin - 15;
					   			def = def + 3;
					   			cekicilik = cekicilik + 3;
					   			printf("Altýnýnýz: %d\n",altin);
			   					printf("Defansýnýz: %d\n",def);
			   					printf("Çekicilik: %d\n",cekicilik);
			   				
				}
				else{
					printf("Paranýz yetersiz.\n");
				break;
				}
			}
			else if(Lsecim1 == 4){
				printf("Geri dönülüyor...\n");
			break;
			}
		}
	}
					else if(Lsecim1 == 2){
						printf("Bizim karakter:Merhaba tüccar.Elinde taký olarak ne var söyle bakalým.\n");
					
						while(Lliman != 0){
							printf("Tüccar:Size de merhabalar beyim hoþ geldiniz.Tabi ki.\n1-Þu yüzükler 10 altin.\n2-Kolyeler de 10 atlin.\n3-Bileklikler 15 altin.\n4-Þans týlsýmlarý 20 altin.\n5-Çýk.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
							if(altin > 10){
								printf("Bizim karakter:Pekala tüccar efendi.Bana þu yüzüklerden ver bakalým 1 tane.\n");
								printf("Yeni eþya.Bakýr Yüzük.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 5;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranýz yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 2){
							if(altin > 10){
								printf("Bizim karakter:Pekala tüccar efendi.Þu kolyeden alayým.\n");
								printf("Yeni eþya:Gümüþ Kolye.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 10;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranýz yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 3){
							if(altin > 15){
								printf("Bizim karakter:O zaman þu bilekliklerden 1 tane alayým tüccar.\n");
								printf("Yeni eþya:Bielklik.\n");
								altin = altin - 15;
								cekicilik = cekicilik + 10;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranýz yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 4){
							printf("Þu þans týlsýmlarý ne tür þeyler içerir tüccar söyle bakalým.\n");
							
							while(Lliman != 0){
								if(altin > 20){
									printf("Tüccar:Tabi efendim.3 çeþit var.\n1-Kaplan Gözü Týlsýmý.\n2-Kuvars Týlsýmý.\n3-Kehribar Týlsýmý.\n4-Çýk.\nHnagisini alamk istersniz beyim.\n");
									scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Pekala tüccar efendi söyle bakalým bu Kaplan Gözü Týlsýmý ne iþe yarar.\nTüccar:Tabi efendim.Bu taþ sizin diðer insanlara olan baðlýlýðýnýzý azaltýr beyim.Ancak bu durum ikili iliþkilerinizi etkiliyebilir.\n1-Al.\n2-Alma.\n");
								scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Anladým tüccar efendi.Ver bakayým bir tane.\n");
								printf("Yeni eþya:Kaplan Gözü Týlsýmý.\n");
								altin = altin - 20;
								cekicilik = cekicilik - 5;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
									
						}
							else{
								printf("Paranýz yetersiz.\n");
								break;
							}
						}
								else{
									printf("Anladým tüccar efendi kalsýn.\n");
								}
						}
						else if(Lsecim1 == 2){
							printf("Bizim karakter:Pekala tüccar efendi bana kuars týlsýmýný anlat bakalým.\nTüccar:Heheh kuvars demek istediniz herhalde efendim.Bu týlsým duygusal dengeliyicidir efendim.Beyin fonksiyonlarýný düzenlediðine inanýlýr.\n1-Al.\n2-Alma.\n");
							scanf("%d",&Lsecim1);
								if(Lsecim1 == 1){
									if(altin > 20){
										printf("Bizim karakter:Anladým tüccar ver bakalým.\n");
										altin = altin - 20;
										cekicilik = cekicilik + 5;
										bilgelik = bilgelik + 10;
										printf("Altýnýnýz: %d\n",altin);
										printf("Çekicilik: %d\n",cekicilik);
						      			printf("Bilgeliðiniz: %d",bilgelik);	
						}
						else{
							printf("Paranýz yetersiz.\n");
						break;
						}
							}
							else{
								printf("Bizim karakter:Anladým tüccar efendi kalsýn.\n");
							break;
						}
				}
					else if(Lsecim1 == 3){
						printf("Bizim karakter:Bana kehribar týlsýmýndan bahset tüccar.\nTüccar:Tabi efendim.Bu týlsým kötü talihi götürüp þans getirir.Týlsýmýn ayný zamanda zehirlenmeyi önlediðine inanýlýr.Ayný zamanda cinsel açýdan güç verir efendim hehe.\n1-Al.\n2-Alma.\n");
						scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 20){
									printf("Biim karakter:Hehehe pekala tüccar efendi ver bakalým kehribar týlsýmýndan bir tane.\n");
									printf("Yeni eþya:Kehribar týlsýmý.\n");
									altin = altin- 20;
									cekicilik = cekicilik + 10;
									bilgelik = bilgelik + 10;
									printf("Altýnýnýz: %d\n",altin);
									printf("Çekicilik: %d\n",cekicilik);
									printf("Bilgeliðiniz: %d",bilgelik);
					}
					else{
						printf("Paranýz yetersiz.\n");
					break;
					}
				}
						else{
							printf("Bizim karakter:hehe.Kalsýn tüccar efendi teþekkürler.Dedin ve çýktýn.\n");
						break;
						}
					}
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Kalsýn tüccar.\nGeri dönülüyor...\n");
					break;
					}
				}
			}
			else if(Lsecim1 == 5){
				printf("Geri dönülüyor...\n");
			break;
			}
			}
		}
					else if(Lsecim1 == 3){
						printf("Bizim karakter:Merhaba tüccar efendi kolay gelsin.Gömlek bakýyorum da sendekiler nasýl?\n");
							while(Lliman != 0){
								printf("TÜccar:Hoþ geldiniz beyim buyrun.Yeni ürünlerim var.\n1-Þu þekilli olanlar 25 altin.\n2-Düz olanlar 35 altin.\n3-Çýk.\nHangisini almak istersiniz?\n");
								scanf("%d",&Lsecim1);
									if(Lsecim1 == 1){
										if(altin > 25){
											printf("Bizim karakter:Þu þekilli olanlarýndan alayým bir tane tüccar.\n");
											printf("Yeni eþya:Þekilli gömlek.\n");
											altin = altin - 25;
											cekicilik = cekicilik + 10;
											printf("Altýnýnýz: %d\n",altin);
											printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paranýz yetersiz.\n");
					}
				}
						else{
							if(altin > 35){
								printf("Bizim karakter:Bana þu düz olanlardan ver tüccar efendi.\n");
								printf("Yeni eþya:Düz renk gömlek.\n");
								altin = altin - 35;
								cekicilik = cekicilik + 15;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paranýz yetersiz.\n");
					}
				}
			}
		}
		
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Merhaba tüccar efendi.Çorap almak istiyorum.\n");
						
						while(Lliman != 0){
							printf("Tüccar:Hoþ geldinizi beyim buyurun.Elimde çok güzel çoraplar var.\n1-Þu ince olanlar 15.\n2-Kalýn olanlar 20 altin beyim.\n3-Çýk.\nHangisini almak istersiniz?\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 15){
									printf("Bizim karakter:Þu ince olanlardan alayým bir tane tüccar efendi.\n");
									printf("Yeni eþya:Ýnce çorap.\n");
									altin = altin - 15;
									printf("Altýnýnýz: %d\n",altin);
					}
					else{
						printf("Paranýz yetersiz.\n");
					break;
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 20){
								printf("Bizim karakter:Þu kalýn olanlardan alayým bir tane tüccar efendi.\n");
								printf("Yeni eþya:Kalýn çorap.\n");
								altin = altin - 20;
								printf("Altýnýnýz: %d\n",altin);
					}
					else{
						printf("Paranýz yetersiz.\n");
					break;
					}
				}
				else if(Lsecim1 == 3){
					printf("Geri dönülüyor...\n");
				break;
				}
			}
		}
					if(Lsecim1 == 5){
						printf("Bizim karakter:Merhaba tüccar efendi.Ayakkabý almak istiyorum.\n");
					
						while(Lliman != 0){
							printf("Tüccar:Hoþ geldiniz beyim buyurun.Elimde çok güzel ayakkabýlar var.\n1-Þu sandaletler 40 altin.\n2-Deri ayakkabýlar 50 altin.\n3-Asker ayakkabýsý da 60 altýn beyim.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 40){
									printf("Bizim karakter:Pekala tüccar efendi bana þu sandaletlerden ver.\n");
									printf("Yeni eþya:Sandalet.\n");
									altin = altin - 40;
									cekicilik = cekicilik + 5;
									printf("Altýnýnýz: %d\n",altin);
									printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranýz yetersiz.\n");
						
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 50){
								printf("Bizim karakter:Pekala tüccar efendi bana þu deri ayakkabýlardan ver.\n");
								printf("Yeni eþya:Deri ayakkabý.\n");
								altin = altin - 50;
								cekicilik = cekicilik + 10;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranýz yetersiz.\n");
					
					}
				}
						else{
							if(altin > 60){
								printf("Bizim karakter:Tamam tüccar efendi.Bana þu asker ayakkabýsýndan bir tane ver bakayým.\n");
								printf("Yeni eþya:Asker Ayakkabýsý.\n");
								altin = altin - 60;
								cekicilik = cekicilik + 15;
								printf("Altýnýnýz: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranýz yetersiz.\n");
					break;
					}
				}
			}
		}
			else if(Lsecim1 == 6){
				printf("Geri dönülüyor...\n");
			break;
			}
	   }		
   }    
	if(Lsecim1 == 5){
		printf("Hana doðru giderken yolda hýrsýzlar cebini çarptý ve peþlerine düþtün.Uzun bir kovalamacadan sonra hýrsýzlardan birini yakaladýn ama hýrsýz diþli çýktý ve ufak bir kavga tutuþtunuz.\n");
   		printf("Adam sana saldýrmaya hazýrlanýyor:\n1-Saða gitmek için D'ye bas.\n2-Sola gitmek için A'ya bas.\n3-Eðilmek için C'ye bas.\n4-Kendini geri çekmek için S'ye bas.\n");
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
				printf("Düþman saldýrýsndan kaçtýn.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldýr.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düþmana vurdun.\n");
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
				printf("Düþman saldýrýsndan kaçtýn.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldýr.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düþmana vurdun.\n");
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
				printf("Düþman saldýrýsndan kaçtýn.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldýr.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düþmana vurdun.\n");
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
				printf("Düþman saldýrýsndan kaçtýn.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldýr.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
				if(Lsira3 == 1){
					Lsira1++;
					printf("Düþmana vurdun.\n");
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
		printf("Tebrikler kazandýnýz.\n");
		altin = altin + 100;
		onur = onur + 10;
		printf("Altýnýnýz: %d",altin);
		printf("Onurunuz: %d",onur);
	}
	else if(Lsira5 == 0){
		printf("Kaybettiniz.\n");
		altin = altin - 50;
		onur = onur - 5;
		printf("Altýnýnýz: %d\n",altin);
		printf("Onurunuz: %d\n",onur);
		
	}	
	printf("Hana girdin.\n");
	
	while(Lliman != 0){
				   
		printf("Ne yapmak istersin:\n1-Birþeyler iç.\n2-Hancý ile konuþ.\n3-Karnýný doyur.\n4-Dinlen.\n5-Çýk.\n");
		scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Handa birþeyler içtin ve kendine geldin bu seni çok rahatlattý.\n");
				can = can + 5;
				altin = altin - 5;
				printf("Canýnýz: %d\n",can);
				printf("Altýnýnýz: %d\n",altin);
		}
				   else if(Lsecim1 == 2){
				   	printf("Hancýnýn yanýna giderek:Merhaba hancý kolay gelsin.Söyle bakalým buraya ne tür insanlar gelir.\nHancý:Saolasýn beyim.Burasý bir han beyim her yerden insan gelir biz paramýza bakarýz.Eðer dinlenmek istersen uygun yerimiz var.Yalnýz burada kalýrken dikkat etmelisin beyim her yerden insan geldiði için neden geldiklerini de bilemeyiz!\n");
				   	printf("Pekala hancý teþekkürler.\nAyrýldýn.\n");
				   }
				   else if(Lsecim1 == 3){
				   	printf("Yemek yedin ve karýnýný doyurdun bu seni çok rahatlattý.\n");
				   	can = can + 10;
				   	altin = altin - 15;
				   	printf("Canýnýz: %d\n",can);
				   	printf("Altýnýnýz: %d\n",altin);
				   }
				   else if(Lsecim1 == 4){
				   	printf("Dinlenmek için han da kaldýn ve akþam handa müzik eþliðinde vakit geçirdikten sonra güzel bir uyku çektin...Ama o da ne!!Paran yok!\n");
				   	LGgun = 1 + LAgun;
				   	printf("Yeni gün: %d\n",LGgun);
				   	printf("Sinirli bir þekilde hancýnýn yanýna gittin:Hey sen söyle bakalým eþyalarým nerede!\nHancý:Ben sizi dikkatli olmanýz konusunda uyardým beyim söyleyin bakalým ne oldu.\nBizim karakter:Uyandým ve bazý deðerli eþyalarýmýn olmadýðýný gördüm.\nHancý:Kusura bakmayýn beyim yapabileceðim birþey yok bir dahaki sefere daha dikkatli olun.\n");
					   altin = altin - 100;
					   exp = exp + 10;
					   printf("Altýnýnýz: %d\n",altin);
					   printf("Tecrübeniz: %d",exp);				   	
				   }
				   else if(Lsecim1 == 5){
				   	printf("Geri dönülüyor...\n");
				   	break;
				   }
			   }
			}
			else if(Lsecim1 == 6){
				printf("Geri dönülüyor...\n");
			break;
			}
	}
}
				else if(Lsecim1 == 2){
	  				while(Lliman != 0){
					  
					printf("Limanda gemilere bakarak yürürken bir gemici adamýn yanýna geldin:\n1-Gemi fiyatlarýný sor.\n2-Ayrýl.\n");
					scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("Bizim karakter:Kolay gelsin gemici.Gemilerin fiyatýný öðrnmek istiyorum.\n");
				
					printf("Gemici söyle bakalým satýn almak ister misin?\n1-Evet.\n2-Hayýr.\n");
					scanf("%d",&Lsecim1);
						while(Lliman != 0){
							printf("Gemici:Peki.Gemiler en pahalýdan en ucuza doðru gider.\nÞu en soldaki en pahalasý adý KISMET'tir.Çok güçlü bir gemidir.Ayný zamanda savaþ gemisidir.Fiyatý 10.000 altýndýr.\nDiðer gemi yük gemisidir lakin güçlüdür.Heniz bir adý yok.Fiyatý 7.000 altýndýr.\nEn küçük olanýn adý Serçedir hýzlýdýr lakin güçsüzdür savunmasýzdýr.Fiyatý 4.000 altýndýr.\n");
				if(Lsecim1 == 1){
					printf("Gemici:Pekala hangisini almak istersin:\n1-Kýsmet.\n2-Yük gemisi.\n3-Serçe.\n4-Ayrýl.\nNe yapmak istiyorsun.\n");
					scanf("%d",&Lsayac);
					
				
				if(Lsayac == 1){
					printf("Gemici:Pekala beyim.Kýsmet artýk sizindir.Ýstediðiniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 10.000;
					printf("Altýnýnýz: %d\n",altin);
					
				}
				else{
					printf("Paran yetersiz!\n\n");
					
				
				}
				if(Lsayac == 2){
					printf("Gemici:Pekala beyim.Bu yük gemisi sizindir.Ýstediðinizi zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 7.000;
					printf("Altýnýnýz: %d\n",altin);
				
				}
				else{
					printf("Paranýz yetersiz!\n\n");
				
				}
				if(Lsayac == 3){
					printf("Gemici:Pekala beyim.Serçe artýk sizindir.Ýstediðiniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 4.000;
					printf("Altýnýnýz: %d\n",altin);
				
				}
				else{
					printf("Paran yetersiz!\n\n");
				
				}
				if(Lsayac == 4){
					printf("Bizim karakter:Ya da teþekkürler gemici.\n");
				
				}
			}
			else if(Lsecim1 == 2){
				printf("Geri dönülüyor...\n");
			break;
			}
		
		}
	}
		else if(Lsecim1 == 2){
			printf("Geri dönülüyor...\n");
		break;
		}
      } 
     }
      else if(Lsecim1 == 3){
      	srand(time(NULL));
      	
      	Liht3 = rand() % 5;
		printf("Görev:\nBalýk tutmak.\n");
	
		printf("Göreve gitmeye hazýr mýsn?\n1-Evet.\n2-Hayýr.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Bilgilendirme:\nSenden istenilen sayýyý doðru girersen ve eðer 10 denemeden önce bilirsen balýðý kapaersýn.Her balýðý tutmak için 3 olta atma hakkýn var.Eðer balýðý tutarsan hakkýn ayný kalýr.\nGünlük 10 tane balýk tutma hakkýn var.\nHadi baþlayalým.\n");
				printf("Sandala atladýn ve denize balýk tutmak için açýldýn.\nTutabileceðin balýklar:\n1-Çipura.\n2-Alabalýk.\n3-Palamut.\n4-Küçük balýk.\nBakalým ne yakalyacaksýn.\n");
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
					printf("Sayý gir:");
					scanf("%d",&Lsans7);
					if(Lsans7 < Lsayac3){
						printf("Sayýyý büyültün.\n");
					}
					else if(Lsans7 > Lsayac3){
						printf("Sayýyý küçültün.\n");
					}
					Ldeneme4++;
					
					if(Lsayac3 == Lsans7){
						Lsayac4++;
						printf("Tebrikler doðru.Hakkýnýz ayný kaldý\n");
						Lsans7 = Lsayac3;
						Lhak4 = 0;
						Ldeneme4 = 10;
						Lb = 1; 
						printf("Kalan hakkýnýz: %d\n",Lhak);
						printf("Eldeki balýk sayýsý: %d\n",Lsayac4);
					}
					else if(Lhak4 > 1 && Ldeneme4 == 10){
						printf("Kaybettiniz.Hakkýnýz azaldý.\n");
						Lhak4--;
						printf("Kalan hakkýnýz: %d\n\n",Lhak);
						
					}
					else if(Lhak4 == 1 && Ldeneme4 == 10){
						printf("Tüm haklarýnýz bitti.Kaybettiniz.\n\n");
						Lb = 0;
						Lj++;
						Lhak4--;
					}
			    }
			}	
				
			if(Lb == 1){
				printf("%d kadar balýðýnýzý sattýk %d altýn kazandýnýz:\n",Lsayac4,(Lsayac4 * 5));
				altin = altin + (Lsayac4 * 5);
				printf("Altýnýnýz: %d\n",altin);
				Lj++;
			/*	if(Lbaliktutma == 0){ BUNLAR ÞUANLIK BÖLYE ÝTEMLER ÝLE BERABER DÜCELTÝLECEK
					printf("\nYeni balýk: Çipura.\n");
				}
				else if(Lbaliktutma == 1){
					printf("\nYeni balýk: Alabalýk.\n");
				}
				else if(Lbaliktutma == 2){
					printf("\nYeni balýk: Palamut.\n");
				}
				else if(Lbaliktutma == 3){
					printf("\nYeni balýk: Küçük Balýk.\n");
				}	
			*/}
			
			printf("Balýk tutmaya devam mý?\n1-Devam.\n2-Geri dön.\n");
			scanf("%d",&Lsecim1);
			
	 	if(Lsecim1 == 2){
			printf("Geri dönülüyor...\n");
	 	break;	
	 	}
    } 
}

        else if(Lsecim1 == 2){
      		printf("O zaman limana geri dönüyoruz.\n");
      		printf("Geri dönülüyor...\n");
      		break;
		  }
	  } 
	  else if(Lsecim1 == 4){
	  	printf("Limana br göz attýn ve geri çýkýyorsun.\n");
	  	printf("Geri dönülüyor...\n");
	  	break;
	  }
    }
					
				
				break;	
					
				case 12:
					
					while(Esay!=0)
					{
		
						printf("hangi alandaki eþyalarýnýza bakmak istiyorsunuz?\n");
						printf("[1] savaþ aletleri \n[2] zýrhlar\n[3] iksirler ve petler\n[4]ziynet eþyalarý\n");
						printf("seçiminiz: ");
						scanf("%d",&Esay1);
		
						if(Esay1==1)
						{
							printf("[1]Kýsa Kýlýç(Hasarý 20 arttýrýr): %d              [2]Uzun Kýlýç(Hasarý 30 arttýrýr): %d      [3]Tek Elli Aðýr Kýlýç(Hasarý 40 arttýrýr) : %d\n",kil[0],kil[1],kil[2]);
							printf("[4]Çift Elli Aðýr Kýlýç(Hasarý 50 arttýrýr): %d    [5]Ekmek Býçaðý(Hasarý 10 arttýrýr): %d    [6]Hançer(Hasarý 15 arttýrýr): %d\n",kil[3],bic[0],bic[1]);
							printf("[1]Kýsa Balta(Hasarý 30 arttýrýr): %d              [2]Uzun Balta(Hasarý 50 arttýrýr): %d      [3]Tek Elli Aðýr Balta(Hasarý 70 arttýrýr): %d\n",bal[0],bal[1],bal[2]);
							printf("[4]Çift Elli Aðýr Balta(Hasarý 90 arttýrýr): %d \n",bal[3]);
							printf("[1]Uzun Mýzrak(Hasarý 40 arttýrýr): %d             [2]Üç Baþlý Mýzrak(Hasarý 60 arttýrýr): %d \n",miz[0],miz[1]);
							printf("[3]Uzun Kargý(Hasarý 80 arttýrýr): %d              [4]Baltalý Kargý(Hasarý 100 arttýrýr): %d \n",kar[0],kar[1]);
							printf("[1]Kýsa Yay(Okun hasarýný 20 arttýrýr): %d         [2]Uzun Yay(Okun hasarýný 30 arttýrýr): %d [3]Crossbow(Okun hasarýný 50 arttýrýr): %d \n",yay[0],yay[1],yay[2]);
							printf("[4]Tahta Ok(Okun hasarýný 2 arttýrýr: %d           [5]Taþ Ok(Okun hasarýný 4 arttýrýr): %d \n",ok[0],ok[1]);
							printf("[1]Klasik Yuvarlak Kalkan(Defansý 20 arttýrýr): %d [2]Klasik Uzun Kalkan(Defansý 30 arttýrýr): %d \n",kalkan[0],kalkan[1]);
							printf("[3]Büyük Yuvarlak Kalkan(Defansý 50 arttýrýr): %d  [4]Dayanýklý Yuvarlak Kalkan(Defansý 70 arttýrýr): %d \n",kalkan[2],kalkan[3]);
							system("pause");
						}
		
						else if(Esay1==2)
						{
							printf("[1]Eskimiþ Miðfer(Defansý 10 arttýrýr): %d         [2]Klasik Miðfer(Defansý 15 arttýrýr): %d \n",mig[0],mig[1]);
							printf("[3]Kaliteli Miðfer(Defansý 20 arttýrýr): %d        [4]Dayanýklý Miðfer(Defansý 25 arttýrýr): %d \n",mig[2],mig[3]);
							printf("[1]Hasarlý Gövde Zýrhý(Defansý 30 arttýrýr): %d    [2]Klasik Gövde Zýrhý(Defansý 40 arttýrýr): %d \n",gov[0],gov[1]);
							printf("[3]Kaliteli Gövde Zýrhý(Defansý 50 arttýrýr): %d   [4]Dayanýklý Gövde Zýrhý(Defansý 60 arttýrýr): %d \n",gov[2],gov[3]);
							printf("[1]Parçalanmýþ Bacak Zýrhý(Defansý 5 arttýrýr): %d [2]Klasik Bacak Zýrhý(Defansý 10 arttýrýr): %d\n",bac[0],bac[1]);
							printf("[3]Kaliteli Bacak Zýrhý(Defansý 15 arttýrýr): %d   [4]Dayanýklý Bacak Zýrhý(Defansý 20 arttýrýr): %d \n",bac[2],bac[3]);
							printf("[1]Paslanmýþ Kol Zýrhý(Defansý 5 arttýrýr): %d     [2]Klasik Kol Zýrhý(Defansý 10 arttýrýr): %d \n",kol[0],kol[1]);
							printf("[3]Kaliteli Kol Zýrhý(Defansý 15 arttýrýr): %d     [4]Saðlam Kol Zýrhý(Defansý 20 arttýrýr): %d \n",kol[2],kol[3]);
							printf("[1]Yün Eldiven(Defansý 5 arttýrýr): %d             [2]Deri Eldiven(Defansý 10 arttýrýr): %d \n",eld[0],eld[1]);
							printf("[3]Kaliteli Eldiven(Defansý 15 arttýrýr): %d       [4]Aðýr Eldiven(Defansý 20 arttýrýr): %d \n",eld[2],eld[3]);
							printf("[1]Yün Bot(Defansý 10 arttýrýr): %d                [2]Klasik Bot(Defansý 15 arttýrýr): %d \n",bot[0],bot[1]);
							printf("[3]Saðlam Bot(Defansý 20 arttýrýr): %d             [4]Dayanýklý Bot(Defansý 25 arttýrýr): %d \n",bot[2],bot[3]);
							system("pause");
						}
		
						else if(Esay1==3)
						{
							printf("[1]Kuvvet Ýksiri(Savaþ sýrasýnda +x hasar artýþý)              [2]Saðlýk Ýksiri(Savaþ sýrasýnda +x saðlýk artýþý)(eklenmedi)\n");
							printf("[3]Dayanýklýlýk Ýksiri(Savaþ sýrasýnda +x dayanýklýlýk artýþý) [4]Þans Ýksiri(eklenmedi)\n");
							printf("[1]Kedi(Zihin yeteneði 50 artar): %d                           [2]Köpek(Tahmin yeteneði 50 artar): %d \n",pet[0],pet[1]);
							system("pause");
						}
		
						else if(Esay1==4)
						{
							printf("[1]Bronz Kolye: %d             [2]Altýn Kolye: %d           [3]Elmas Kolye: %d \n",kolye[0],kolye[1],kolye[2]);
							printf("[1]Bronz Bileklik: %d          [2]Altýn Bileklik: %d        [3]Elmas Bileklik: %d \n",bilek[0],bilek[1],bilek[2]);
							printf("[1]Bronz Yüzük: %d             [2]Altýn Yüzük: %d           [3]Elmas Yüzük: %d \n",yuzuk[0],yuzuk[1],yuzuk[2]);	
							printf("[1]Bronz Küpe: %d              [2]Altýn Küpe: %d            [3]Elmas Küpe: %d \n",kupe[0],kupe[1],kupe[2]);
							system("pause");
						}		
		
						printf("[1]çýkmak istiyorum \n[2]bakmaya devam etmek istiyorum \nenvanterden çýkmak ister misiniz: ");
						scanf("%d",&Esay2);
						
						if(Esay2==1)
						{
							Esay--;
						}
					}
					
				break;
				
				case 13:
					printf("Nizam Sövalyeleri Kalesine girdin. Ýçeride bir þövalye seni karþýlýyor\n");
					printf("Nizam Þövalyesi giriþ biletini görebilir miyim?  ");				
					scanf("%d",&Kbilet);
					if(Kbilet==1){
						printf("Nizam Þövalyeleri Kalesine hoþgeldin! Kalenin içinde istediðin gibi gezebilirsin ama eþyalara fazla dokunmamaya çalýþ.\n");
						Ksay=1;
						while(Ksay!=0){
						printf("Ne yapmak istersin?\n");
						printf("[1]Etrafta dolaþ [2]Kumandanýn ofisine git [3]Kalenin deposuna git [4]siuuuuuu  ");
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
							printf("\nKalenin deposuna geldin ve birsürü deperli eþya ve silah olduðunu gördün.\n");
							printf("Ne yapacaksýn?\n");
							printf("[1]Deðerli eþyalarý çal(Yakalanma riski yüksek)\n[2]Silahlarý çal(Yakalanma riski yüksek)\n[3]Herþeyi çal(Yakalanma riski çok yüksek)\n[4]Hiçbirþeye ellemeden depodan ayrýl  ");
							scanf("%d",&Kdepo);
							if(Kdepo==1){
								
							}
							else if(Kdepo==2){
								
							}
							else if(Kdepo==3){
								
							}
							else if(Kdepo==4){
								printf("Hiçbir deðerli eþya ve silaha dokunmadýn ve depodan ayrýldýn.\n");
								
							}
						}
						else if(Ksecim==4){
							Ksay=0;
						}
			}
					}
					else{
						printf("Þövalye sana siktir çekti ve seni kaleden kovdu.");
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
				printf("\n\n-------Seviye Atladýnýz!!-------");
				yetenekpuani();
				}
			}
			/*if(xp>=10 && lvl==0){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}
			if(xp>=20 && lvl==1){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}
			if(xp>=45 && lvl==2){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}
			if(xp>=100 && lvl==3){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}
			if(xp>=300 && lvl==4){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}
			if(xp>=800 && lvl==5){ 
			lvl++;
			printf("\n\n-------Seviye Atladýnýz!!-------");
			yetenekpuani();
			}*/
			
			system("pause");
			system("cls");
			
			if((((hiz/100)-Igun)>1)&&can>0)
			{
			printf("\n\nÇok hýzlýsýn gün bitmeden bir iþ daha yapabilirsin\n\n");
			}
			Igun++;
		}
			int oyunsayac=0; //SORUN OLURSA ÝNTÝ SÝL
			intyilanyumurtasialmahakki=0;
			printf("GÜN BÝTTÝ\n");
            gun +=1;
			
		
		}
	}
	else if(sec=='n')
	{
		printf("Keþke bir þans verseydin :'(");
	}
	else
	{
		printf("ne diyorsun be");
	}
	
	
	
	return 0;
}
