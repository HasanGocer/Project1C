#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>  

//int main satırı:845

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
	printf("+4 Hak Kazandın!!\n");
	printf("İPUCU: Aradığın sayı %d ile %d arasında...\n",tahmin-10,tahmin+10);
	while(hak>0)
	{
		hak--;
		printf("Kalan hakkın: %d\n",hak);
		if(hak==0)
		{
			printf("Kaybettin!!\n");
			altin-=50;
			printf("Kalan altın: %d\n",altin);
			break;
		}
		printf("Bir sayı tahmin et: ");
		scanf("%d",&tahmin);
		if(sanssayi==tahmin)
		{
			printf("Kazandın!!\n");
			printf("Bir tane indirim hakkın var!!\n(Fiyatı yarısını hesapla)\n");
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
	printf("HATIRLATMA!!\nEğer indirim oyundan gelen bir indirim hakkın varsa onu pazarlıkta kullanamazsın!\n");
	while(fonkdongu!=0)
	{
		printf("[1]Pazarlık yap\n[2]Devam et\n");
		scanf("%d",&pazarliksecim);
		if(pazarliksecim==1)
		{
			srand(time(NULL)); 
			sanspazar=rand()%100;
			printf("sans = %d\n",sanspazar);
			if(karizma>=0 && karizma<10){
			 
				if(sanspazar>=0 && sanspazar<60)
				{
					printf("İndirim yok\n");		
					break;			
				}
				else if(sanspazar>=60 && sanspazar<70)
				{
					printf("Yüzde 10 indirim kazandın!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=70 && sanspazar<80)
				{
					printf("Yüzde 25 indirim kazandın!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=80 && sanspazar<90)
				{
					printf("Yüzde 40 indirim kazandın!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=90 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandın!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=10 && karizma<30)
			{ 
				if(sanspazar>=0 && sanspazar<50)
				{
					printf("İndirim yok\n");
					break;
				}
				else if(sanspazar>=50 && sanspazar<60)
				{
					printf("Yüzde 10 indirim kazandın!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=60 && sanspazar<75)
				{
					printf("Yüzde 25 indirim kazandın!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=75 && sanspazar<85)
				{
					printf("Yüzde 40 indirim kazandın!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=85 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandın!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=30 && karizma<50)
			{ 
				if(sanspazar>=0 && sanspazar<40)
				{
					printf("İndirim yok\n");
					break;
				}
				else if(sanspazar>=40 && sanspazar<50)
				{
					printf("Yüzde 10 indirim kazandın!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=50 && sanspazar<65)
				{
					printf("Yüzde 25 indirim kazandın!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=65 && sanspazar<80)
				{
					printf("Yüzde 40 indirim kazandın!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=80 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandın!\n");
					pazarlik=50;
					break;
				}
			}
			else if(karizma>=50)
			{ 
				if(sanspazar>=0 && sanspazar<30)
				{
					printf("İndirim yok\n");
					break;
				}
				else if(sanspazar>=30 && sanspazar<40)
				{
					printf("Yüzde 10 indirim kazandın!\n");
					pazarlik=10;
					break;
				}
				else if(sanspazar>=40 && sanspazar<55)
				{
					printf("Yüzde 25 indirim kazandın!\n");
					pazarlik=25;
					break;
				}
				else if(sanspazar>=55 && sanspazar<75)
				{
					printf("Yüzde 40 indirim kazandın!\n");
					pazarlik=40;
					break;
				}
				else if(sanspazar>=75 && sanspazar<100)
				{
					printf("Yüzde 50 indirim kazandın!\n");
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
				printf("%d karşılığında satın aldın\n",itemfiyat/2);
				item++;	//envanterdeki bu item sayısını arttırır
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli altının yok!\n");
			}
		}
		else
		{
			printf("Kaç tane alacaksın? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi)
			{
				printf("%d karşılığında satın aldın\n",itemfiyat*almasayi);
				item+=almasayi; //envanterdeki bu item sayısını arttırır
				altin-=itemfiyat*almasayi;
			}
			else
			{
				printf("Yeterli altının yok!\n");
			}
		}	
	}
	
	else
	{
		if(indirim==1)
		{
			if(altin>=itemfiyat/2)
			{
				printf("%d karşılığında satın aldın\n",itemfiyat/2);
				item++;	//envanterdeki bu item sayısını arttırır
				altin-=itemfiyat/2;
				indirim=0;
			}
			else
			{
				printf("Yeterli altının yok!\n");
			}
		}
		else
		{
			printf("Ürünün yeni fiyatı: %d\n",itemfiyat*(100-pazarlik)/100);
			printf("Kaç tane alacaksın? ");
			scanf("%d",&almasayi);
			if(altin>=itemfiyat*almasayi*(100-pazarlik)/100)
			{
				printf("%d karşılığında satın aldın\n",itemfiyat*almasayi*(100-pazarlik)/100);
				item+=almasayi; //envanterdeki bu item sayısını arttırır
				altin-=itemfiyat*almasayi*(100-pazarlik)/100;
			}
			else
			{
				printf("Yeterli altının yok!\n");
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
	printf("Satış fiyatı: %d\n",itemfiyat/2);
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
			printf("Altının: %d\n",altin);
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
	
printf("rakibin tahmini saldırı hasarı :%d\nrakibin tahmini canı :%d",Dsal2,Dcan1);
printf("%d.Tur saldırı sırası sizde.\n1-[Saldır]\n2-[İyileş]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
scanf("%d",&Ssec);
							
	if(Ssec==1)
	{
		printf("saldırı türünüzü seçiniz\n[1] reine(hasar %d dayanıklılık 70)\n[2]beau(hasar %d dayanıklılık 50)\n[3]vaillant(hasar %d dayanıklılık 30)\nHangi saldırı türüyle saldırmak istersiniz: ",(saldiri*3),(saldiri*2),saldiri);
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
			printf("Hasarınız=%d\n",saldiri);
			day= day -70;
			SSSay--;
			}
			
			else
			{
				printf("dayanıklılığınız yetmiyor");	
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
			printf("Hasarınız=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			
			else
			{
				printf("dayanıklılığınız yetmiyor");	
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
			printf("Hasarınız=%d\n",saldiri);
			day=day-50;
			SSSay--;
			}
			}
			else
			{
				printf("dayanıklılığınız yetmiyor");	
			}
		
		}
	}

	else if(Ssec==2)
	{
		
		printf("savunma türünüzü seçin.\n[1] gratuit(defansınız %d artacak dayanıklılığınız 30)\n[2] loué(defansınız %d artacak dayanıklılığınız 50)\n[3] de valeur(defansınız %d artacak dayanıklılığınız 70)\nHangi savunma türüyle savunmak istersiniz: ",(def*3),(def*2),def);
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
			printf("dayanlıklılığınız%d/%d\n",day,Mday);
			printf("Canınız=%d/%d\n",can,Mcan);
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
			printf("dayanlıklılığınız%d/%d\n",day,Mday);
			printf("Canınız=%d/%d\n",can,Mcan);
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
			printf("dayanlıklılığınız%d/%d\n",day,Mday);
			printf("Canınız=%d/%d\n",can,Mcan);	
		}
		
		else
		{
			printf("herhangi bir şey yapmadınız");
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
		printf("Sıranı boş geçtin rakibin seninle dalga geçiyor\n");
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
			printf("Aldığınız hasar= %d\nKalan canınız= %d/%d\ndayanıklılığınız %d/%d",Dsaldiri,can,Mcan,day,Mday);
		}
		else
		{
			Dcan=Dcan+(DMcan/10);
		}
		def=def1;
		saldiri=sal1;
		printf("Aldığınız hasar= 0\nKalan canınız= %d/%d\ndayanıklılığınız %d/%d",Dsaldiri,can,Mcan,day,Mday);
	}

	
	tur+=1;
	printf("\n");}
						
	if(Dcan<=0)
	{
	printf("GALİBİYET!!!\n");
	exp+=Dsaldiri;
	onur+=Dsaldiri;
	printf("Tecrübeniz: %d\n",exp);
	altin=altin+(DMcan/10);
	hasar= hasar+(DMcan/10);
	printf("Hasarınız %d arttı\n",DMcan/10);
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
	printf("\n\nYetenek puanınızı kullanın");
	
	while(yetw!=0)
	{
		printf("\n[1]Kılıç yeteneği [2]Yay kullanma yeteneği [3]Defans yeteneği [4]Zihin okuma [5]Tahmin yeteneği [6]Onur [7]Büyü yeteneği[8] Hız\n");
		scanf("%d",&lvlyet);
		switch(lvlyet)
		{
			
			case 1:
				hasar+=10;
				printf("Yeni kılıç yeteneğin: %d\n",hasar);
				yetw--;
			
			break;
		
			case 2:
				okyet+=10;
				printf("Yeni yay kullanma yeteneğin: %d\n",okyet);
				yetw--;
			
			break;
		
			case 3:
				def+=10;
				printf("Yeni defans yeteneğin: %d\n",def);
				yetw--;
			
			break;
		
			case 4:
				zih+=10;
				printf("Yeni zihin okuma yeteneğin: %d\n",zih);
				yetw--;
			
			break;
			
			case 5:
				tahm+=10;
				printf("Yeni tahmin yeteneğin: %d\n",tahm);
				yetw--;
			
			break;
			
			case 6:
				onur+=10;
				printf("Yeni onur yeteneğin: %d\n",onur);
				yetw--;
			
			break;
		
			case 7:
				buyuyet+=10;
				printf("Yeni büyü yeteneğin: %d\n",buyuyet);
				yetw--;
			
			break;
			
			case 8:
				hiz+=10;
				printf("Yeni hız yeteneğin: %d\n",hiz);
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
		printf("Altın kesesi buldun(10 altın)\n");
		altin= altin+10;
		printf("Altınınız: %d\n",altin);
		}
	
	else if(say1>80)
	{
		printf("Bir büyücü çıka geldi ve sana bir tür kutsama yaptı.\n");
		buyuyet= buyuyet+10;
		printf("Büyü gücünüz: %d\n",buyuyet);
	}
	
	else if(say1>70)
	{
		printf("Bir tür kapan bitkiye denk geldin. Ondan kaçmak için hamle yaptın ama geç kaldın. Bir tür sıvı ile kaplandın. Artık daha hızlısın?!?!?!?\n");
		hiz= hiz+10;
		printf("Hızınız: %d\n",hiz);
	}
	
	else if(say1>60)
	{
		printf("Bir kemik yığını buluyorsun. Ormanın derinliklerinde kaybolmuş olmalı. Eşyalarını almak ister misin?\n[1]Evet [2]Hayır\nNe yapacaksın:");
		scanf("%d",&kemik);
		if(kemik==1)
		{
			printf("Sunlar bulundu:1 kese altın(100 altın),20 taş ok, 1 demir kılıç\n");
			altin=altin+ 100;
			ok[1]= ok[1]+20;
			hasar=hasar+30;
			printf("Altınınız: %d\nOkunuz: %d\nHasarınız: %d\n",altin,ok[1],hasar);
		}
		else
		{
			printf("Hiçbir şey yapmadan onu sonsuz yalnızlığa bıraktın ve devam ettin\n");
		}
	}
	
	else if(say1>50)
	{
		printf("Bir periye denk geldin ve kalbinin biraz daha hızlı attığını farkediyorsun... Uyandın peri yok ama bir şeyler değişmiş.\n");
		Mcan=Mcan+50;
		printf("Canınız: %d/%d\n",can,Mcan);
	}
	
	else
	{
		printf("Ortalıkta hiçbir şey yok\n");
	}
}

int hasen(void)
{
	
	int say1=(rand()%100);
	
	if(say1==1)
	{
		printf("Bir gece uyku tulumunda sessiz sakince uyurken ay tanrısı senin rüyalar aleminde ona sunduğun minneti kabul ediyor ve...\nSana altın bir kılıç veriyor!!\n");
		hasar +=150;
	}
	
	if(say1==2)
	{
		printf("Bir ejderha sen yatağında fosur fosur osurup uyurken seni bir lokmada ham yaptı. Acısız gibi görünse de beynin tüm acıyı hissetti.\n");
		can -= 1000;
	}
	
	if(say1==3)
	{
		printf("Uyuduğun yerin yanında bir kese altın buldun(100 altın). Muhtemelen bir hayırsever senin haline acıyıp koydu.\n");
		altin=altin+100;
	}
	
	if(say1==4)
	{
		int koylu;
		printf("Yolda yürürken bir köylüye rastladın. Senden yardım istiyor.\n[1]Yardım et\n[2]Yoluna devam et\nNe yapacaksın:");
		scanf("%d",&koylu);
		if(koylu==1)
		{
			printf("Köylünün sabanı taşa sıkışmış güçlü kollarınla birkaç hamlede kurtardın. Köylü ve ailesi sana minnettar.\n");
			onur=onur+50;
			printf("Onurunuz: %d",onur);
		}
		else
		{
			printf("Köylünün dili uzun çıktı. Yardım etmediğini tüm ahali öğrendi.\n");
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
		printf("Yolda dinlenirken güzel bir cadıya denk geldin ve dikkatini çektin. Senden hoşlandı ve sana bir iksir verdi.içtin ve bayıldın. Ayıldığında cadı yoktu.\n");
		Mcan=Mcan+100;
		printf("Canınız: %d/%d\n",can,Mcan);
	}
	
	if(say1==6)
	{
		printf("Bir ustaya denk geldin. Seni sevdi ve sana bir büyü öğretmek istedi. Büyüler gelince rasgele bir büyü öğret\n");
	}
	
	if(say1==7)
	{
		printf("Bir Nizam Şövalyesi yanından geçiyor. Senin güçlü olduğunu gördüğü ve hoşuna gitti. Seni minik bir düelloya davet ediyor.\n");
		
		int Ssec,DMcan=300,Dcan=300,Dsaldiri=300,saldiri=hasar/3,tur=0,Ddef=300;
						
		while(Dcan>0&&can>0)
		{
			printf("%d.Tur saldırı sırası sizde.\n1-[Saldır]\n2-[İyileş]\n3-[Teslim ol]\nNe yapmak istersin:",tur);
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
				printf("Hasarınız=%d\n",saldiri);
			}
			else if(Ssec==2)
			{
				can= can+(Mcan/10);
				if(can>Mcan)
				{
					can=Mcan;
				}
				printf("Canınız=%d\n",can);
			}
			else if(Ssec==3)
			{
				printf("Şövalye sana\"senin onurlu ve güçlü bir savaşçı olduğunu düşünmüştüm\" diyor. Ve gidiyor\n");
			break;
			}					
			
			else
			{
				printf("Sıranı boş geçtin rakibin seninle dalga geçiyor\n");
			}
							
			if(tur%3==0||tur%3==1)
			{
				Dsaldiri = Dsaldiri -(def/10);
				can= can-Dsaldiri;
				printf("Aldığınız hasar=%d\nKalan canınız=%d/%d\n",Dsaldiri,can,Mcan);
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
		printf("Şövalye senin karşında diz çöküyor ve senin bu gücünden etkileniyor.Sana Nizam Şövalyesi Karargahına giriş belgesi veriyor.(İtemler geldiğnide eklenir ve Nizam Şövalyesi Karargahı da eklenir)\n");
	}
	
	if(say1==8)
	{
		printf("Bir nene görüyorsun. Çok tatlı birisi. Yanına gidip halini hatrını soracakken alnına dokunuyor ve gözüne perde iniyor. Bir süre sonra düzeliyorsun\n");
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
	int cikis; //Satış ekranından çıkar
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
	int kediotu=0; //İTEM 
	int yilanyumurtasi=0; //İTEM
	int bilgi[8]={0,0,0,0,0,0,0}; //İTEMLER
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
	printf("Selam dünyalı, bu girdiğin evrene birçok yiğit savaşçı girmeyi denese de çıkmayı başaramadı.\nBu sebepten çok dikkatli ol! Dünyaya giriş yapmak istediğine hala emin misin?\n");
	printf("Kabul ediyorsan y'ye, Reddediyorsan n'ye bas...");
	scanf("%c",&sec);
	
	if(sec=='y')
	{
		
		printf("Bana kendini tanıt...\n");
		printf("İsmin ne?\n");
		scanf("%s",&isim);
		system("CLS");
		printf("Mesleğin ne?\n");
		
		while(mes1!=0)
		{
			printf("[1]Savaşçı\n[2]Okçu\n[3]Büyücü\n[4]Dedektif\n");
			scanf("%d",&mes);
			switch(mes)
			{
				case 1: hasar+=150;			printf("Yeni kılıç yeteneğin: %d",hasar);
					mes1--;
				break;
				
				case 2: okyet+=150;			printf("\nYeni yay kullanma yeteneğin: %d",okyet);
					mes1--;
				break;
				
				case 3: buyuyet+=150;			printf("\nYeni büyü yeteneğin: %d",buyuyet);
					mes1--;
				break;
				
				case 4: tahm+=75; zih+=75;	printf("\nYeni tahmin yeteneğin: %d\nYeni zihin yeteneğin: %d",tahm,zih);
					mes1--;
				break;
				
				default: printf("Tekrar dene!\n\n");
				break;
			}
		}
				
				system("pause");
				system("cls");
				
		printf("\nElinde bulunan 10 adet puanı karakterini geliştirmek için kullan\n");
		
		printf("\n[1]Kılıç yeteneği [2]Yay kullanma yeteneği [3]Defans yeteneği [4]Zihin okuma [5]Tahmin yeteneği [6]Onur [7]Büyü yeteneği[8] Hız\n");
		
		
		while(puan!=0)
		{
			printf("Hangi özelliğinizi geliştirmek istersiniz:");
    		scanf("%d",&yet);
    		
			switch(yet)
			{
    			case 1:
					hasar+=10;
					printf("\nYeni kılıç yeteneğin: %d\n",hasar);
					puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 2: 
					okyet+=10;	
					printf("\nYeni yay kullanma yeteneğin: %d\n",okyet);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 3: 
					def+=10;
					printf("\nYeni defans yeteneğin: %d\n",def);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 4: 
					tahm+=10;
					printf("\nYeni zihin okuma yeteneğin: %d\n",zih);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 5: 
					zih+=10;
					printf("\nYeni tahmin yeteneğin: %d\n",tahm);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 6: 
					onur+=10;
					printf("\nYeni onur yeteneğin: %d\n",onur);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				case 7: 
					buyuyet+=10;
					printf("\nYeni büyü yeteneğin: %d\n",buyuyet);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			case 8: 
					hiz+=10;
					printf("\nYeni hız yeteneğin: %d\n",hiz);
    				puan--;
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
    			
				default:
    				printf("Tekrar dene!!");
    				printf("Kalan puanınız: %d\n\n",puan);
    			break;
			}
		}
    			can=Mcan;
    			system("cls");
		
		printf("\nGireceğin evrende çok düşük ihtimallerde nadir eşyalarla kutsanabilir, güçlü büyücülerin efsunlarına uğrayabilir\nveya ansızın bir ejderha tarafından yutulabilirsin.\nO yüzden vereceğin her kararda sonraki kararının seni sona yaklaştırmadığından emin ol.");
		printf("\n\nHasarını günden güne antrenman yaparak artırabilir veya sakatlanıp azalmasına sebep olabilirsin.");
		printf("\nCan barın her şeyden önemlidir. birçok şeyden etkilendiği gibi birçok şeye de etki etmektedir.");
		printf("\nDefans gücün bardaki sarhoşla antrenman sırasında gelişir ama cebindeki çakıya dikkat et!! \n(Defansını azaltıp canını azaltabilir.)");
		printf("\nOk sayını çalı kullanarak günden güne artırabilirsin veya yerden bularak da kazanbilirsin.");
		printf("\nDüşmanlarına dikkat etmelisin. Onların gücünü öğrenebilmek için tahmin yeteneğininin yeteri kadar olması gerekir.\nTahmin yeteneğini tavernadaki kızlar hakkında tahmin yaparak kazanabilirsin.\n\n");
        
		while(can>0)
		{
		Igun=0;
		while(Igun<=(hiz/100)&&can>0)
		{
            printf("%d. Gün\n",gun);
			hasen();
            printf("Başlıyoruz hazır mısın?\n");
            printf("Seviyeniz: %d\n",lwl);
            printf("Tecrübeniz: %d/%d\n",exp,Mexp);
   			printf("Hasarınız: %d\n",hasar);
   			printf("Canınız: %d/%d\n",can,Mcan);
   			printf("Defansınız: %d\n",def);
   			printf("Ok yeteneğiniz: %d\n",okyet);
   			printf("Okunuz: %d\n",ok[1]);
   			printf("Tahmin yeteneğiniz: %d\n",tahm);
   			printf("Zihin yeteneğiniz: %d\n",zih);
   			printf("Onurunuz: %d\n",onur);
   			printf("Hızınız: %d\n",hiz);
   			printf("Altınınız: %d\n",altin);
   			
   			day=Mday;
            printf("[1]Arenaya gir\n[2]Aşk çeşmesine git\n[3]Bara git\n[4]Ormana git\n[5]Büyücünün inine gir\n[6]İntihar mağrasına gir\n[7]Evde dinlen(iyileş)\n[8]Talim alanına git\n[9]Çarşıya git\n[12]envantere bak\n");
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
					printf("boş geçtin manyak niye\n");
					}
				
				break;
				
				case 2:
					
					printf("Aşk çeşmesine geldiniz: 1-Dilek tutmak.\n2-Yeni insanlar ile tanışma.\n3-Ticaret yapmak.\n");
					printf("Ne yapmak istersin:");
					scanf("%d",&secim);
					
					    
					    if(secim == 1)
						{
						iht = rand() % 10;
						printf("İhtimaller:1-Zengin olmak.\n2-Onurun artması.\n3-Yeni bir zırh.\n4-Güçlenmek.\n");
						scanf("%d",&secim1);
					
						if(iht == 1)
						{
							printf("Dileğini tuttuktan sonra yolda yürürken bir hırsızın güzel bir kadının çantasını çalarken gördün.1-Peşine düş.\n2-Umursama.\n");
							scanf("%d",&secim2);
							if(secim2 == 2)
							{
								// pişmanlık ileride gelecek...
							}
							else if(secim2 == 1)
							{
								printf("Uzun bir çabadan sonra çantayı hırsızdan aldın ve hırsızı patakladın.Çantayı açtın ve o da ne!! içinde bir sürü para var.1-Çantayı sahibine götür.\n2-Çanta al ve kaç.\n");
								scanf("%d",&secim3);
								
								if(secim3 == 1)
								{
							
									printf("Çantayı sahibine götürdün ve kadın bunun karşılığında sana bir miktar para verdi.\n");
									altin = altin + 200;
									onur = onur + 20;
									printf("Altınınız: %d\n",altin);
									printf("Onurunuz: %d\n",onur);
								}
								else
								{
									altin = altin + 500;
									onur = onur - 10;
									printf("Altınınız: %d\n",altin);
								    printf("Onurunuz: %d\n",onur);
								}
							}
						}
						}	
				        
						if(iht == 2)
						{
				        	printf("Yolda giderken bir adamın siyahi bir adamı aşağıladığını gördün.1-Siyahi adama yardım et.\n2-Umursama.\n");
				        	scanf("%d",&secim4);
				        	
				        	if(secim4 == 1)
							{
				        		printf("Adamın yanına gittin ve yaptığının yanlış olduğunu söyledin ama o da ne!! Adam sana karşılık verdi.1-Sende karşılık ver.\n2-Uyarmaya devam et.\n");
				        		scanf("%d",&secim5);
								
								if(secim5== 1)
								{
				        			printf("Adamı patakladın ve adam sinirli bakışlar ile kaçtı.Siyahi adam ise kısık ve korku dolu bir ses ile koşarak uzaklaştı.\n");
				        			onur = onur + 15;
				        			printf("Onurunuz: %d\n",onur);
								}
								
								if(secim5 == 2)
								{
									printf("Adam senin uyarı ve hoşgörüne rağmen aynı harekete devam ediyor.1-Karşılık ver.\n2-Birşey yapma ve uzaklaş");
									scanf("%d",&secim6);
									
									if(secim6 == 1)
									{
										printf("Adamı patakladın ve adam sinirli bakışlar ile kaçtı.Siyahi adam ise kısık ve korku dolu bir ses ile koşarak uzaklaştı.\n");
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
							printf("Yolda giderken bir at arabasından sandık düştüğünü gördün.Hemen gidip açtın ve o da ne!İçinde çok güzel bir zırh var.1-Zırhı al.\n2-At arabasının arkasından bağır.\n");
							scanf("%d",&secim7);
							
							if(secim7 == 1)
							{
							   printf("Zırh hoşuna gitti ve zırhı aldın.");
							   def = def + 10;
							   printf("Defansınız: %d\n",def);
							}
							else
							{
								printf("At arabsının akrasından bağırdın lakin seni duymadılar.Yeni zırh...");
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
								printf("Dileğini tuttun ve yolda gidiyorsun o da ne!! Habeşli Hasen Tanrısı sana ilahi bir güç bahşetti.");
								hasar = hasar + 700;
								printf("Hasarınız: %d\n",hasar);
							}
				    	}
				    	
						if(secim == 2)
						{
				       	printf("Bir kadın ile tanıştın.");
				       	printf("Kadın:Merhabalar bana bir konuda yardımcı olur musunuz?1-Yardım et.\n2-Umursama.\n");
				       	scanf("%d",&secim8);
				       	if(secim8 == 1)
						{
				       		printf("Bizim Karakter:Tabi ki! Buyrun sizi dinliyorum!\n");
				       		printf("Kadın:Şu köşede gördüğünüz adamlar bana zorbalık yapıyorlar.Bana yardım etmeniz karşılığında size çalıştığım barda bir içki verebilir ve bara girişinizin kolay olmasını sağlayabilirim.\n1-Yabancı kadının dediğini yap.\n2-Yapma ve uzaklaş.\n");
				       	    scanf("%d",&secim9); 
						   	
							if(secim9 == 1)
							{
				       			printf("Yabancı kadının dediğini yaptın ve adamları patakladın.Ceblerinden bir miktar altin çıktı");
				       			altin = altin + 50;
				       			onur = onur + 20;
				       			printf("Onurunuz: %d",onur);
				       			printf("Altınınız: %d",altin);
				       			printf("Yabancı Kadın:Çok teşekkür ederim efendim.Adım Lisa.Hemen şu aşağıdaki barda çalışıyorum isterseniz gidebiliriz.\n1-Git.\n2-Gitme");
				       			scanf("%d",&secim11);
									
									if(secim11 == 1)
									{
				       					printf("Lisa ile beraber çalıştığı bara gittiniz ve içtiniz.Lisa sana bir işini halletmen karşılığında barın özel girişi için bir giriş kartı vereceğinin söyledi.");
				       					printf("Fakat bu iş için 3 gün sonra gelmen gerektiğini ve işi o zaman anlatacağını söyledi.\n1-Kabul et.\n2-Kabul etme.\n");
				       					scanf("%d",&secim11);
				       					
									   	if(secim11 == 1)
										{
				       						Ggun = gun + 3;
				       						printf("Lisa:Bara akşam saatlerinde gelen bir zorba var.Zamanında benim en kıymetli eşyamı çaldı.Eğer eşyamı alıp hakettiğini ona verirsen anlaşmamız gerçekleşir");
				       						printf("Lisa'nın dediği adamı takip ettin ve adamla yüzleşmek için uygun bir fırsat buldun.\n1-Adamla yüzleş.\n2-Bekle.\n");
				       						scanf("%d",&secim12);
				       						
											if(secim12 == 1)
											{
				       							printf("Adamdan eşyayı aldın ve adamı fena benzettin.\n");
				       							altin = altin + 15;
				       							printf("Altınınız: %d\n",altin);
				       							printf("Eşyayı aldın ve Lisaya götürdün ve bunun karşılığında bara özel giriş kartını aldın\n");
											}
											
											else
											{
												printf("Bekledin ve adam gözden kayboldu görev başarısız!!");
											}
									   	}
									
										else if(secim11 == 2)
										{
									   		printf("Lisa'nın dediğini yapmadın ve bu yüzden sinirlenen Lisa oyalandığını düşündü ve seni bardaki bir kaç soytarıya dövdürdü\n");
									   		can = can - 10;
									   		altin = altin - 20;
									   		printf("Canınız: %d\n",can);
									   		printf("Altınınız: %d\n",altin);
										}
									}
							   }
					}
								else
								{
								printf("Yabancı kadının dediğini yapmadın ve uzaklaştın.");
								}
					} 	
						   
						   if(secim == 3)
						   {
						   		printf("Yolda giderken bir yandan da ticareti nasıl yapabilirsin diye düşünürken çarşıdaki bir tüccara:Merhabalar kolay gelsin.Ticaret yapmak istiyorum da öneribileceğiniz bir ticari iş var mı?\n");
						   		printf("Tüccar:Sizlere de merhabalar.İşler şuan pek iyi değil fakat karşıda gördüğün tüccara danışabilirsin.\n\n\nKarşıdaki tüccarın yanına gittin.\n");
						   		printf("Bizim Karakter:Merhabalar.Karşıdaki Tüccar beni size yönlendirdi.Adım(karakterin adı)ticaret yapmak istiyorum.Elinizde yapabileceğimiz tiari bir iş var mı?");
						   		printf("Tüccar:Sizlere de merhabalar.Çok iyi bir zamanda geldiniz.Evet elimde yapabileceğimiz ticari bir iş var?Size anlatmamı ister misiniz:1-Kabul et.\n2-Etme.\n");
						   		scanf("%d",&secim11);
						   	
						   	if(secim11 == 1)
							{
						   		printf("Bizim Karakter: Buyrun sizi dinliyorum.\n");
						   		printf("Tüccar:Efendim öncelikle adım Philip.Burada Tüccar Philip diye bilinirim.Eğer kabul ederseniz yapacağımız iş ipek üzerine.İpek ile ilgileniyorsanız açıklayacağım.Yoksa vaktimi çalmayın.1-Kabul et.\n2-Kabul etme.\n\n\n");
						   		scanf("%d",&secim12);
								   
								   if(secim12 == 1)
								   {
						   			printf("Bizim Karakter: Evet sizi dinliyorum.\n Tüccar:Elimde satılacak güzel ipekler var.Bunları satabilemk için bir yatırımcıya ihtiyacm var eğer kabul ederseniz sizdrn 100 altın istiyorum eğer iş tutarsa verdiğiniz paranın en az 3 katını alacaksınız.");
						   			printf("Paranız: %d\n",altin);
						   			printf("1-Kabul et.\n2-Kabul etme.\n");
						   			scanf("%d",&secim13);
									   
									   if(secim13 == 1)
									   {
						   				printf("Bizim karakter:Tamamdır kabul ediyorum.Ama size güvenebilir miyim bilmiyorum?\n Tücaar:Çok haklsınız efendim. Bu zamanda güvenilir insan bulmak zor.Bana olan güvenceniz için size bu işaretli demiri alın.Bunu kime gösterirseniz beni gösterir.");
						   				printf("Bizim karakter:Pekala tüccar Philip.Peki bu iş ne zaman içerisinde biter?\n Tüccar:Efendim bu iş en az 7 en çok 10 gün içerisinde bitecektir diye umuyorum.Bu 3 gün içerisinde size verdiğim bu işareti karşıda gördüğünüz adama gösterin o sizi yönlendirecektir.");
						   				printf("Bizim karakter:Pekala Philip.Şimdiden güzel haberlerini bekliyorum görüşmek üzere.\n");
						   				
											if(Ggun = 7 + Agun)
											{	   
						   						printf("Yeni gün: %d\n",Ggun);
						   						printf("Bizim Karakter:Merhabalar ben bu işaretin sahibini arıyorum kendisinden bir haber var mı?\n Adam: Hayır.Sonra yeniden gelin.\n");
						   					}
						   					
											if(Ggun = 8 + Agun)
											{
						   						printf("Yeni gün: %d\n",Ggun);
						   						printf("Bizim Karakter:Tekrardan merhaba.Herhangi bir haber var mı?\n Adam:Henüz bir haber yok.Sonra yeniden gelin.\n");
									   		}
											
											if(Ggun = 9 + Agun)
											{
												printf("Bizim Karakter:Kolay gelsin.Var mı bir haber?\n Adam:Beni takip edin efendim.\n");
												printf("Tüccar ile beraber gittin ve gittiğiniz yerde Tüccar Philip ile karşılaitın.\n");
												printf("Bizim karakter: Merhaba Tüccar Philip umarım güzel haberler almak için geldim(hafif gülümsemeler).\n Tüccar Philip:HEHEHEHE tabi ki efendim tam istediğimi gibi oldu.Bu işten tam 10.000 altın kazandık.\n\n\n");
												printf("Tüccar Philip:Size bu ticaretten verdiğiniz değerin 3 katını vermeyi teklif ediyorum.Cevabınız nedir?\n 1-Kabul et.\n 2-Kabul etme.\n");
												scanf("%d",&secim14);
												
												sayi = rand() % 3;
												sayi = sayi + 3;
												
												if(secim14 == 1)
												{
													printf("Bizim karakter:Peki.Kabul ediyorum.Bu güzel ticaret için teşekkür ediyorum Philip.\n Tüccar Philip:Bende sizlere teşekkür ederim efendim tam zamanında sizin gibi birini buldum.Aynı zamanda bu işaret ile istediğiniz zaman buraya gelebilirsiniz.\n");
													altin = 100 * 3;
													onur = onur + 10;
													printf("Altınınız: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else
												{
													printf("Bizim Karakter:Bu güzel ticaret içiin öncelikle teşekkür ederim Tüccar Philip.Lakin bu teklif bana uymuyor.\n");
													printf("Teklif ver.");
													scanf("%d",&teklif);
													
													if(teklif <= sayi){
													printf("Tüccar Philip:Hehehe bu teklif biraz fazla oldu ama kabul ediyorum.\n");
													altin = 100 * teklif;
													onur = onur + 10;
													printf("Altınınız: %d\n",altin);
													printf("Onurunuz: %d\n",onur);
												}
												
												else{
													printf("Tüccar Philip:fendim bu teklif benim için çok fazla.3 katı hepimiz için en iyisi.\n");
								    				altin = altin * 3;
								    				printf("Altınınız: %d\n",altin);
												}
												}
											}
									
										if(secim13 == 2)
										{
											printf("Bizim karakter: Hayır ilgilenmiorum teşekkürler.");
										}
									}
								}
								
								if(secim11 == 2)
								{
								   	printf("İlgilenmiyorum!!");
								}
							}
						}
				
				break;
				
				case 3:
					
					int bar,bar1;
					printf("Bara girdin konuşacak birkaç kişi var.\nHangisiyle konuşmak istersin?\n[1]\n[2]\n[3]\n");
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
					
					printf("Ormana girdiniz.\n[1]Ok toplamak\n[2]Ormanı keşfetmek\n[3]Meyve toplamak\n[4]Ormanın derinliklerine gir\nNe yapmak istersiniz:");
					scanf("%d",&orman1);
					
					if(orman1==1)
					{
						Oorman=(rand()%15);
						printf("%d tane çubuk buldun ve güzel oklar yaptın.\n",Oorman);
					}
					
					else if(orman1==2)
					{
						Korman=(rand()%25);
						
						if(Korman>20)
						{
							printf("Orman kıyılarında gezerken bir meyve sepeti buldun.\n");
							printf("İtem eklenince meyve sepeti eklensin\n");
						}
						
						else if(Korman>15)
						{
							printf("Ormanın kıyılarında gezerken bir kese altın buldun. Kısa günün karı.\n");
							altin=altin + 100;
							printf("Toplam altınınız: %d\n",altin);
						}
						
						else if(Korman>10)
						{
							printf("Ormanın kıyısında gezerken yaşlı bir dedeye ras geldin. Yardım istiyor yardım eder misin?\n");
							printf("Yardım ederse şans göre iyi veya kötü bir şey olsun\n");
						}
						
						else
						{
							printf("Ne bir şey gördün ne bir şeye rastladın bomboş bir gün geçirdin\n");
						}
					}
					
					else if(orman1==3)
					{
						printf("Güzel ve tatlı meyveler topladın\n");
						printf("İtemler geldiğinde meyveler eklenmeli rastgelelikle meyveler bulsun\n");
					}
					
					else if(orman1==4)
					{
						//[21][11]

						printf("ormanın derinliklerine dalıyorsun burada bir sürü pisliğin döndüğüne dair dedikodular zihnini kurcalıyor.\n");
						printf("içeri giriyorsun şimdi vereceğin kararlar çok önemli çünkügirdiğin her alanda ya seni öldürecek risklere sahip bir yere girmiş olacaksın ya da büyük ödüllere kavuşacaksın\n");
						printf("ilk olarak derinlere fazla gidersen bazı canavarlarla karşılaşabilirsin o yüzden fazla uzaklaşmadığından ve dönüş yolunu bildiğinden emin ol\n");
						printf("gittiğin yolun tam tersine giderek ormandan çıkacaksın dikkat et dönüş yolunu unutursan ormanda ölümle burun burunasın\n");
						
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
						
						printf("ileri girmek için w\'ye bas\nsağa gitmek içind\'ye bas\nsola gitmek için a\'ya bas\ngeri gitmek içins\'ye bas\ngeri dönmek için g\'ye bas\nne yapmak istersin: ");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
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
							printf("ileri girmek için w\'ye bas\nsağa gitmek içind\'ye bas\nsola gitmek için a\'ya bas\ngeri dönmek için s\'ye bas\nne yapmak isteresin: ");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("galiba yanlış bir tuşa bastın\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("galiba yanlış bir tuşa bastın\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("galiba yanlış bir tuşa bastın\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
									printf("ormanın o kadar derinlerine daldın ki kendini bir canavarın ininin öünde buldun ve canavar seni çoktan görmüştü. savaşmaktan başka çaren yok\n");
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
								printf("galiba yanlış bir tuşa bastın\n");
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
							printf("başarıyla ormandan çıktın. tebrik ederim\n");	
						}
						else
						{
							printf("bir bekçi seni kurtardı ama o geceyi tek başına geçirmenin acısını unutamayacaksın ya seni bulmasaydı(başka ihtimaller getir)\n");
						}
					}
					
				break;
				
				case 5:
					
					printf("Büyücü İnine Girdiniz. Ne Yapmak İstersiniz?\n[1]Büyücüden Tavsiye Al\n[2]Büyücüye Meydan Oku (YÜKSEK TEHLİKE)\n[3]Büyücüden Mağaranın Anahtarını İste\n");
					scanf("%d",&buyucusecimi);
					
					if(buyucusecimi==1)
					{
						altin=altin-10;
						printf("kalan altınınızz: %d",altin);
						printf("Büyücü: Ne hakkında tavsiye almak istersin genç adam?\n");
						printf("[1]İksir Tarifi");
						printf("[2]Büyü Öğrenme");
						printf("[3]Silah Efsunlama");

						scanf("%d",&buyucutavsiyesecimi);
						
						if(buyucutavsiyesecimi==1)
						{
							printf("Ne İksirinin Tarifini istiyorsun?\n");
							printf("[1]Görünmezlik(500G)\n[2]Güç(250g)\n[3]Sağlık\n(100G)");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								//altin=altin-500;
								//printf("kalan altınınızz: %d",altin);
								printf("Tarifi Şu:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi Şu:");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Tarifi Şu:");
							}
						}
						
						else if(buyucutavsiyesecimi==2)
						{
							printf("Ne Büyüsü Öğrenmek istiyorsun?\n");
							printf("[1]Alevtopu(1000G)\n[2]İyileştirme(700G)\n[3]Stamina Yenileme(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Alevtopu Büyüsünü Öğrendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("İyileştirme Büyüsünü Öğrendiniz.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Stamina Yenileme Büyüsünü Öğrendiniz.\n");
							}
						}
						
						else if(buyucutavsiyesecimi==3)
						{
							printf("Kılıcına Ne Efsunu Yaptırmak istiyorsun?\n");
							printf("[1]Alevleme(2000G)\n[2]Zehir(1200g)\n[3]Dayanıklılık(500G)\n");
							scanf("%d",&iksirsecimi);
							
							if(iksirsecimi==1)
							{
								printf("Silahınıza Alevleme Efsununu Yaptırdınız.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silahınıza Zehir Efsununu Yaptırdınız.\n");
							}
							
							else if(iksirsecimi==2)
							{
								printf("Silahınıza Dayanıklılık Efsununu Yaptırdınız.\n");
							}
						}
					}
					
					
					else if(buyucusecimi==2)
					{
						int buyucusavassecimi;
						buyucuhasar=hasar*2;
						buyucucan=can*5;
						int magarayaatilma=0;
						
						printf("Yerinden Kalkan Büyücünün Gözlerindeki Parıltıyı Görünce İçin Ürperdi.\n");
						printf("Çok Belalı Bir İşe Giriştin... \n Büyücüye Meydan Okumadan Önce İki Kere Düşünmen Gerekirdi\n Ne Yapmak İstiyorsun?\n [1]Saldır\n [2]Kaç\n [3]Bağışlanma Dile\n");
						scanf("%d",&buyucusavassecimi);
						
						if(buyucusavassecimi==1)
						{
						
							can=can-buyucuhasar;
							printf("Kalan Canın:%d\n",can);
							
							buyucucan=buyucucan-hasar;
							printf("Büyücünün Kalan Canı:%d\n",buyucucan);
						}
						
						else if(buyucusavassecimi==2)
						{
							buyucumanahtar=2;
							printf("Kimse Bu Kadim Büyücüye Meydan Okuyup da Ondan Kaçabilmiş Değildir.\n Büyücü Senin Çaresiz Kaçışına Biraz Acımış Olacak ki Seni Öldürmek Yerine Mağaranın İçine Fırlatıp Kapıyı Kitledi.\n Artık Bu Mağaradan Kaçışın Senin Elinde.\n");
						}
						
						else if(buyucusavassecimi==3)
						{
							printf("Onurunu Bir Kenara Bıraktın Ve Büyücüden Bağışlanma Diledin...\n Büyücü Seni Bu Seferlik Affetmeye Karar Verdi.\n Birdaha Bulaşmaman Kaydıyla Tabii.\n");
						}
					}
					
					else if(buyucusecimi==3)
					{
						buyucurng=(rand()%101);
						
						if(buyucurng>=50)
						{
							printf("Büyücüyle Biraz Tartıştınız Ve Sonunda Sana Mağaranın Anahtarını Ödünç Vermeye Razı Oldu.\n");
							buyucumanahtar=1;
						}
						
						else
						{
							printf("Büyücü Kesinlikle Mağaraya Girmene Karşı Çıktı Ve Seni Mağaradan Kovdu.\n");
							break;
						}
					}
					
					if(buyucumanahtar==1)
					{
						printf("Sonunda Şu Halk Arasındaki Meşhur Mağaraya Girebildin.\nMağaranın İçinde Biraz İlerledin Ve Karşına İki Yol Ayrımı Çıktı.\nSağ a Mı Gideceksin Sol a Mı?\n[1]Sağ\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sağ'a Gittin...\nBiraz İlerledin ve Karşına Efsunlu Bir Köpek Çıktı.\nOnla Savaştın...\nKalan Canın:%d",can);
							can=can-25;
							printf("Biraz Daha İlerledin Ve Karşına Efsunlu Bir Goblin Çıktı...\nOnla Savaştın...\nKalan Canın:%d",can);
							printf("Yürümeye Devam Ettin Ve Mağaranın Çıkışını Buldun Doğru Yönde İlerlediğin İçin Şanslısın.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz İlerledin ve Karşına Efsunlu Bir Ayı Çıktı.\nOnla Savaştın...\nKalan Canın:%d",can);
							can=can-15;
							printf("Biraz Daha İlerledin Ve Karşına Efsunlu Bir Yılan Çıktı...\nOnla Savaştın...\nKalan Canın:%d",can);
							printf("Yürümeye Devam Ettin Ve Yolun Çıkmaza Girdi...\nGeri Döndün Ve Sağa İlerledin.\nYaralı Olduğun İçin Karşına Çıkan Yaratıkların Yanından Koşarak Geçip Onları Atlattın ve Sonunda Çıkışa Varabildin.\n");
							//burada kazandığı eşyalar ve altın yazılıp eklenecek şuan bu sürümde altın olmadığı için ekleyemedim.
						}
					}
					
					else if(buyucumanahtar==2)
					{
						can=can/2;
						printf("Büyücü Seni Mağaranın İçine Baya Bir Sert Fırlatmış Olacak ki, Bilincini Kaybetmişsin Ve Yaralanmışsın.\n Kalan Canın:%d\n",can);
						printf("Mağaranın İçinde Biraz İlerledin Ve Karşına İki Yol Ayrımı Çıktı.\nSağ a Mı Gideceksin Sol a Mı?\n[1]Sağ\n[2]Sol\n");
						
						scanf("%d",&magarayonsecimi);
						
						if(magarayonsecimi==1)
						{
							can=can-10;
							printf("Sağ'a Gittin...\nBiraz İlerledin ve Karşına Efsunlu Bir Köpek Çıktı.\nOnla Savaştın...\nKalan Canın:%d",can);
							can=can-25;
							printf("Biraz Daha İlerledin Ve Karşına Efsunlu Bir Zombi Çıktı...\nOnla Savaştın...\nKalan Canın:%d",can);
							printf("Yürümeye Devam Ettin Ve Mağaranın Çıkışını Buldun Doğru Yönde İlerlediğin İçin Şanslısın.\n");
						}
						
						else if(magarayonsecimi==2)
						{
							can=can-25;
							printf("Sol'a Gittin...\nBiraz İlerledin ve Karşına Efsunlu Bir Ayı Çıktı.\nOnla Savaştın...\nKalan Canın:%d",can);
							can=can-15;
							printf("Biraz Daha İlerledin Ve Karşına Efsunlu Bir Yılan Çıktı...\nOnla Savaştın...\nKalan Canın:%d",can);
							printf("Yürümeye Devam Ettin Ve Yolun Çıkmaza Girdi...\nGeri Döndün Ve Sağa İlerledin.\nAğır Yaralı Olduğun İçin Karşına Çıkan Yaratıkların Yanından Koşarak Geçip Onları Atlattın ve Sonunda Çıkışa Varabildin.\n");
							//üstteki aynı şekilde
						}
					}
					
				break;
				
				case 6:
					
					printf("İntihar Mağarasına girdin\n");
					printf("Mağara çok soğuk\nNe yapacaksan yap çabuk yap!!\n");
					while(intmagara!=0){
						
						if(intmagaradancikis==1){
							break;
						}
						
						printf("[1]Mağaranın derinliklerine gir\n");
						printf("[2]Geri dön\n");
						scanf("%d",&intmagarayolsecim1);
						system("CLS");
						if(intmagarayolsecim1==1){
							printf("Verdiğin nefesin buhar olarak havada yayıldığını görüyorsun. Yol 3'e ayrılıyor.\n");
							printf("Sol taraftan gelen bir ışığın olduğunu farkediyor\nSağ tarafta ise hiçbir ışığın olmadığını, sadece birkaç ipin olduğunu görüyorsun\n");
							while(intmagara!=0){
								
								if(intmagaradancikis==1){
									break;
								}
								
								printf("Ne yapacaksın?\n");
								printf("[1]Düz git\n"); //İkiye ayrılıyor
								printf("[2]Sola git\n"); //Ateş
								printf("[3]Sağa git\n"); //İp
								printf("[4]Geri dön\n");
								scanf("%d",&intmagarayolsecim2);
								system("CLS");
								if(intmagarayolsecim2==1){ //Düz
									while(intmagara!=0){
										
										if(intmagaradancikis==1){
											break;
										}
										
										printf("Yol ikiye ayrılıyor\n[1]Sola git\n[2]Sağa git\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim2);
										system("CLS");
										
										if(intmagarasecim2==1){ //Yılanlara gider
										
											if(intmagaragorevi1==1 || intmagaragorevi1==2){
												printf("Bu yol ihtiyarın söylediğine göre yılanların olduğu yere açılıyor\n");
												system("PAUSE");
												system("CLS");
											}
											
											else if(intmagaragorevi1==0){
												printf("tssssssssssssss...\n");
												system("PAUSE");
												system("CLS");
												printf("-Lanet olsun. Bu sesler hiç hoş değil\n");
												system("PAUSE");
												system("CLS");
												printf("Bu seslerin yılan sesi olduğunu farkediyorsun\nBuraya girmek oldukça tehlikeli olmalı...\n");
												system("PAUSE");
												system("CLS");
											}
											
											while(intmagara!=0){
												printf("Ne yapacaksın?\n[1]Yılan yumurtası çal\n[2]Yılan kes\n[3]Yılanlarla Konuş\n[4]Kendini yılanların arasına at\n[5]Geri dön\n");
												scanf("%d",&intmagarayilan);
												system("CLS");
												
												if(intmagarayilan==1){ //Yılan yumurtasını çal
													
													if(intyilanyumurtasialmahakki==1){
														printf("Bugünkü hakkını kullandın!\n");
														continue;
													}
													
													intyilanyumurtasialmahakki=1;
													
													if(kediotu==0){
														printf("Yanında kediotu olmadan yılanlara yaklaşıyorsun\nOnlar ortama göre renk değiştirirler\nBu yüzden adımlarını dikkatli atmalısın\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtaları gördün!\nYaklaşıyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Yumurtalara ulaşman 3 adımını alacak\n");
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
															printf("Olamaz!\nBiri seni farketti ve sana saldırıyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜŞ EKLENECEK**************************************************
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
															printf("Olamaz!\nBiri seni farketti ve sana saldırıyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜŞ EKLENECEK**************************************************
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
															printf("Olamaz!\nBiri seni farketti ve sana saldırıyor\n");
															system("PAUSE");
															system("CLS");
															//DÖVÜŞ EKLENECEK**************************************************
														}
														
														srand(time(NULL));
														intmagarayilanyumurtasayisi=rand()%10;
														intmagarayilanyumurtasayisi+=2;
														printf("Sonunda yumurtaların yanına vardın\n");
														
														while(intmagara!=0){
															printf("%d tane yılan yumurtası görüyorsun\nKaç tane alacaksın?\n",intmagarayilanyumurtasayisi); //İLERİDE HEPSİNİ ALAMAMASI İÇİN ÇANTA AĞIRLIĞI OLACAK
															scanf("%d",&intalinanyumurtasayisi);
															system("CLS");
															
															if(intalinanyumurtasayisi>intmagarayilanyumurtasayisi || intalinanyumurtasayisi<=0){
																printf("Bu mümkün değil!!\n");
															}
															
															else{
																
																intmagarayilanyumurtasayisi-=intalinanyumurtasayisi;
																yilanyumurtasi+=intalinanyumurtasayisi;
																printf("%d tane yumurta aldın\nKalan yumurta sayısı: %d\n",intalinanyumurtasayisi,intmagarayilanyumurtasayisi);
																system("PAUSE");
																system("CLS");
																
																if(intalinanyumurtasayisi>=2 && intmagaragorevi1==2){
																	printf("Güzel!\nŞimdi ihtiyara gidip 2 yılan yumurtasını verebilirsin\n");
																	intmagaragorevi1=3;
																}
																
																break;
															}
														
														}
														
														printf("Burada işin bittiğine göre hızla dışarı çıkıyorsun\n");
														system("PAUSE");
														system("CLS");
														
													}
													
													else if(kediotu==1){
														printf("");
													}
													
												}
												
												else if(intmagarayilan==2){ //Yılan kes
													printf("Hadi Başlayalım!\n"); //DÖVÜŞ EKLENECEK *****************************************
													break;
												}
												
												else if(intmagarayilan==3){ //Yılanlarla konuş
													
													if(intsurungenlekonusmayetenegi==1){ //Yılanla konuş
														printf("EKLENECEK\n"); //YILANLA KONUŞMA EKLENECEK **************************************
													}
													
													else{ //Yılanla konuşamama
														printf("Yılanlarla konuşmak için sürüngen dilini öğrenmelisin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
												}
												
												else if(intmagarayilan==4){ //YILANLARA ÖL
													printf("Yolun sonuna geldik %s...\n",isim);
													system("PAUSE");
													system("CLS");
													printf("Kararını verdin.\nBirden fazla Ölüm Yılanının zehrini damarlarında hissetmen sadece birkaç saniye aldı\n");
													printf("Canın çok yandı. Ama sonunda...\n");
													system("PAUSE");
													system("CLS");
													printf("--------------------------------------\nBu acımasız hayata gözlerini yumdun...\n--------------------------------------\n");
													printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
													printf("Tamamlanan Görevler: %d/%d\n");
													printf("Kazandığın Para: %d\n");
													printf("Harcadığın Para: %d\n");
													printf("--------------------------------------\n");
													printf("Yolun sonuna geldik %s...\n",isim);
													return 0;
												}
												
												else if(intmagarayilan==5){ //Geri dön
													printf("Mantıklı bir seçim...\n");
													system("PAUSE");
													system("CLS");
													break;
												}
												
											}
				
										}
										
										else if(intmagarasecim2==2){ //Mağaradan çıkış
											printf("Sağdan ilerledikçe bir gözüne yoğun bir ışık geliyor\nBurası mağaranın çıkışı olmalı\n");
											while(intmagara!=0){
												printf("Ne Yapacaksın?\n[1]Mağaradan çık\n[2]Geri dön\n");
												scanf("%d",&intmagarasecim6);
												system("CLS");
												
												if(intmagarasecim6==1){
													printf("Mağaradan çıktın.\n");
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
										printf("Sol taraftan ilerledikçe bir sıcaklık geldiğini hissediyorsun\n");
										printf("Artık daha aydınlık\nBir dakika\nNeden çığlık sesleri geliyor?\n");
										system("PAUSE");
										system("CLS");
										printf("Biraz daha ilerledikçe sıcaklık, aydınlık ve anlam veremediğin şekilde çığlık sesleri artıyor\n");
										system("PAUSE");
										system("CLS");
									}
									
									intmagarasolsecimi=1;
									
									while(intmagara!=0){
										printf("Bir kapı gördün\n[1]Kapıya doğru git\n[2]Düz git(İntihar et)\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim3);
										system("CLS");
										
										if(intmagarasecim3==1){ //Kapıya gitmek
											srand(time(NULL));
											intmagaraalevsans1=rand()%10;
											
											if(intmagaraalevsans1>=0 && intmagaraalevsans1<5){ //Şansa yakalanmadı
												srand(time(NULL));
												intmagaraalevsans2=rand()%10;
												
												if(intmagaraalevsans2>=0 && intmagaraalevsans2<5){
													printf("Olamaz! Kapı açılıyor...\n");
													system("PAUSE");
													system("CLS");
													printf("Kapı açılırken aniden kapının arkasına saklandın\nDışarıya koyu tonlarda kıyafet giymiş, uzun boylu biri çıktı ve koşarak gözden kayboldu\n");
													printf("Tam olarak ne olduğunu tanımlayamasan da insana benzediği aşikar\n");
													system("PAUSE");
													system("CLS");
													printf("Aceleyle çıktığı için kapıyı açık bıraktı\n");
												}
												
												else{
													printf("Kapının açık olduğunu gördün\n");
													system("PAUSE");
													system("CLS");
												}
												
												printf("Hemen kapıdan içeri girdin ve mağaranın devam ettiğini gördün\n");
												printf("Yerde bir merdiven var. Burası aşağı iniyor\n");
												system("PAUSE");
												system("CLS");
												while(intmagara!=0){
													printf("Seçimini Yap\n");
													printf("[1]Merdivenden aşağı in\n[2]Düz git\n[3]Geri dön\n");
													scanf("%d",&intmagaraalevsecim1);
													system("CLS");
													
													if(intmagaraalevsecim1==1){ //Merdivenden in
														printf("Merdivenden aşağı iniyorsun\n");
														printf("Ortalıkta hiçkimse yok\nSadece 1 adet sandık ve bir masa üzerinde yarım şarap şişesi...\n");
														system("PAUSE");
														system("CLS");
														printf("Sandığın kilitli olduğunu görüyorsun\n");
														
														if(intmagaragorevi1==4 && intmagararuyaittirme==0){
															
															while(intmagara!=0){
																printf("[1]Sandığı ittir\n[2]Vazgeç\n");
																scanf("%d",&intmagarasecim9);
																system("CLS");
																
																if(intmagarasecim9==1){
																	printf("Sandığı boş bir yere doğru ittiriyorsun ve aşağı açılan bir yolun olduğunu görüyorsun\n");
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
																printf("[1]Açılan yoldan git\n[2]Vazgeç\n");
																scanf("%d",&intmagarasecim10);
																system("CLS");
																
																if(intmagarasecim10==1){
																	printf("İlerledikçe etrafa mavi yeşil ve sarı ışık veren birçok çiçek türü görüyorsun\n");
																	printf("Bir mağarada bunların olması garip...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("İleride bir adam var ve boş boş duvara bakıyor\n");
																	printf("Onunla iletişime geçemiyorsun\n(İLERİDE GÖREV OLARAK EKLENECEK)\n"); //YENİ BİR GÖREV
																}
																
																else if(intmagarasecim10==2){
																	break;
																}
				
															}
															
														}
														
														while(intmagara!=0){
															printf("[1]Sandığı aç\n[2]Sandığı zorla\n[3]Masayı incele\n[4]Yukarı çık\n");
															scanf("%d",&intmagaraalevsecim2);
															system("CLS");
														
															if(intmagaraalevsecim2==1){ //Sandığın kilidini aç
																
																if(intmagarasandiksayaci==0){
																	
																	if(intalevanahtar==1){ //Sandıkların kilidini aç
																		printf("Sandığı açtın!!\n");
																		printf("Sandıktan 50 adet Tahta Ok ve 1 adet Uzun Kılıç aldın\n");
																		ok[0]+=50;
																		kil[1]=1;
																		intmagarasandiksayaci=1;
																	}
																	
																	else{ //Anahtarsız açmaya çalışmak
																		printf("Anahtar olmadan kilidi açamazsın\n");
																	}
																	
																}
																
																else{ //Sandık zaten açılmış
																	printf("Sandıktaki her şeyi topladın!\n");
																}
															
															}
															
															else if(intmagaraalevsecim2==2){ //Sandıkları zorla
																printf("Sandığı tüm gücünle zorladın ama başaramadın\nHatta biraz ses yaptın\n");
																srand(time(NULL));
																intmagarasandiksans=rand()%10;
																
																if(intmagarasandiksans==0){
																	printf("Sandığı açamaman yetmezmiş gibi bir de bileğine zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldı!!\n");	
																}
																
																else if(intmagarasandiksans==1){
																	printf("Sandığı açamaman yetmezmiş gibi bir de parmağına zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldı!!\n");	
																}
																
																else if(intmagarasandiksans==2){
																	printf("Sandığı açamaman yetmezmiş gibi bir de beline zarar verdin\n");
																	can-=10;
																	printf("10 Can Azaldı!!\n");	
																}
																
															}
															
															else if(intmagaraalevsecim2==3){ //Masayı incele
																printf("Masaya şöyle iyice bir bakınca şişelerin altında sıkıştırılmış bir kağıt parçası buldun\n");
																printf("Kağıdı okumaya başladın...\n");
																system("PAUSE");
																system("CLS");
																printf("------------------------------------HAFTALIK RAPOR------------------------------------\n");
																printf("İş: Suçluların Cezalandırılması\n");
																printf("Konum: İntihar Mağarası 1.Kat / 1.Oda\n");
																printf("1.Kişi'nin İşlediği Suç: Hırsızlık (12800 Altın)\n");
																printf("2.Kişi'nin İşlediği Suç: Çarşıda kavga çıkarma ve iki kişinin ölümüne sebep olma\n");
																printf("3.Kişi'nin İşlediği Suç: Arena'da hile yapma\n");
																printf("Cezalandırma işlemi: Canlı canlı yakma\n");
																printf("Rapor No: 10041\n");
																printf("--------------------------------------Q9822VMR5---------------------------------------\n");
																system("PAUSE");
																system("CLS");
																
																printf("Kağıdı okuyunca ürperdin\nBurada daha fazla kalmanın mantığını bulmaya çalışıyorsun\nMerak hayatından önemli mi?\n");
																system("PAUSE");
																system("CLS");
																printf("Bir söylentiye göre bu raporda yazılan kişiler sadece suçluların yuzde 1'i\n");
																system("PAUSE");
																system("CLS");
																
																if(intalevanahtar==0){
																	printf("Kağıdı yerine bıraktın ve şarap şişesini incelemeye başladın\nŞişeyi biraz sallayınca içinde bir şey olduğunu anladın\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Tabi ya, anahtar!\n");
																	printf("Anahtarı buldun!\n");
																	intalevanahtar=1;
																	system("PAUSE");
																	system("CLS");
																}
															}
															
															else if(intmagaraalevsecim2==4){ //Yukarı Çık
																break;
															}
															
														}
														
													}
													
													else if(intmagaraalevsecim1==2){ //Düz git
														
														intmagarahizlakac=0;
														
														printf("İlerledikçe çığlıklar artıyor\n");
														
														if(intalevanahtar==1){
															printf("O kağıt parçasını okuduktan sonra bu çığlıkların nereden ve kimden geldiğini daha iyi anlıyorsun\n");
														}
														
														system("PAUSE");
														system("CLS");
														printf("İlerlerken büyükçe bir çiyan yolunu kesti\n");
														
														if(intboceklekonusmayetenegi==1){
															printf("Böcekle konuş\n");
														}
														
														else{
															printf("Böcekçe bilmediğin için onunla iletişime geçemiyorsun\nÇiyan yolundan çekiliyor\n");
															system("PAUSE");
															system("CLS");
														}
														
														printf("4 tane koyu renk kıyafetli insansı yaratıklar görüyorsun\nAma burada durdukça başın ağrıyor\n");
														printf("Çünkü bu çığlık sesleri dayanılacak gibi değil\nYoksa...\n");
														system("PAUSE");
														system("CLS");
														printf("Evet. Bu yaratıklar ya insan değil ya da sağır\nHenüz çözemedin\n");
														system("PAUSE");
														system("CLS");
														printf("Suçluların cezasını vermekle yükümlüler görüldüğü üzere...\nManzara korkunç\n");
														printf("İnsanları canlı canlı ateşe atmaktan başka bir şey yapmıyorlar şu anda\n");
														system("PAUSE");
														system("CLS");
														printf("O da ne!!\nAralarından biri seni gördü!!\n");
														printf("[1]Kaç\n[2]Kendini savun\n");
														
														scanf("%d",&intmagaraalevsecim3);
														system("CLS");
														
														if(intmagaraalevsecim3==1){
															printf("Hızla uzaklaşıyorsun\nKapının olduğu yere geri geldin\n");
															
															while(intmagara!=0){
																
																if(intmagarahizlakac==1){
																	break;
																}
																
																printf("[1]Merdivenden in\n[2]Biraz soluklan\n");
																scanf("%d",&intmagaraalevsecim4);
																system("CLS");
																
																if(intmagaraalevsecim4==1){
																	printf("Hızla merdivenden aşağı indin\n");
																	system("PAUSE");
																	system("CLS");
																	printf("[1]Sandığa saklan\n[2]Şarap şişesini insansının kafasında patlat\n");
																	scanf("%d",&intmagaraalevsecim5);
																	system("CLS");
																	
																	while(intmagara!=0){
																		
																		if(intmagaraalevsecim5==1){
																		
																			if(intmagarasandiksayaci==1){
																				printf("Sandığa saklandın ve bir süre bekledin\nO aptal insansı seni bulamadı\n");
																				printf("Hızla yukarı çıkıyorsun...\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{
																				printf("Sandık kilitli!!\nİnsansı hızla merdivenden indi\n");
																				intmagarahizlakac=1;
																				system("PAUSE");
																				system("CLS");
																				printf("Bir pençe darbesi aldın\n");
																				can-=20;
																				
																				if(can>=50){ //Yara sıyırdı kalkıp devam etti
																					printf("Yara sıyırdığı için fazla zarar görmeyip insansıyı ittin ve yere düştü\nHemen oradan uzaklaştın\n");	
																					system("PAUSE");
																					system("CLS");
																					break;
																				}
																				
																				else{ //Yere düştü bayıldı
																					printf("Yere düştün, dayanamayıp bayıldın\n"); //DÜZENLENECEK REHİN ALINACAK ********************
																					return 0;
																				}
																				
																			}
				
																		}
																		
																		else if(intmagaraalevsecim5==2){
																			printf("İnsansı merdivenden indiği gibi kafasında şişeyi patlattın\nHızla yukarı çıktın...\nPeşinde kimse yok artık...\n");
																			system("PAUSE");
																			system("CLS");
																			intmagarahizlakac=1;
																			break;
																		}
																		
																		else{
																			printf("Yanlış bir hareket yapmanın sırası değil!\n");
																			system("PAUSE");
																			system("CLS");
																			printf("Bir pençe darbesi aldın\n");
																			can-=20;
																			system("PAUSE");
																			system("CLS");
																			printf("-20 Can\n");
																			system("PAUSE");
																			system("CLS");
																			
																			if(can>=20){ //Yara sıyırdı kalkıp devam etti
																				printf("Yara sıyırdığı için fazla zarar görmeyip insansıyı ittin ve yere düştü\nYukarı çıktın\nGörünüşe göre peşini bıraktılar\n");	
																				system("PAUSE");
																				system("CLS");
																				break;
																			}
																			
																			else{ //Yere düştü bayıldı
																				printf("Yere düştün, dayanamayıp bayıldın\n"); //DÜZENLENECEK REHİN ALINACAK **************************
																				return 0;
																			}
																			
																		}
																		
																	}
																	
																}
																
																else if(intmagaraalevsecim4==2){ //Soluklan
																	printf("Biraz soluklandıktan sonra peşinden kimsenin gelmediğini farkettin\n");
																	break;
																}
																
																else{
																	printf("Yanlış bir hareket yapmanın sırası değil!\n");
																	system("PAUSE");
																	system("CLS");
																	printf("Bir pençe darbesi aldın\n");
																	can-=20;
																	system("PAUSE");
																	system("CLS");
																	printf("-20 Can\n");
																	system("PAUSE");
																	system("CLS");
																	
																	if(can>=20){ //Yara sıyırdı kalkıp devam etti
																		printf("Yara sıyırdığı için fazla zarar görmeyip insansıyı ittin ve yere düştü\nGörünüşe göre peşini bıraktılar\n");	
																		system("PAUSE");
																		system("CLS");
																		break;
																	}
																	
																	else{ //Yere düştü bayıldı
																		printf("Yere düştün, dayanamayıp bayıldın\n"); //DÜZENLENECEK REHİN ALINACAK **************************
																		return 0;
																	}
																	
																}
															
															}
															
														}
														
														else if(intmagaraalevsecim3==2){ //Kendini savun DÖVÜŞ EKLENECEK **************
															printf("KENDİNİ SAVUNMA EKLENECEK\n");
														}
														
														else{
															printf("Yanlış bir hareket yapmanın sırası değil!\n");
															system("PAUSE");
															system("CLS");
															printf("Bir pençe darbesi aldın\n");
															can-=20;
															system("PAUSE");
															system("CLS");
															printf("-20 Can\n");
															system("PAUSE");
															system("CLS");
																	
															if(can>=20){ //Yara sıyırdı kalkıp devam etti
																printf("Yara sıyırdığı için fazla zarar görmeyip insansıyı ittin ve yere düştü\nHemen oradan uzaklaştın\n");	
																system("PAUSE");
																system("CLS");
																break;
															}
																
															else{ //Yere düştü bayıldı
																printf("Yere düştün, dayanamayıp bayıldın\n"); //DÜZENLENECEK REHİN ALINACAK **************************
																return 0;
															}
															
														}
															
													}
													
													else if(intmagaraalevsecim1==3){ //Geri dön
														break;
													}
													
												}
											}
											
											else{ //Şansa yakalandı
												
												if(intmagarateklif1sayac==0){
													printf("Olamaz! Kapı bir anda açılıyor...\n");
													system("PAUSE");
													system("CLS");
													printf("Şanssızsın!\nO insansı yaratık seni farketti\nAma saldırmak yerine konuşmayı tercih etti\n");
													system("PAUSE");
													system("CLS");
													printf("-Hey! Sen kimsin?\n");
													system("PAUSE");
													system("CLS");
													printf("-Ben %s. Peki sen kimsin?\n",isim);
													system("PAUSE");
													system("CLS");
													printf("-Sen benimle dalga mı geçiyorsun? Buraya gelen bir yabancının aptal olması gerekir.\nBuraya geldiysen bunun bir bedeli olacak.\n");
													system("PAUSE");
													system("CLS");
													printf("-Anlaşıldı, seninle fazla konuşulmuyor. Teklifin ne?\n");
													system("PAUSE");
													system("CLS");
													printf("-Bana 50 altın ver, bu konuyu kapatalım. Ha, bu arada, o kapıdan içeri girmeye çalışma sakın.\nEğer bir daha seni buralarda görürsem teklif olmayacak!\n");
													system("PAUSE");
													system("CLS");
													printf("-Düşünmeme izin ver...\n");
													system("PAUSE");
													system("CLS");
													while(intmagara!=0){
														printf("[1]Teklifi kabul et(-50 Altın)\n[2]Teklifi reddet(+40 Onur)\n");
														scanf("%d",&intmagarateklif1);
														system("CLS");
														
														if(intmagarateklif1==1){
															printf("-Tamam, teklifi kabul ediyorum.\n");
															altin-=50;
															system("PAUSE");
															system("CLS");
															printf("-50 Altın\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-Güzel, akıllı insanları severim. Bir daha seni buralarda görmeyim.\n");
															system("PAUSE");
															system("CLS");
															break;
														}
														
														else if(intmagarateklif1==2){
															printf("-Ne olduğu belli olmayan biri için değil 50 altın, 1 altın bile harcamam.\n");
															onur+=40;
															printf("+40 Onur\n");
															intmagarateklif1sayac=1;
															system("PAUSE");
															system("CLS");
															printf("-Peki yabancı. Fazlasıyla cesursun. Ancak cesaretle aptallık arasında ince bir çizgi vardır bilir misin?\nAptallar hakettiğini bulsun o zaman!\n");
															printf("(Kılıcını çıkarır)\n");
															system("PAUSE");
															system("CLS");
															printf("DÖVÜŞ EKLENECEK\n"); //DÖVÜŞ EKLENECEK
															break;
														}
														
														else{
															printf("İnsansı sinirlenmeye başlıyor\n");
															system("PAUSE");
															system("CLS");
														}
														
													}
													
													break;
													
												}
												
												else{
													printf("-Yine mi sen! Gel bakalım.\n");
													printf("(Kılıcını çıkarır)\n");
													system("PAUSE");
													system("CLS");
													printf("DÖVÜŞ EKLENECEK\n"); //DÖVÜŞ EKLENECEK
													break;	
												}
												
											}
											
										}
										
										else if(intmagarasecim3==2){ //Alev ölüm
											printf("Yürüdükçe çığlık seslerinin azaldığını, ancak aydınlığın arttığını farkediyorsun\n");
											system("PAUSE");
											system("CLS");
											printf("Ve işte geldin. Kendini alevlerin ortasına atacaksın\n");
											printf("Hayatın gözünün önünden geçiyor. Başarıların, başarısızlıkların...\n");
											system("PAUSE");
											system("CLS");
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Kendini alevlerin ortasına attın. Belki de birileri duymuştur son çığlıklarını...\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu acımasız hayata gözlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
											printf("Tamamlanan Görevler: %d/%d\n");
											printf("Kazandığın Para: %d\n");
											printf("Harcadığın Para: %d\n");
											printf("--------------------------------------\n");
											return 0;
											
										}
										
										else if(intmagarasecim3==3){ //Geri dön
											break;
										}
									
									}
									
								}
								
								else if(intmagarayolsecim2==3){ //Sağ
									printf("Sağa doğru hareket ettin\n");
									while(intmagara!=0){
										printf("[1]Hemen bir ip bul ve sonsuzluğa kavuş\n[2]Etrafta biraz gezin\n[3]Geri dön\n");
										scanf("%d",&intmagarasecim4);
										system("CLS");
										
										if(intmagarasecim4==1){ //İp ölüm
											printf("Yolun sonuna geldik %s...\n",isim);
											system("PAUSE");
											system("CLS");
											printf("Kararını verdin. Acısız bir ölüm oldu\n");
											system("PAUSE");
											system("CLS");
											printf("--------------------------------------\nBu acımasız hayata gözlerini yumdun...\n--------------------------------------\n");
											printf("Toplam Geçirilen Gün: %d\n",gun); //GÜNÜ EKLE
											printf("Tamamlanan Görevler: %d/%d\n");
											printf("Kazandığın Para: %d\n");
											printf("Harcadığın Para: %d\n");
											printf("--------------------------------------\n");
											printf("Yolun sonuna geldik %s...\n",isim);
											return 0;
										}
										
										else if(intmagarasecim4==2){ //Gezin
										
											if(intmagaragezinsecimi==0){
												printf("Bir meşale buldun ve artık etrafı daha iyi görüyorsun\n");
												printf("Korkunç bir manzara...\nHeryerde ipe asılmış koca hayatlar...\n");
												printf("Biraz gezindikten sonra birdenbire konuşma sesleri duyuyorsun\n");
											}
											
											intmagaragezinsecimi=1;
											
											while(intmagara!=0){
											
												if(intmagaragorevi1==0){
													printf("[1]Sese doğru git\n[2]Gezinmeye devam et\n[3]Geri dön\n");
												}
											
												else{
													printf("[1]İhtiyar Büyücünün yanına git\n[2]Gezinmeye devam et\n[3]Geri dön\n");	
												}
											
												scanf("%d",&intmagarasecim5);
								            	system("CLS");
												
												if(intmagarasecim5==1){ //Sese git yılan görevi
													if(intmagaragorevi1==0){ //Mağara görevi yapılmadı ilk defa gelindi 
														printf("Mağaranın içinde ilerledikçe sesleri daha net duyuyorsun\nÜrpertici\n");
														printf("Oraya gitmek istediğinden emin misin?\n[1]Devam et\n[2]Ayrıl\n");
														scanf("%d",&intmagaragorevkarar);
														system("CLS");
														
														if(intmagaragorevkarar==1){ //Göreve gir
															printf("Gelen seslerin insan sesi olduğunu anlıyorsun ama konuşan her kimse senin bilmediğin bir dili konuşuyor\n");
															printf("En son çocukluğunda bu dili duymuştun\n");
															system("PAUSE");
															system("CLS");
															printf("İlerledikçe 7 tane meşalenin ortasında oturan 80 Yaşlarında saçlarına ve sakallarına aklar düşmüş bir adamı gördün.\nOna yaklaşıyorsun...\n");
															printf("Bir anda\n-DUR!\ndiye bağırdı\n");
															system("PAUSE");
															system("CLS");
															printf("Birkaç dakika sonra oturduğu yerden kalktı ve yanına yaklaştı\n");
															system("PAUSE");
															system("CLS");
															printf("Hayattan bıkmış bir biçimde,\n");
															printf("-Hoşgeldin %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Merhaba. İsmimi nereden biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Buraya geleceğin belliydi. Her özel savaşçı buraya gelmiştir. Sen de onlardan birisin işte...\n");
															system("PAUSE");
															system("CLS");
															printf("-Az önce konuştuğun dil, yaptığın ritüelimsi şeyler. Bunların açıklaması nedir?\n");
															system("PAUSE");
															system("CLS");
															printf("-Her zaman böyle meraklı mısındır %s?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Yeri geldiğinde herkes biraz meraklı olmalı. Her neyse, gerçekten burada ne yapıyorsun?\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben uzun yıllardır burada yaşarım.\n");
															system("PAUSE");
															system("CLS");
															printf("-Burada mı? Bir mağarada öyle mi?\n");
															system("PAUSE");
															system("CLS");
															printf("-Evet. Dışarıda işler hiç iyi gitmiyor %s.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Neler biliyorsun ihtiyar?\n");
															system("PAUSE");
															system("CLS");
															printf("-Zamanı geldiğinde öğreneceksin. Ama şuan senden yapmanı istediğim bir şey var.\n");
															system("PAUSE");
															system("CLS");
															printf("-Ben yaşlı bir adamım %s, güçlerim ve yeteneklerim sınırlı.\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Dinliyorum ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-Güçlerim bu gezegenin yok olmaması için gerekli %s. Bunu çok kişiye anlattım ama inanmadılar.\nHaksız değiller tabi, ölmekte olan bir ihtiyara kim inanır ki?\n",isim);
															system("PAUSE");
															system("CLS");
															printf("-Sadede gel ihtiyar.\n");
															system("PAUSE");
															system("CLS");
															printf("-Bende olan bu laneti çözebilmem için bana 2 tane yılan yumurtası gerekli.\nYılan dediğime bakma, mağaradaki renk değiştiren Ölüm Yılanlarından bahsediyorum.\n");
															system("PAUSE");
															system("CLS");
															printf("-Eğer bana 2 tane Ölüm Yılanı yumurtası getirirsen 100 altın ile ödüllendirileceksin.\nNe düşünüyorsun?\n");
															while(intmagara!=0){
																printf("Görevi;\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
																
																if(intmagaragorev1secimi==1){ //Görevi kabul et
																	printf("-Mağaranın girişinde yol üçe ayrılır. Buraya geldiğine göre sağ tarafı seçmişsin.\nHerneyse, mağaranın girişinden düz git, yol ikiye ayrılacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, çarşıda bulabileceğin 'uyutucu etkiye sahip kediotu'nu yılanların ortasına atarsan işin kolaylaşabilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anladım. Görüşmek üzere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Görüşmek üzere...\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-----------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVİ ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //Görevi reddet
																	printf("-Şuan müsait değilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlıyorum evlat. Yalnız, bir an önce müsait olursan iyi olur.\n");
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
													
													else if(intmagaragorevi1==1){ //Mağara görevi dinlendi karar aşamasına geç
														while(intmagara!=0){
																printf("Görevi\n[1]Kabul et\n[2]Reddet\n");
																scanf("%d",&intmagaragorev1secimi);
																system("CLS");
															
																if(intmagaragorev1secimi==1){ //Görevi kabul et
																	printf("Mağaranın girişinde yol üçe ayrılır. Buraya geldiğine göre sağ tarafı seçmişsin.\nHerneyse, mağaranın girişinden düz git, yol ikiye ayrılacak. Sol tarafa git.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Ha! Son olarak, çarşıda bulabileceğin 'uyutucu etkiye sahip kediotu'nu yılanların ortasına atarsan işin kolaylaşabilir.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Anladım. Görüşmek üzere ihtiyar.\n");
																	system("PAUSE");
																	system("CLS");
																	printf("-Görüşmek üzere...\n");
																	printf("-----------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVİ ALINDI\n-----------------------------------\n");
																	intmagaragorevi1=2;
																	break;
																}
																
																else if(intmagaragorev1secimi==2){ //Görevi reddet
																	printf("-Şuan müsait değilim ihtiyar.\n");	
																	system("PAUSE");
																	system("CLS");
																	printf("-Anlıyorum evlat. Yalnız, bir an önce müsait olursan iyi olur.\n");
																	system("PAUSE");
																	system("CLS");
																	intmagaragorevi1=1;
																	break;
																}
																
															}
															
													}
													
													else if(intmagaragorevi1==2){ //Mağara görevi alındı büyücüyle konuşma
														printf("-Hoşgeldin %s.\n",isim);
														printf("-Sadece geziniyorum\n");
													}
													
													else if(intmagaragorevi1==3 && yilanyumurtasi>=2){ //Mağara görevi tamamlanıyor
														printf("-İşte. 2 adet Ölüm Yılanı yumurtası.\n");
														system("PAUSE");
														system("CLS");
														yilanyumurtasi-=2;
														printf("-Güzel. Teşekkür ederim %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Ne yapacaksın bu yumurtaları ihtiyar?\n");
														system("PAUSE");
														system("CLS");
														printf("-Dedim ya, güçlerimin kaybolmamasını sağlayacak iksiri hazırlayacağım.\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya bildiklerin?\n");
														system("PAUSE");
														system("CLS");
														printf("-Tamam. Anlatacağım.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bu evrende kaç gezegen vardır bilir misin evlat?\n");
														system("PAUSE");
														system("CLS");
														printf("-Bazı söylentiler duydum çocukluğumdan beri\nAma doğrusunu bilmiyorum.\n");
														system("PAUSE");
														system("CLS");
														printf("-Evrenimizde 7 yarı-tanrı, 7 gezegen vardır\nBunlar; Yaşam ve doğa gezegeni\nBilgi gezegeni\nAşk ve Şehvet gezegeni\nTicaret gezegeni\nSavaş gezegeni ve Zulüm gezegeni\n");
														system("PAUSE");
														system("CLS");
														printf("-Peki ya 7.gezegen?\n");
														system("PAUSE");
														system("CLS");
														printf("-7. gezegen ya! Doğru. Fakat ben her şeyi bilemem %s.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Her gezegenin kendi içinde bir dengesi vardır. Maalesef son zamanlarda bu denge bozuluyor.\n");
														system("PAUSE");
														system("CLS");
														printf("-Neden?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar...\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar mı?\nOnlar da ne?\n");
														system("PAUSE");
														system("CLS");
														printf("-Masterlar yarı-tanrılar tarafından görevlendirildi.\nGezegenler arası portalları ve bu portallardan geçenleri kontrol ederler.\n");
														system("PAUSE");
														system("CLS");
														printf("-Bunda bir sorun yok. Ancak son zamanlarda portallardan başka gezegenlere geçmek daha da kolaylaştı.\nArtık gelen geçen belli değil. Gezegenlerin dengesinin bozulmasının bir sebebi bu.\n");
														system("PAUSE");
														system("CLS");
														printf("-Çocukken bizi korkutmak için okutulan kitaplardaki yaratıkların bazılarını bu gezegende gördüm %s.\nOnların burada olmaması gerek.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("-Hatta bir kere...üzere...\n");
														system("PAUSE");
														system("CLS");
														printf("(Büyücü iksiri hazırlarken kokusundan etkilendin)\n");
														system("PAUSE");
														system("CLS");
														printf("-En kısa zamanda dediğinizi yapacağım.\nŞimdi gitmem gerek.\n");
														system("PAUSE");
														system("CLS");
														printf("-Güzel. Hadi kolay gelsin!\n");
														system("PAUSE");
														system("CLS");
														printf("İntihar mağarasına doğru koşuyorsun\nHava o kadar sıcak ki mağaranın soğuğu bile serinletemiyor\n");
														system("PAUSE");
														system("CLS");
														printf("Sola doğru gidiyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Kapının açık olduğunu görüp içeri giriyorsun\nMerdivenden iniyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Odada üzerinde şarap şişesinden başka hiçbir şey olmayan bir masa ve bir sandık görüyorsun\n");
														system("PAUSE");
														system("CLS");
														printf("Sandığı tüm gücünle ittirirken...\n");
														system("PAUSE");
														system("CLS");
														printf("...\n");
														system("PAUSE");
														system("CLS");
														printf("(Ayılıyorsun)\n");
														system("PAUSE");
														system("CLS");
														printf("-Dediğim gibi %s. Dışarıda yaşıyorsan, dikkatli olacaksın.\n",isim);
														system("PAUSE");
														system("CLS");
														printf("(Öksürük sesi)\nVerdiğin bilgiler için teşekkür ederim ihtiyar.\nBen kalkayım artık.\n");
														system("PAUSE");
														system("CLS");
														printf("Tamam. Ha! Az daha ödülü vermeyi unutuyordum.\n");
														system("PAUSE");
														system("CLS");
														printf("İşte söz verdiğim gibi, 100 altın.\n");
														altin+=100;
														onur+=50;
														printf("+100 Altın\n");
														system("PAUSE");
														system("CLS");
														printf("---------------------------------------\nBÜYÜCÜNÜN YUMURTALARI GÖREVİ TAMAMLANDI\n---------------------------------------\n");
														intmagaragorevi1=4;
														printf("+50 Onur\n");
														system("PAUSE");
														system("CLS");
														printf("Artık büyücüye gelip bilgi alabilirsin!!\n");
														system("PAUSE");
														system("CLS");
													}
													
													else if(intmagaragorevi1==4){ //Görev tamamen bitti büyücü ile konuşma para karşılığı bilgi olabilir
														
														while(intmagara!=0){
															printf("Hoşgeldin %s\nSenin için ne yapabilirim?\n",isim);
															printf("[1]Elinde hangi bilgiler varmış görelim\n[2]Yetenek üretmek istiyorum\n[3]Verdiğin bilgilerin ne işe yaradığını söyle\n[4]Ayrıl\n");
															scanf("%d",&intmagarasecim8);
															system("CLS");
															
															if(intmagarasecim8==1){
																printf("DÜZENLENECEK\n");//DÜZENLENECEK******************************************
																while(intmagara!=0){
																	
																	intbilgisayfa=1;
																	
																	if(intbilgisayfa==1){
																		
																		printf("Elimdeki Bilgiler\n");
																		
																		if(bilgi[0]==0){
																			printf("[1] Yedinci Gezegenin Adı: X Altın\n");
																		}
																		
																		else if(bilgi[0]==1){
																			printf("[1] Yedinci Gezegenin Adı (ALINDI)\n");	
																		}
																		
																		if(bilgi[1]==0){
																			printf("[2] Doğa ve Yaşam Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[1]==1){
																			printf("[2] Doğa ve Yaşam Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[2]==0){
																			printf("[3] Bilgi Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[2]==1){
																			printf("[3] Bilgi Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[3]==0){
																			printf("[4] Aşk ve Şehvet Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[3]==1){
																			printf("[4] Aşk ve Şehvet Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[4]==0){
																			printf("[5] Ticaret Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[4]==1){
																			printf("[5] Ticaret Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[5]==0){
																			printf("[6] Savaş Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[5]==1){
																			printf("[6] Savaş Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[6]==0){
																			printf("[7] Zulüm Gezegeninin Yarı Tanrısının Özellikleri: X Altın\n");
																		}
																		
																		else if(bilgi[6]==1){
																			printf("[7] Zulüm Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
																		}
																		
																		if(bilgi[7]==0){
																			printf("[8] X Gezegeninin Yarı Tanrısının Özellikleri(Bunu açmak için Yedinci Gezegenin adını öğrenmelisin!!): X Altın\n");
																		}
																		
																		else if(bilgi[7]==1){
																			printf("[8] X Gezegeninin Yarı Tanrısının Özellikleri (ALINDI)\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																				printf("Satın aldın\n");
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
																			printf("[1] İlk seçenek\n");
																			printf("[2] 1.Sayfaya Geç\n");
																			printf("----------------------------------------------------2.SAYFA----------------------------------------------------\n");
																			printf("Seçimini Yap\n");
																			scanf("%d",&intbilgisec2);
																			system("CLS");
																			
																			if(intbilgisec2==1){
																				printf("İlk seçeneği aldın (DENEME)\n");
																			}
																			
																			else if(intbilgisec2==2){
																				intbilgisayfa=1;
																				break;
																			}
																			
																		}
																		
																	}
																	
																} //while bitişi
																
															}
															
															else if(intmagarasecim8==2){
																printf("DÜZENLENECEK\n"); //DÜZENLENECEK
															}
															
															else if(intmagarasecim8==3){
																printf("Verdiğim bilgileri birleştirerek yeni yetenekler üretip kullanabilirsin\n");
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
														printf("Etrafta böceklerin olduğunu görünce iğreniyorsun.\n");
														printf("O da ne!!\nYaklaşık 2 Metre boyunda kocaman bir hamam böceği!!\nİğrenç...\n");
														intbocekgorme=1;
													}
													
													else{
														printf("Hamam böceği hala orada\n");	
													}
				
													printf("[1]Saldır\n[2]Saklan\n[3]Kaç\n");
													scanf("%d",&intmagarasecimbocek1);
													system("CLS");
													
													if(intmagarasecimbocek1==1){ //Saldır EKLENECEK
															
													}
													
													else if(intmagarasecimbocek1==2){ //Saklan
														printf("Hemen bir taşın arkasına saklandın\n");
														if(intmagaraokalma==0){
															printf("Şansa bak!!\nYanında yakın zamanda kendi hayatına kıymış birinin oklarını buldun\n");
															printf("Kıyafetlerine baktığında onun bir savaşçının cesedi olduğunu anladın\nOklar hala kullanılabilir durumda\n");
															printf("[1]Okları topla(Onurun düşer)\n[2]Görmezden gel\n");
															scanf("%d",&intmagaraoktopla);
															system("CLS");
															
															if(intmagaraoktopla==1){ //Ok almaya çalıştı
																srand(time(NULL));
																intmagaraoktoplasans=rand()%10;
																
																if(intmagaraoktoplasans>=0 && intmagaraoktoplasans<8){
																	ok[0]+=50;
																	printf("Okları topladın ama galiba bir savaşçının oklarını çalmanın ne anlama geldiği hakkında bir fikrin yok!\n");
																	printf("Yaşasa da Yaşamasa da...\n");
																	onur-=30;
																	printf("30 Onur Kaybettin!\nSessizce uzaklaşıyorsun\n");
																	system("PAUSE");
																	system("CLS");
																}
																
																else{ //Ayağın kaydı
																	printf("Yere düşmüş sadağı yavaşça almaya çalışırken ayağın kaydı ve biraz ses yaptın!\n");
																	srand(time(NULL));
																	intmagarasesyapmasans=rand()%10;
																	
																	if(intmagarasesyapmasans>=0 && intmagarasesyapmasans<5){ 
																		ok[0]+=50;
																		printf("Neyseki hamam böceği bunu duymadı\nŞanslı günündesin...\n");
																		printf("Okları topladın ama galiba bir savaşçının oklarını çalmanın ne anlama geldiği hakkında bir fikrin yok!\n");
																		printf("Yaşasa da Yaşamasa da...\n");
																		onur-=30;
																		printf("30 Onur Kaybettin!\n");	
																	}
																	
																	else{
																		printf("Olamaz!\nHamam böceği bunu duymuş olmalı\n");
																		printf("Hemen karar ver!\n[1]Saklanmaya devam et\n[2]Hızlıca kaç\n");
																		scanf("%d",&intmagarabocekkac);
																		system("CLS");
																		
																		if(intmagarabocekkac==1){ //Saklanmaya devam
																			printf("Hamam böceği bugün tembel gününde. Seni umursamadı.\n");
																		}
																		
																		else if(intmagarabocekkac==2){ //Hızlıca Kaç
																			
																			if(hiz>100){
																				printf("Hız yeteneğin çok iyi olduğu için sıkıntısız bir şekilde ortamdan uzaklaştın\n");	
																			}
																			
																			else{
																				printf("Koşarken ayağın bir taşa takıldı ve yere düştün\n");
																				can-=20;
																				printf("20 Can Azaldı!!\n");
																			}
																			
																		}
																		
																	}
																	
																}	
																
															}
															
															else if(intmagaraoktopla==2){ //Ok almadı
																printf("Onurlu bir savaşçı olma yolunda önemli bir test\n");
																onur+=10;
																printf("10 Onur Kazandın!\n");
																printf("Buradan uzaklaşmanın tam zamanı\n");
																system("PAUSE");
																system("CLS");
																intmagaraokalma=1;
															}
														//	break;
														}
														
														else{
															printf("Hamam böceği seni duymuş olsa da pek de umursamadı\n");
															printf("Sessizce uzaklaşıyorsun\n");
															break;
														}
														
													}
													
													else if(intmagarasecimbocek1==3){ //Kaçmaya Çalıştın
														srand(time(NULL));
														intboceksans=rand()%2;
														
														if(intboceksans==0){ //Kaçtın
															printf("Kaçmayı başardığın için şanslısın\n");
														}
														
														else{ //Kaçamadın
															printf("Olamaz!!\nHamam böceği seni duymuş olmalı.\n[1]Onunla dovüş\n[2]Konuşmaya çalış\n");
															scanf("%d",&intmagarasecimbocek2);
															system("CLS");
															
															if(intmagarasecimbocek2==1){ //Dövüş EKLENECEK
															}	
															
															else if(intmagarasecimbocek2==2){ //Konuşmaya Çalış
																printf("Onunla konuşmaya çalıştığında biraz sakinleştiğini gördün.\n");
																
																if(intboceklekonusmayetenegi==1){ //Konuş
																	printf("Sana hikayesini anlatıyor. Duyduğuna göre ilk defa böcek dışında bir yaratıkla konuşuyor. Onun ilgisini çektin\n");
																	printf("GÖREV VEYA EVENT GELECEK\n"); //***************
																}
																
																else if(intboceklekonusmayetenegi==0){ //Konuşamayıp Kaçmak
																	printf("Bir dakika\nSen onun dilini bilmiyorsun ki!\nHamam böceğinin bir boşluğundan yararlanıp yavaşça ondan uzaklaşıyorsun\n");
																	printf("Buraya gelmeden önce onun dilini öğrensen iyi olur.\n");
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
								printf("Ne maceraydı ama!!\n");
							}
							
							printf("Bu ortamdan uzaklaştığın için kendini daha rahat hissediyorsun\n");
							break;
						}
					}
					
				break;
				
				case 7:
					
					if(din==0)
					{
						printf("Evde bir güzel dinlendin günün boş geçti ama yaraların tamamen iyileşti.");
						can=Mcan;
					}
					
					if(din==1)
					{
						printf("Evde oturmaktan çok sıkıldığın için dışarıda vakit geçirmeye karar verdin.");
						gun--;
					din=1;
					}
					
				break;
				
				case 8:
					
					printf("Talim alanına hoşgeldin! Hangi yeteneğini geliştirmek istersin?\n[1]Kılıç [2]Okçuluk [3]Büyücülük [4]Dayanıklılık [5]Hız [6]Max Can\n");
					scanf("%d",&talim);
					
					if(talim==1)
					{
							printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
							scanf("%d",&talim1);
						
						if(talim1==1)
						{
							hasar=hasar+5;
							printf("Kılıç ustalığın 5 arttı! Yeni kılıç ustalığınız=%d\n",hasar);
						}
						
						else if(talim1==2)
						{
							i=rand()%15;
							can=can-i;
							hasar=hasar+15;
							printf("Kılıç ustalığın 10 arttı ama canın %d azaldı!\nYeni kılıç ustalığın=%d\nMevcut canın=%d\n",i,hasar,can); 
						}
						
						else if(talim1==3)
						{
						    i=rand()%20;
						    j=i+15;
						  	can=can-j;
						  	hasar=hasar+25;
						  	printf("Kılıç ustalığın 25 arttı ama canın %d azaldı!\nYeni kılıç ustalığın=%d\nMevcut canın=%d\n",j,hasar,can);
						}
					}
					
					else if(talim==2)
					{
						printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
						scanf("%d",&talim2);
						
						if(talim2==1)
						{
							okyet=okyet+5;
							printf("Okçuluğun 5 arttı! Yeni okçuluğun=%d\n",ok);
						}
						
						else if(talim2==2)
						{
							i=rand()%15;
							can=can-i;
							okyet=okyet+15;
							printf("Okçuluğun 10 arttı ama canın %d azaldı!\nYeni okçuluğun=%d\nMevcut canın=%d\n",i,ok,can);
						}
						
						else if(talim2==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							okyet=okyet+25;
							printf("Okçuluğun 25 arttı ama canın %d azaldı!\nYeni okçuluğun=%d\nMevcut canın=%d\n",j,ok,can);
						}
					}
					
					else if(talim==3)
					{
						printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
						scanf("%d",&talim3);
						if(talim3==1)
						{
							buyuyet=buyuyet+5;
							printf("Büyü gücün 5 arttı! Yeni büyü gücünüz=%d\n",buyuyet);
						}
						
						else if(talim3==2)
						{
							i=rand()%15;
							can=can-i;
							buyuyet=buyuyet+15;
							printf("Büyü gücün 10 arttı ama canın %d azaldı!\nYeni büyü gücün=%d\nMevcut canın=%d\n",i,buyuyet,can);
						}
						
						else if(talim3==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							buyuyet=buyuyet+25;
							printf("Büyü gücün 25 arttı ama canın %d azaldı!\nYeni büyü gücün=%d\nMevcut canın=%d\n",j,buyuyet,can);
						}
					}
					
					else if(talim==4)
					{
						printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
						scanf("%d",&talim4);
						
						if(talim4==1)
						{
							def=def+5;
							printf("Dayanıklılığın 5 arttı! Yeni dayanıklılığın=%d\n",def);
						}
						
						else if(talim4==2)
						{
							i=rand()%15;
							can=can-i;
							def=def+15;
							printf("Dayanıklılığın 15 arttı ama canın %d azaldı!\nYeni dayanıklılığın=%d\nMevcut canın=%d\n",i,def,can);
						}
						
						else if(talim4==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							def=def+25;
							printf("Dayanıklılığın 25 arttı ama canın %d azaldı!\nYeni dayanıklılığın=%d\nMevcut canın=%d\n",j,def,can);
						}
					}
					
					else if(talim==5)
					{
						printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
						scanf("%d",&talim5);
						
						if(talim5==1)
						{
							hiz=hiz+5;
							printf("Hızın 5 arttı! yeni hızın=%d\n",hiz);
						}
						
						else if(talim5==2)
						{
							i=rand()%15;
							can=can-i;
							hiz=hiz+15;
							printf("Hızın 15 arttı ama canın %d azaldı!\nYeni hızın=%d\nMevcut canın=%d\n",i,hiz,can);
						}
						
						else if(talim5==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							hiz=hiz+25;
							printf("Hızın 25 arttı ama canın %d azaldı!\nYeni hızın=%d\nMevcut canın=%d\n",j,hiz,can);
						}
					}
					
					else if(talim==6)
					{
						printf("Ne kadar çalışacaksın [1]Hafif [2]Dengeli [3]Ağır\n");
						scanf("%d",&talim6);
						
						if(talim6==1)
						{
							Mcan=Mcan+5;
							printf("Maksimum canın 5 arttı! Yeni maksimum canın=%d\n",Mcan);
						}
						
						else if(talim6==2)
						{
							i=rand()%15;
							can=can-i;
							Mcan=Mcan+15;
							printf("Maksimum canın 15 arttı ama canın %d azaldı!\nYeni maksimum canın=%d\nMevcut canın=%d\n",i,Mcan,can);
						}
						
						else if(talim6==3)
						{
							i=rand()%20;
							j=i+15;
							can=can-j;
							Mcan=Mcan+25;
							printf("Maksimum canın 25 arttı ama canın %d azaldı!\nYeni maksimum canın=%d\nMevcut canın=%d\n",j,Mcan,can);
						}
					}
				
				break;
				
				case 9:
					
					hak=6;
					oyunsayac=0;
					srand(time(NULL)); 
					sanssayi = rand()%100;
					
					printf("Çarşıya hoşgeldin\n"); //PAZARLIK EKLENECEK(Karizma yeteneği) İSİMLER DEĞİŞECEK VE ÇEŞİTLENDİRİLECEK || Envanter geldiğinde hasar ve defans item alınınca ve envantere koyulduğunda artacak
					
					while(shp!=0)
					{
						printf("Ne yapmak istersin?\n");
						printf("[1]Çarşının sahibiyle konuş\n[2]Silah dükkanına git\n[3]Zırh dükkanına git\n[4]Büyü dükkanına git\n[5]İksir dükkanına git\n[6]Evcil hayvan dükkanına git\n[7]Aksesuar dükkanına git\n[8]Kuaföre git\n[9]Eşya sat\n[10]Çarşıdan ayrıl\n");
						scanf("%d",&duksec);
						
						if(duksec==1) //OYUN
						{
							printf("Çarşının sahibi ile konuşmaya gittin...\n");
							
							while(shp!=0)
							{
								printf("Biraz muhabbet ettikten sonra sana oynatacağı bir oyunu kazanman karşılığında bir kereliğine herhangi bir üründe\nyuzde 50 indirim teklif etti!!\n");
								printf("Ama eğer kaybedersen 50 Altınını alacak!!\nKabul ediyorsan 1'e etmiyorsan 2'ye bas\nSeçimini Yap...\n");
								scanf("%d",&indsec);
								
								if(indsec==1)
								{
									
									if(oyunsayac==1)
									{
										printf("Bugünlük hakkını kullandın!!\n");
										break;
									}
									printf("Oyun basit. 0 ile 100 arasında bir sayı belirleniyor. 5 tahmin hakkın var.\nİlk turda tahminin ile belirlenen sayı arasında 20 veya daha az fark varsa ikinci tura geçiyorsun.\n");
									printf("İkinci turda tahminin ile belirlenen sayı arasında 10 veya daha az fark varsa üçüncü tura geçiyorsun.\nGerisini sen buluyorsun.\nHadi Başlayalım!!\n\n");
									printf("1.TUR\n");
									hak=6;
									
									while(hak>0)
									{
										hak--;
										printf("Kalan hakkın: %d\n",hak);
										
										if(hak==0)
										{
											printf("Kaybettin!!\n");
											altin-=50;
											printf("Kalan altın: %d\n",altin);
											break;
										}
										printf("Bir sayı tahmin et: ");
										scanf("%d",&tahmin);
										
										if(sanssayi==tahmin)
										{
											printf("Kazandın!!\n");
											printf("Bir tane indirim hakkın var!!\n(Fiyatı yarısını hesapla)\n");
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
											printf("+2 Hak Kazandın!!\n");
											printf("İPUCU: Aradığın sayı %d ile %d arasında...\n",tahmin-20,tahmin+20);
											
											while(hak>0)
											{
												hak--;
												printf("Kalan hakkın: %d\n",hak);
												
												if(hak==0)
												{
													printf("Kaybettin!!\n");
													altin-=50;
													printf("Kalan altın: %d\n",altin);
													break;
												}
												printf("Bir sayı tahmin et: ");
												scanf("%d",&tahmin);
												
												if(sanssayi==tahmin)
												{
													printf("Kazandın!!\n");
													printf("Bir tane indirim hakkın var!!\n(Fiyatı yarısını hesapla)\n");
													indirim=1;
													hak=0;
													break;
												}
												
												else if(((tahmin-sanssayi<=10&&tahmin-sanssayi>0) || (sanssayi-tahmin<=10&&sanssayi-tahmin>0)) && hak!=1)
												{
													printf("3.TUR\n");
													hak+=2;
													printf("+2 Hak Kazandın!!\n");
													printf("İPUCU: Aradığın sayı %d ile %d arasında...\n",tahmin-10,tahmin+10);
													
													while(hak>0)
													{
														hak--;
														printf("Kalan hakkın: %d\n",hak);
														
														if(hak==0)
														{
															printf("Kaybettin!!\n");
															altin-=50;
															printf("Kalan altın: %d\n",altin);
															break;
														}
														printf("Bir sayı tahmin et: ");
														scanf("%d",&tahmin);
														
														if(sanssayi==tahmin)
														{
															printf("Kazandın!!\n");
															printf("Bir tane indirim hakkın var!!\n(Fiyatı yarısını hesapla)\n");
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
						
						else if(duksec==2) //SİLAH ÇEŞİTLERİ
						{
							
							while(shp!=0)
							{ 
								printf("[1]Kılıç\n[2]Balta\n[3]Mızrak ve Kargı\n[4]Yay ve Ok\n[5]Silah dükkanından çık\n");
								scanf("%d",&silsec);
								
								if(silsec==1) //KILIÇ ÇEŞİTLERİ 
								{
									printf("Kılıç Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kısa Kılıç(Hasarı 20 arttırır): 40 altın\n[2]Uzun Kılıç(Hasarı 30 arttırır): 60 altın\n[3]Tek Elli Ağır Kılıç(Hasarı 40 arttırır): 80 altın\n");
										printf("[4]Çift Elli Ağır Kılıç(Hasarı 50 arttırır): 100 altın\n[5]Ekmek Bıçağı(Hasarı 10 arttırır): 20 altın\n[6]Hançer(Hasarı 15 arttırır): 30 altın\n[7]Silah çeşitlerine geri dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(silsec==2) //BALTA ÇEŞİTLERİ
								{
									printf("Balta Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kısa Balta(Hasarı 30 arttırır): 60 Altın\n[2]Uzun Balta(Hasarı 50 arttırır): 100 Altın\n[3]Tek Elli Ağır Balta(Hasarı 70 arttırır): 140 Altın\n");
										printf("[4]Çift Elli Ağır Balta(Hasarı 90 arttırır): 180 Altın\n[5]Silah çeşitlerine geri dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(silsec==3) //MIZRAK VE KARGI ÇEŞİTLERİ
								{
									printf("Mızrak ve Kargı Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Uzun Mızrak(Hasarı 40 arttırır): 80 Altın\n[2]Üç Başlı Mızrak(Hasarı 60 arttırır): 120 Altın\n[3]Uzun Kargı(Hasarı 80 arttırır): 160 Altın\n");
										printf("[4]Baltalı Kargı(Hasarı 100 arttırır): 200 Altın\n[5]Silah çeşitlerine geri dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(silsec==4) //YAY VE OK ÇEŞİTLERİ ANA KODDA DÜZELTİLMELİ OK SAYISI VE YAY YETENEĞİ YETENEK ARTTIKÇA HASAR ARTABİLİR
								{
									printf("Yay ve Ok Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Kısa Yay(Okun hasarını 20 arttırır): 40 Altın\n[2]Uzun Yay(Okun hasarını 30 arttırır): 60 Altın\n[3]Crossbow(Okun hasarını 50 arttırır): 100 Altın\n");
										printf("[4]Tahta Ok(Okun hasarını 2 arttırır: 4 Altın\n[5]Taş Ok(Okun hasarını 4 arttırır): 8 Altın\n[6]Silah çeşitlerine geri dön\n");
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
												
												if(oksay<=0)printf("Pozitif bir değer gir!!\n");
												
												else
												{
													oktutar=oksay*4;
													
													if(altin>=oktutar)
													{
														printf("%d tane Tahta Ok satın aldın\n",oksay);
														altin=altin-oktutar;
														ok[0]+=oksay;
													}
													
													else
													{
														printf("Yeterli altının yok!\n");
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
												
												if(oksay<=0)printf("Pozitif bir değer gir!!");
												
												else
												{
													oktutar=oksay*8;
													
													if(altin>=oktutar)
													{
														printf("%d tane Taş Ok satın aldın\n",oksay);
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(silsec==5) //GERİ DÖN
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
						
						else if(duksec==3) //ZIRH ÇEŞİTLERİ
						{
							
							while(shp!=0)
							{
								printf("[1]Kalkan\n[2]Miğfer\n[3]Gövde\n[4]Bacak\n[5]Kol\n[6]Eldiven\n[7]Bot\n[8]Zırh Dükkanından Çık\n");
								scanf("%d",&zirhsec);
								
								if(zirhsec==1) //KALKAN ÇEŞİTLERİ
								{
									printf("Kalkan Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Klasik Yuvarlak Kalkan(Defansı 20 arttırır): 40 Altın\n[2]Klasik Uzun Kalkan(Defansı 30 arttırır): 60 Altın\n[3]Büyük Yuvarlak Kalkan(Defansı 50 arttırır): 100 Altın\n");
										printf("[4]Dayanıklı Yuvarlak Kalkan(Defansı 70 arttırır): 140 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");				
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
										printf("Altının: %d\n\n",altin);
									}				
								}
								
								else if(zirhsec==2) //MİĞFER ÇEŞİTLERİ
								{
									printf("Miğfer Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Eskimiş Miğfer(Defansı 10 arttırır): 20 Altın\n[2]Klasik Miğfer(Defansı 15 arttırır): 30 Altın\n[3]Kaliteli Miğfer(Defansı 20 arttırır): 40 Altın\n");
										printf("[4]Dayanıklı Miğfer(Defansı 25 arttırır): 50 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==3) //GÖVDE ZIRHI ÇEŞİTLERİ
								{
									printf("Gövde Zırhı Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Hasarlı Gövde Zırhı(Defansı 30 arttırır): 60 Altın\n[2]Klasik Gövde Zırhı(Defansı 40 arttırır): 80 Altın\n[3]Kaliteli Gövde Zırhı(Defansı 50 arttırır): 100 Altın\n");
										printf("[4]Dayanıklı Gövde Zırhı(Defansı 60 arttırır): 120 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==4) //BACAK ZIRHI ÇEŞİTLERİ
								{
									printf("Bacak Zırhı Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Parçalanmış Bacak Zırhı(Defansı 5 arttırır): 10 Altın\n[2]Klasik Bacak Zırhı(Defansı 10 arttırır): 20 Altın\n[3]Kaliteli Bacak Zırhı(Defansı 15 arttırır): 30 Altın\n");
										printf("[4]Dayanıklı Bacak Zırhı(Defansı 20 arttırır): 40 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==5) //KOL ZIRHI ÇEŞİTLERİ
								{
									printf("Kol Zırhı Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Paslanmış Kol Zırhı(Defansı 5 arttırır): 10 Altın\n[2]Klasik Kol Zırhı(Defansı 10 arttırır): 20 Altın\n[3]Kaliteli Kol Zırhı(Defansı 15 arttırır): 30 Altın\n");
										printf("[4]Sağlam Kol Zırhı(Defansı 20 arttırır): 40 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==6) //ELDİVEN ÇEŞİTLERİ
								{
									printf("Eldiven Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Yün Eldiven(Defansı 5 arttırır): 10 Altın\n[2]Deri Eldiven(Defansı 10 arttırır): 20 Altın\n[3]Kaliteli Eldiven(Defansı 15 arttırır): 30 Altın\n");
										printf("[4]Ağır Eldiven(Defansı 20 arttırır): 40 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==7) //BOT ÇEŞİTLERİ
								{
									printf("Bot Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Yün Bot(Defansı 10 arttırır): 20 Altın\n[2]Klasik Bot(Defansı 15 arttırır): 30 Altın\n[3]Sağlam Bot(Defansı 20 arttırır): 40 Altın\n");
										printf("[4]Dayanıklı Bot(Defansı 25 arttırır): 50 Altın\n[5]Zırh Çeşitlerine Geri Dön\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(zirhsec==8) //GERİ DÖN
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
						else if(duksec==4){ //BÜYÜ ÇEŞİTLERİ
							while(shp!=0){
								printf("[1]Büyü1\n[2]Büyü2\n[3]Büyü3\n[4]Büyü4\n[5]Büyü Dükkanından Çık\n");
								scanf("%d",&buyusec);
								if(buyusec==1){
									printf("Büyü1 aldın\n");
									buyu[0]=1;
								}
								else if(buyusec==2){
									printf("Büyü2 aldın\n");
									buyu[1]=1;
								}
								else if(buyusec==3){
									printf("Büyü3 aldın\n");
									buyu[2]=1;
								}
								else if(buyusec==4){
									printf("Büyü4 aldın\n");
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
						else if(duksec==5) //İKSİR ÇEŞİTLERİ DÜZENLENECEK
						{
							
							while(shp!=0)
							{
								printf("[1]Kuvvet İksiri(Savaş sırasında +x hasar artışı)\n[2]Sağlık İksiri(Savaş sırasında +x sağlık artışı)\n");
								printf("[3]Dayanıklılık İksiri(Savaş sırasında +x dayanıklılık artışı)\n[4]Şans İksiri\n[5]İksir Dükkanından Çık\n");
								scanf("%d",&ikssec);
								
								if(ikssec==1)
								{
									printf("Kuvvet İksiri aldın\n");
									iksir[0]=1;
								}
								
								else if(ikssec==2)
								{
									printf("Sağlık İksiri aldın\n");
									iksir[1]=1;
								}
								
								else if(ikssec==3)
								{
									printf("Dayanıklılık İksiri aldın\n");
									iksir[2]=1;
								}
								
								else if(ikssec==4)
								{
									printf("Şans İksiri aldın\n");
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
						
						else if(duksec==6) //PET ÇEŞİTLERİ
						{
							
							while(shp!=0)
							{
								printf("[1]Kedi(Zihin yeteneği 50 artar): 100 Altın\n[2]Köpek(Tahmin yeteneği 50 artar): 100 Altın\n[3]Petshop'tan Çık\n");
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
						
						else if(duksec==7) //AKSESUAR ÇEŞİTLERİ 
						{
							
							while(shp!=0)
							{
								printf("[1]Kolye\n[2]Bileklik\n[3]Yüzük\n[4]Küpe\n[5]Aksesuar Dükkanından Çık\n");
								scanf("%d",&akssec);
								
								if(akssec==1) //KOLYE ÇEŞİTLERİ
								{
									printf("Kolye Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Kolye: 50 Altın\n[2]Altın Kolye: 100 Altın\n[3]Elmas Kolye: 200 Altın\n[4]Geri\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(akssec==2) //BİLEKLİK ÇEŞİTLERİ
								{
									printf("Bileklik Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Bileklik: 50 Altın\n[2]Altın Bileklik: 100 Altın\n[3]Elmas Bileklik: 200 Altın\n[4]Geri\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(akssec==3) //YÜZÜK ÇEŞİTLERİ
								{
									printf("Yüzük Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Yüzük: 50 Altın\n[2]Altın Yüzük: 100 Altın\n[3]Elmas Yüzük: 200 Altın\n[4]Geri\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(akssec==4) //KÜPE ÇEŞİTLERİ
								{
									printf("Küpe Çeşitleri\n");
									
									while(shp!=0)
									{
										printf("[1]Bronz Küpe: 50 Altın\n[2]Altın Küpe: 100 Altın\n[3]Elmas Küpe: 200 Altın\n[4]Geri\n");
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
										printf("Altının: %d\n\n",altin);
									}
								}
								
								else if(akssec==5) //GERİ DÖN
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
							printf("Hoşgeldin\n"); //ÇEKİCİLİK VEYA KARİZMA ARTACAK
							
							while(shp!=0)
							{
							printf("[1]Saç\n[2]Sakal\n[3]Geri dön\n");
							scanf("%d",&kuaforsec);
							
							if(kuaforsec==1)
							{
								
								while(shp!=0)
								{
									printf("Altının: %d\n",altin);
									printf("Nasıl bir saç modeli istersin?\n");
									printf("[1]Uzun: 50 Altın\n[2]Kısa: 40 Altın\n[3]Kel: 40 Altın\n[4]Boya\n[5]Geri dön\n");
									scanf("%d",&sacsec);
									
									if(sacsec==1)
									{
										
										if(altin>=50)
										{
											printf("Sıhhatler olsun!\n");
											altin-=50;
											kel=0; //DÜZENLENMELİ
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
									
									else if(sacsec==2)
									{
										
										if(altin>=40)
										{
											printf("Sıhhatler olsun!\n");
											altin-=40;
											kel=0; //DÜZENLENMELİ
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
								
									else if(sacsec==3)
									{
										
										if(altin>=40)
										{
											printf("Sıhhatler olsun!\n");
											altin-=40;
											kel=0; //DÜZENLENMELİ
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
									
									else if(sacsec==4 && kel==0)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sarı: 75 Altın\n[2]Kırmızı: 75 Altın\n[3]Beyaz: 75 Altın\n[4]Geri dön\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=75)
												{
													printf("Saçını sarıya boyadın!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
												}
											}
											
											else if(renksec==2)
											{
												
												if(altin>=75)
												{
													printf("Saçını kırmızıya boyadın!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=75)
												{
													printf("Saçını beyaza boyadın!\n");
													altin-=75;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
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
									printf("Altının: %d\n",altin);
									printf("Nasıl bir sakal modeli istersin?\n");
									printf("[1]Top Sakal: 40 Altın\n[2]Kirli Sakal: 40 Altın\n[3]Gür Sakal: 40 Altın\n[4]Boya\n[5]Geri dön\n");
									scanf("%d",&sakalsec);
									
									if(sakalsec==1)
									{
										
										if(altin>=40)
										{
											printf("Sıhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
									
									else if(sakalsec==2)
									{
										
										if(altin>=40)
										{
											printf("Sıhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
									
									else if(sakalsec==3)
									{
										
										if(altin>=40)
										{
											printf("Sıhhatler olsun!\n");
											altin-=40;
										}
										
										else
										{
											printf("Yeterli altının yok!!\n");
										}
									}
									
									else if(sakalsec==4)
									{
										
										while(shp!=0)
										{
											printf("Hangi renk?\n");
											printf("[1]Sarı: 50 Altın\n[2]Kırmızı: 50 Altın\n[3]Beyaz: 50 Altın\n[4]Geri dön\n");
											scanf("%d",&renksec);
											
											if(renksec==1)
											{
												
												if(altin>=50)
												{
													printf("Sakalını sarıya boyadın!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
												}		
											}
											
											else if(renksec==2)
											{
												
												if(altin>=50)
												{
													printf("Sakalını kırmızıya boyadın!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
												}
											}
											
											else if(renksec==3)
											{
												
												if(altin>=50)
												{
													printf("Sakalını beyaza boyadın!\n");
													altin-=50;
												}
												
												else
												{
													printf("Yeterli altının yok!!\n");
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
						
						else if(duksec==9) //EŞYA SAT
						{
							printf("Envanter Açılıyor\n\n");
							
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
										printf("%d Kısa Kılıç (+20 Hasar) | Satış Fiyatı: %d\n",kil[0],kilf[0]/2);
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
										printf("%d Uzun Kılıç (+30 Hasar) | Satış Fiyatı: %d\n",kil[1],kilf[1]/2);
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
										printf("%d Tek Elli Ağır Kılıç (+40 Hasar) | Satış Fiyatı: %d\n",kil[2],kilf[2]/2);
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
										printf("%d Çift Elli Ağır Kılıç (+50 Hasar) | Satış Fiyatı: %d\n",kil[3],kilf[3]/2);
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
										printf("%d Ekmek Bıçağı (+10 Hasar) | Satış Fiyatı: %d\n",bic[0],bicf[0]/2);
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
										printf("%d Hançer (+15 Hasar) | Satış Fiyatı: %d\n",bic[1],bicf[1]/2);
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
										printf("%d Kısa Balta (+30 Hasar) | Satış Fiyatı: %d\n",bal[0],balf[0]/2);
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
										printf("%d Uzun Balta (+50 Hasar) | Satış Fiyatı: %d\n",bal[1],balf[1]/2);
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
										printf("%d Tek Elli Ağır Balta (+70 Hasar) | Satış Fiyatı: %d\n",bal[2],balf[2]/2);
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
										printf("%d Çift Elli Ağır Balta (+90 Hasar) | Satış Fiyatı: %d\n",bal[3],balf[3]/2);
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
										printf("%d Uzun Mızrak (+40 Hasar) | Satış Fiyatı: %d\n",miz[0],mizf[0]/2);
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
										printf("%d Üç Başlı Mızrak (+60 Hasar) | Satış Fiyatı: %d\n",miz[1],mizf[1]/2);
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
										printf("%d Uzun Kargı (+80 Hasar) | Satış Fiyatı: %d\n",kar[0],karf[0]/2);
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
										printf("%d Baltalı Kargı (+100 Hasar) | Satış Fiyatı: %d\n",kar[1],karf[1]/2);
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
										printf("%d Kısa Yay (+20 Ok Hasarı) | Satış Fiyatı: %d\n",yay[0],yayf[0]/2);
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
										printf("%d Uzun Yay (+30 Ok Hasarı) | Satış Fiyatı: %d\n",yay[1],yayf[1]/2);
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
										printf("%d Crossbow (+50 Ok Hasarı) | Satış Fiyatı: %d\n",yay[2],yayf[2]/2);
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
										printf("%d Tahta Ok (+2 Ok Hasarı) | Satış Fiyatı: %d\n",ok[0],okf[0]/2);
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
										printf("%d Taş Ok (+4 Ok Hasarı) | Satış Fiyatı: %d\n",ok[1],okf[1]/2);
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
										printf("%d Klasik Yuvarlak Kalkan (+20 Zırh) | Satış Fiyatı: %d\n",kalkan[0],kalkanf[0]/2);
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
										printf("%d Klasik Uzun Kalkan (+30 Zırh) | Satış Fiyatı: %d\n",kalkan[1],kalkanf[1]/2);
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
										printf("%d Büyük Yuvarlak Kalkan (+50 Zırh) | Satış Fiyatı: %d\n",kalkan[2],kalkanf[2]/2);
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
										printf("%d Dayanıklı Yuvarlak Kalkan (+70 Zırh) | Satış Fiyatı: %d\n",kalkan[3],kalkanf[3]/2);
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
										printf("%d Eskimiş Miğfer (+10 Zırh) | Satış Fiyatı: %d\n",mig[0],migf[0]/2);
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
										printf("%d Klasik Miğfer (+15 Zırh) | Satış Fiyatı: %d\n",mig[1],migf[1]/2);
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
										printf("%d Kaliteli Miğfer (+20 Zırh) | Satış Fiyatı: %d\n",mig[2],migf[2]/2);
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
										printf("%d Dayanıklı Miğfer (+25 Zırh) | Satış Fiyatı: %d\n",mig[3],migf[3]/2);
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
										printf("%d Hasarlı Gövde Zırhı (+30 Zırh) | Satış Fiyatı: %d\n",gov[0],govf[0]/2);
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
										printf("%d Klasik Gövde Zırhı (+40 Zırh) | Satış Fiyatı: %d\n",gov[1],govf[1]/2);
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
										printf("%d Kaliteli Gövde Zırhı (+50 Zırh) | Satış Fiyatı: %d\n",gov[2],govf[2]/2);
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
										printf("%d Dayanıklı Gövde Zırhı (+60 Zırh) | Satış Fiyatı: %d\n",gov[3],govf[3]/2);
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
										printf("%d Parçalanmış Bacak Zırhı (+5 Zırh) | Satış Fiyatı: %d\n",bac[0],bacf[0]/2);
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
										printf("%d Klasik Bacak Zırhı (+10 Zırh) | Satış Fiyatı: %d\n",bac[1],bacf[1]/2);
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
										printf("%d Kaliteli Bacak Zırhı (+15 Zırh) | Satış Fiyatı: %d\n",bac[2],bacf[2]/2);
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
										printf("%d Dayanıklı Bacak Zırhı (+20 Zırh) | Satış Fiyatı: %d\n",bac[3],bacf[3]/2);
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
										printf("%d Paslanmış Kol Zırhı (+5 Zırh) | Satış Fiyatı: %d\n",kol[0],kolf[0]/2);
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
										printf("%d Paslanmış Kol Zırhı (+10 Zırh) | Satış Fiyatı: %d\n",kol[1],kolf[1]/2);
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
										printf("%d Kaliteli Kol Zırhı (+15 Zırh) | Satış Fiyatı: %d\n",kol[2],kolf[2]/2);
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
										printf("%d Sağlam Kol Zırhı (+20 Zırh) | Satış Fiyatı: %d\n",kol[3],kolf[3]/2);
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
										printf("%d Yün Eldiven (+5 Zırh) | Satış Fiyatı: %d\n",eld[0],eldf[0]/2);
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
										printf("%d Deri Eldiven (+10 Zırh) | Satış Fiyatı: %d\n",eld[1],eldf[1]/2);
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
										printf("%d Kaliteli Eldiven (+15 Zırh) | Satış Fiyatı: %d\n",eld[2],eldf[2]/2);
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
										printf("%d Ağır Eldiven (+20 Zırh) | Satış Fiyatı: %d\n",eld[3],eldf[3]/2);
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
										printf("%d Yün Bot (+10 Zırh) | Satış Fiyatı: %d\n",bot[0],botf[0]/2);
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
										printf("%d Klasik Bot (+15 Zırh) | Satış Fiyatı: %d\n",bot[1],botf[1]/2);
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
										printf("%d Sağlam Bot (+20 Zırh) | Satış Fiyatı: %d\n",bot[2],botf[2]/2);
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
										printf("%d Dayanıklı Bot (+25 Zırh) | Satış Fiyatı: %d\n",bot[3],botf[3]/2);
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
										printf("%d Kedi (+50 Zihin Yeteneği) | Satış Fiyatı: %d\n",pet[0],petf[0]/2);
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
										printf("%d Köpek (+50 Tahmin Yeteneği) | Satış Fiyatı: %d\n",pet[1],petf[1]/2);
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
										printf("%d Bronz Kolye | Satış Fiyatı: %d\n",kolye[0],kolyef[0]/2);
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
										printf("%d Altın Kolye | Satış Fiyatı: %d\n",kolye[1],kolyef[1]/2);
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
										printf("%d Elmas Kolye | Satış Fiyatı: %d\n",kolye[2],kolyef[2]/2);
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
										printf("%d Bronz Bileklik | Satış Fiyatı: %d\n",bilek[0],bilekf[0]/2);
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
										printf("%d Altın Bileklik | Satış Fiyatı: %d\n",bilek[1],bilekf[1]/2);
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
										printf("%d Elmas Bileklik | Satış Fiyatı: %d\n",bilek[2],bilekf[2]/2);
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
										printf("%d Bronz Yüzük | Satış Fiyatı: %d\n",yuzuk[0],yuzukf[0]/2);
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
										printf("%d Altın Yüzük | Satış Fiyatı: %d\n",yuzuk[1],yuzukf[1]/2);
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
										printf("%d Elmas Yüzük | Satış Fiyatı: %d\n",yuzuk[2],yuzukf[1]/2);
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
										printf("%d Bronz Küpe | Satış Fiyatı: %d\n",kupe[0],kupef[0]/2);
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
										printf("%d Altın Küpe | Satış Fiyatı: %d\n",kupe[1],kupef[1]/2);
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
										printf("%d Elmas Küpe | Satış Fiyatı: %d\n",kupe[2],kupef[2]/2);
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
					
						else if(duksec==10) //ÇARŞIDAN AYRIL
						{
							printf("Çarşıdan Ayrılınıyor...\n");
							break;
						}
						
						else //TEKRAR DENE
						{
							printf("Tekrar dene!!\n");
						}
					 }
				break;
				
				case 10:
					
					printf("bozkır dünyasına giriş yaptınız. Burası zorbaların, adilerin ve kötü kalpli insanlarım diyarı gezerken bir Zelemna baskınına uğrayabilir ya da bir bozkır hayvanı tarafından saldırıya uğrayabilirsin bozkır evlerinde kumar oynayabilir ya da özel iznin varsa Zelemna kabilesinin köyüne gidebilirsin.\n");
					printf("[1]bozkırda gezintiye çık\n[2]kumar çadırlarını bul\n[3]Zelemna kabilesinin köyüne git(daha yapılmadı)\n[4]bozkırı keşfetmesi için insan tut(dikkat et kiraladığın insan ölebilir ya da iyi bir ganimet bulursa alıp kaçabilir)\n");
					printf("ne yapmak istersin : ");
					scanf("%d",&Bsec);
					
					if(Bsec==1)
					{
						biht=(rand()%100);
						if(biht>95)
						{
							printf("küçük bir Zelemna devriyesine denk geldin. hemen saklandın fakat bir tanesi seni gördü ve savaşa tutuştunuz.");
							DMcan=100,Dcan=100,Dsaldiri=10,saldiri=hasar/3,tur=0,Ddef=10;
							savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
							can=Darena[0];
							exp=Darena[1];
							altin=Darena[2];
							hasar=Darena[3];
							onur=Darena[4];
							if(can>0)
							{
								printf("savaştığın kişi devriye lideri olmakla beraber köyün de lideri çıktı. senin çok yiğitçe dövüştüğünü söyledi ve sana köye giriş izinini verdi(giriş izni yapalım)");
							}
							
						}
						
						else if(biht>90)
						{
							printf("bozkırın bir yerde çukurlaştığını görüyorsun ve bir hazine mağarası olduğunu farkediyorsun. içerideki hazineyi almak ister misin?\n[1]evet al\n[2]hayır alma\nne yapmak istersin: ");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("kazancınız\n400 altın\n30 taş ok");
								altin= altin+400;
								ok[1]=ok[1]+30;
								
							}
							
							else if(Bsec==2)
							{
								printf("hiç ellemeden çıktınız");
							}
							
							else
							{
								printf("hiç ellemeden çıktınız");
							}
							
						}
						
						else if(biht>85)
						{
							printf("bozkırda bir kelle avcısını gördün ve seni durdurdu. Birkaç sayfasını kontrol ettikten sonra senin bir suçlu olmadığını söyledi. Bir suçluyu aradığını ve suçluyu bulup öldürmede ona yardım edersen ödülü bölüşebileceğini söyledi.\n[1] yardım et \n[2]yardım etme\nne yapmak istiyorsun");
							scanf("%d",&Bsec2);
							
							if(Bsec==1)
							{
								printf("bunu duyduğuna sevindi ve sana aradığın kişinin resmini gösterdi. Gözgörmez Peek adında birisi ve çok atik birisiymiş aramaya koyuluyorsunuz.\n------------\n------------\n------------\n------------\n------------\n");
								printf("aradığınız adam size gece uyuyorken bir suikast gerçekleştiriyor. Ortağının boğazı çoktan kesilmiş ve oluk oluk kan akıyor. bir savaş başlamak zorunda artık\n");
								
								DMcan=300,Dcan=300,Dsaldiri=30,saldiri=hasar/3,tur=0,Ddef=30;
								savas(DMcan,Dcan,Dsaldiri,tur,saldiri,Ssec,Ddef,exp,can,Darena);
								can=Darena[0];
								exp=Darena[1];
								altin=Darena[2];
								hasar=Darena[3];
								onur=Darena[4];
								if(can>0)
								{
									printf("ona alışmaya başlamıştın. Öldü ve ona yaraşır bir şekilde gömüldü. Mezari başında güzel bir konuşma sonrası rakibinin kelesi ve aranan kişiler listesiyle kasabaya indin");
									altin=altin+300;
									printf("kelleye konan ödül 300 altin\naltin: %d",altin);
								}
							
							}
							
							else
							{
								printf("senin bir korkak olduğunu söyledi ve yoluna gitti.");
							}
						}
						
						else if(biht>80)
						{
							printf("bir tüccara rastladın. yolda kaldığını ve acilen paraya ihtiyacı olduğunu söyledi. elindeki mallarını yarı fiyatına sana satmak istiyor. Almak ister misin?\n[1]evet isterim \n[2]hayır istemem\n");
							printf("daha bitmedi sonra dene şansını");
							
						}
						
						else if(biht>75)
						{
							printf("bir katibe denk geldin kendisi yolda kalmış ve yol güvenliğini sağlaman karşılığında sana belli bri ücret sunmak istiyor ne dersin");
						}
						
						else if(biht>70)
						{
							printf("yolda bir efsun taşı görüyorsun(yetenek ağacı için)");
						}
						
						else if(biht>65)
						{
							printf("bozkırın en derinlerine doğru yol almaya başladın devam etmek istediğine emin misin?\n[1]evet\n[2]hayır\nne yapmak istersin :");
							scanf("%d",&Bsec2);
							
							if(Bsec2==1)
							{
								printf("bir çölü andırsa da su bulunmasında sıkıntı yaşamadığından şanslısın. Derinlerde bir ejderha yuvasına rastladın. içine girmek ister misin?\n[1]evet giriyorum\n[2]Hayır bu kadar eğlence yeter eve gidelim\nne yapmak istersin: ");
								scanf("%d",&Bsec2);
								
								if(Bsec2==1)
								{
									printf("ejderha yuvasında değil ama yumurtaları burada. ne yapmak ister misin?\n[1]evet gir ve al\n[2]gir ve ejderhayı bekle\n[3]çabucak kaç\nne yapmak istersin: ");
									scanf("%d",Bsec2);
									if(Bsec==1)
									{
										printf("yumurtaları alıp kaçtın.(envantere eklenecek ama şimdilik yumurta eklenmediğinden al para)");
										altin=altin+300;
										printf("yumurtanın fiyatı 300 altin\naltin: %d",altin);
									}
									
									else if(Bsec==2)
									{
										printf("ejdeyhayla mı şavaşcan şen oyyy (daha eklemedik ama kesin yenemezdin:))");
									}
									
									else
									{
										printf("gece geç olmadan eve döndün pek bir şey bulamadın birkaç tavşan, dağ ve toprak.");
									}
								}
								
								else
								{
									printf("gece geç olmadan eve döndün pek bir şey bulamadın birkaç tavşan, dağ ve toprak.");
								}
							}
							else
							{
								printf("gece geç olmadan eve döndün pek bir şey bulamadın birkaç tavşan, dağ ve toprak.");
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
						printf("kumar çadırları kuruluyor daha sonra gelmeniz söylendi\n");
					}
					
					else if(Bsec==3)
					{
						printf("Zelemna kabilesinin köyüne geldin ama senden giriş belgesi sordular. olmadığını görünce seni kovaladılar. canını zor kurtardın\n");
					}
					
					else if(Bsec==4)
					{
						printf("senin içni uçsuz bucaksız bu bozkırı keşfetmeye bir grup talip oldu. Senin yerine keşif yapmak için 300 altın fiyat istediler ve yola çıkmaya hazırlar.\n");
						//keşif giden kişi çalmışsa boş gözükcek ama talan edilmiş olcak doluysa tekrar gidilmişse talan edilmiş göstercek
						printf("[1]evet 300 altın veriyorum yola çıkın(lütfen bir kervan gelmeden diğerini yolamayın)\n[2]yok ben fakirim\n");
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
							printf("Şifu\'ların başı senin reddetmene üzüldü biz canımızı ortaya koyuyoruz dedi ve artık senin için fiyatın 400 altına çıktığını söyledi.");
						}
						
						else
						{
							printf("zannederim yanlış bir tuşa bastın.");
						}
					}
					
					else
					{
						printf("doğru bir tuşa basmadın ve gün boşa geçti");
					}
					
				break;
				
				case 11:
					
					while(Lliman != 0){
	
	printf("Limana geldiniz.\nNe yapmak istersiniz?\n");
	printf("Liman:\n1-Liman'da gez.\n2-Gemileri gez.\n3-Göreve git.\n4-Liman'dan çık\n");
	scanf("%d",&Lsecim1);
	
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
		printf("Yapılacaklar:\n1-Balıkçıya git.\n2-Kervanları gez.\n3-Sandallara bak.\n4-Giyim kuşam yerlerine bak.\n5-Hana git.\n6-Yapılacaklara geri dön.\n");
		printf("Ne yapmak istersin:");
		scanf("%d",&Lsecim1);
		
		if(Lsecim1 == 1){
			while(Lliman != 0){
			
			printf("Balıkçıya gittin.\nBizim Karakter:Merhabalar kolay gelsin.Balık piyasası ne durumda onu öğrenebilir miyim?\n");
			printf("Balıkçı:Size de merhaba teşekkürler.Balik piyasasi şuan iyi durumda değil.Aynı zamanda balık getirecek tedarikçilerde azaldı.Denizde artan korsancılık yüzünden mallarimiz güvenli bir şekilde limana ulaşmıyor.Umarım bu korsanlar belalarini bulurlar.\n");
			printf("Bizim karakter:Anladım.Peki bu korsanlar denizin her yerinde mi olurlar?\nTüccar:Hayır ama çoğu yerde onlara rastlamak mümkün.Özellikle ticaret yollari üzerinde.Gerçekten onların acıması yok beyim.\n");
			printf("Bizim karakter:Anladım teşekkür ederim balıkçı.\n1-Yapılıcaklara geri dön.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
			   printf("Geri dönülüyor...");
			   break;	
			}
		}
   }

		else if(Lsecim1 == 2){
   			while(Lliman != 0){
   				
   			printf("Limanda gezerken gözüne yeni gelen kervanlar takildi ve yanlarına gittin:Merhabalar kolay gelsin.Kervan ticareti hakkinda bilgi almak istiyorum.\nTüccar:Size de merhabalar teşekkürler.Tabi nasil yardimci olabilirim?\n");
			printf("Bizim karakter:Ticaret yollarini eşkiyaların çok bastığını duydum doğru mu?\nTüccar:Ah efendim ah hiç sormayın.Sizlere şunu söyleyeyim her kervan ölümü yanlarında taşıyorlar.\n");
			printf("Bizim karakter:Peki bu kadar zahmet kazandığınız para için yeterli oluyor mu?\nTüccar:Olmaz mı efendim hehehe.Sen de kervana katılıp ticaret yapmayı düşünür müsün?\n1-Kervana katil.\n2-Umursama ve yapılcaklar listesine geri dön.\n");
			scanf("%d",&Lsecim1);
			
			if(Lsecim1 == 1){
				printf("Kervana katildin.Kervan 3'e ayrilacaktır1-İpek Yolu.\n2-Kürk Yolu.\n3-Baharat Yolu.\nHangisini seçmek istersin?\n");
				scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("ipek yolu üzerinde giderken yolda eşkiyalar tarafından baskına uğradın.\n1-Savaşın.\n2-Kaç.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Eşkiyalar ile savaştınız ve kaybettiniz.Esir alındın.Eşkiyalar seni bir süre sürüklediler ve yol kenarın attılar.\n");
						can = can - 10;
						altin = altin - 15;
					    printf("Canınız: %d\n",can);
						printf("Altınınız: %d\n",altin);
						printf("Uzun bir çabanın ardından geri döndün.\n");
						printf("Geri dönülüyor...\n");
						break;	
					}
					else{
						printf("Kaçtın ama kavurucu Arap sıcağının ortasında kaldın.Yaşamak için yürümen lazım ama yürüdükçe sıcaklık ve susuzluk artıyor.\n");
						while(LGgun < 10){
							printf("Günler geçiyor ve bitmek bilmeyen yolda sıcaklık ve susuzluğun verdiği yorgunluktan bayıldın.\n");
							LGgun ++;
							printf("Yeni gün: %d\n",LGgun);
							printf("Bir müddet sonra gözünü açtın ama nerede olduğunu bilmiyorsun.Yanına yüzü kapalı bir adam geldi ve su verdi.Suyu içtikten sonra bira rahatladın.\n");
							can = can + 5;
							printf("Canın: %d\n",can);
							printf("Kendine geldikten sonra adama:Neredeyim ben?Siz kimsiniz?\nAdam kendi dilinde birşeyler söyledi ve en ufak birşey anlamadın.\n");
							printf("Arkadan bir ses geldi:Lut çölü yakınlarında bir yerdeyiz.Senin ne işin var buralarda?\nBizim karakter:Avrupa'dan bir ticaret kervanı ile yola çıktım ama yolda eşkiyalar tarafından saldırıya uğradık çoğu kişi öldü kalanlarda kaçtı onlara ne oldu bilmiyorum ama çölde yürürken susuzluk ve sıaktan bayılmışım.\n");
					        printf("Adam:Anladım yabancı.Buralarda dikkatli olman lazım.Söyle bakalım ne yapmak istersin.\nBizim karakter:Efendim öncelikle yardımlarınız için minnettarım eğer olursa evime gitmek istiyorum bu konuda bana yardımcı olabilir misiniz?");
					        printf("Adam:Pekala yabancı sana fazla olan bir atı ve biraz erzak verebilirim ama bu at uzun yol için dayanaklı değil.Eve dönerken atını dinlendirmelisin.\nAta bindin ve yola çıktın.\n");
					        LGgun = 20 + LAgun;
					        printf("Yeni gün: %d\n",LGgun);
					        printf("Sonunda kendi topraklarına döndün ama bu yolculuk sana pahalıya patladı.");
					        altin = altin - 50;
					        can = can - 10;
					        printf("Canınız: %d\n",can);
					        printf("Altınınız: %d\n",altin);
					        
						}
						  printf("Geri dönüldü...\n");
						  break;
					}
				}
				if(Lsecim1== 2){
					printf("Kürk yolu üzerinden giden kervana katıldın ve yola çıktınız.Amur Nehri yakınlarına geldiniz ve tüccarlar ellerindeki hayvan kürklerini satmaya başladılar.\n1-Satmalarına yardım et.\n2-Gezintiye çık.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Tüccarlara elinden geldiğince yardım ettin ve malları sattınız.Tüccarlar bu garetn karşılığında sana giyebilceğin güzel bir hayvan postu hediye ettiler.Ticaret bitti ve kervanla birlikte tekrar geri döndün\n");
						printf("Yeni eşya: Hayvan postu.");
						altin = altin + 20;
						onur = onur + 5;
						exp = exp + 50;
						def = def + 10;
						printf("Altınınız: %d\n",altin);
						printf("Onurunuz: %d\n",onur);
						printf("Tecrübeniz: %d\n",exp);
						printf("Defansınız: %d\n",def);	
						printf("Geri dönüldü...\n");
						break;
					}
					else{
						printf("Etrafı gözlemledin ve ticaret bitince geri döndünüz..\n");
						exp = exp + 50;
						printf("Geri dönüldü...\n");
						break;
					}
				}	
				if(Lsecim1 == 3){
					printf("Kervan ile beraber baharat yolu üzerinden yola çıktınız.Bir çok yerden geçtiniz ve Arap Yarımadası taraflarına kadar geldiniz.Ama o da ne!!Eşkiyalar üzerinize doğru geliyor.\n1-Savaş.\n2-Kaç.\n");
					scanf("%d",&Lsecim1);
					if(Lsecim1 == 1){
						printf("Eşkiyalar ile senin önderliğinde savaştınız ufak bir zayiat verseniz de savaşı kazandınız.Ve eşkiyalardan bir çok değerli eşya kazandınız.\n");
						altin = altin + 200;
						exp = exp + 20;
						kilic_yetenegi = kilic_yetenegi + 15;
						def = def+ 10;
						printf("Altınınız: %d\n",altin);
						printf("Tecrübeniz: %d\n",exp);
						printf("Kılıç yeteğeni: %d\n",kilic_yetenegi);
						printf("Defans: %d\n",def);
						printf("Eşkiyalar ile savaştıktan sonra yoluna devam ettin ve Halep'e ulaştınız.Tüccarlar ile beraber malları satmaya başladınız.\n1-Yardım et.\n2-Gezintiye çık.\n");
						scanf("%d",&Lsecim1);
						
						if(Lsecim1 == 1){
							printf("Tüccarlar ile malları sattınız ve bunun karşılığında sen de kazandın.\n");
							altin = altin + 100;
							exp = exp + 20;
							printf("Yeni eşya:ipek kaftan.\n");
							def = def + 5;
							printf("Altınınız: %d\n",altin);
							printf("Tecrübeniz: %d\n",exp);
							printf("Defansınız: %d\n",def);
							printf("Ticaret bitti ve geri döndünüz...\n");
							LGgun = LAgun + 7;
							printf("Yeni gün: %d",LGgun);
							printf("Geri dönülüyor...\n");
							break;
						}
						else{
							printf("Pazarda gezintiye çıktın ve etrafı gözlemlerken 2-3 şehir soytarısı önünü kesti.\n1-Karşı koy.\n2-Teslim ol.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Soytarıları karşı koydun ve hepsinin hakkından geldin.\n");
								kilic_yetenegi = kilic_yetenegi + 10;
								can = can - 5;
								altin = altin + 15;
								printf("Kılıç yeteneğin: %d",kilic_yetenegi);
								printf("Canınız: %d",can);
								printf("Altınınız: %d",altin);
								printf("Pazarda gezintin bitti ve tüccarlar ile beraber geri dönmek için yola koyuldunuz...\n");
								LGgun = LAgun + 7;
								printf("Yeni gün: %d",LGgun);
								printf("Geri dönülüyor...\n");
								break;
							}
							else{
								printf("Soytarılara teslim oldun ve onurun Araplar arasında alay konusu oldu");
								altin = altin - 100;
								onur = onur - 20;
								can = can - 10;
								printf("Altınınız: %d",altin);
								printf("Onurunuz: %d",onur);
								printf("Canınız: %d",can);
								printf("Bu utanç verici hadisenin ardından tüccarların yanına döndün ve geri dönmek üzere yola koyuldunuz...\n");
								printf("Geri dönülüyor...\n");
								break;
							}
						}
						printf("Maları sattınız ve tüccarlarile geri döndünüz...");
						LGgun = 20 + LAgun;
						printf("Yeni gün: %d",LGgun);
					}
					else if(Lsecim1 == 2){
						printf("Eşkiyaların saldırısndan kaçtın ve kendini zor kurtardın ama Arap Yarımadasının kavurucu sıcaklığında susuz ve aç olarak tek başına kaldın.Sıcaklık ve susuzluk git gide arttı ve dayanamayıp baıldın.\n");
						printf("Gözünü açtın ve yanında duran suyu içtin ve biraz kendine geldin.Yanına biri yaklaştı ve sana:Kendine gelmişsin yabancı söyle bakalım buralarda işin ne?\nBizim karakter:Avrupa'dan ticaret için gelen bir kervan ile birlikteydim.Yolda eşkiyalar pusu attı çoğu kişi öldü ya da kaçtı.Bende kaçtım ama sıcak ve susuzluktan bayılmışım.\n");
						printf("Adam:Buralarda dikkatli olmak lazım.Buranın eşkiya çoktur ve acımasızdır.Bizler buraların Bedevileriyiz.Söyle bakalı şimdi ne yapacaksın.\nBizim karakter:Evime dönmeyi istiyorum efendim.Bu konuda bana yardımcı olabilir misiniz?\n");
						printf("Bedevi:Hahaha bu acele de eyin nesi yabancı.istersen bizimle biraz kalıp sonra da gidebilirsin.\n1-Kal.\n2-Git.\n");
						scanf("%d",&Lsecim1);
						if(Lsecim1 == 1){
							printf("Bedeviler yanında 1 hafta geçirdin ve bir sürü tecrübe kazandın.Sonrasında onların verdiği at ve biraz erzak ile geri döndün.\n");
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
				printf("Bizim karakter:Hayır teşekkürler sadece bilgi almak için sormuştum.\n");
				printf("Geri dönülüyor.\n");
				break;
			}
		 }
	   }
	   if(Lsecim1 == 3){
	   	while(Lliman != 0){
		   	printf("Limanda gezerken gözüne güzel sandallar takıldı.Sandal satıcsının yanına gittin:\n1-Sandan fiyatlarını sor.\n2-Sandal ile ne yapabieceğini sor.\n3-Ayrıl.\n");
		   	scanf("%d",&Lsecim1);
		   	if(Lsecim1 == 1){
		   		 	
		   		printf("Bizim karakter:Merhaba kolay gelsin.Sandal fiyatları hakkında bilgi almaya gelmiştim de.Fiyatlar nedir?\nSandalcı:Size de merhaba beyim teşekkürler.Büyük olanlar 500 altın orta olanlar 250 altın ve küçük olanlar 100 altın.\n");
		   		while(Lliman != 0){
		   		printf("Bizim karakter:Anladım teşekkürler.\n1-Sandal satın al.\n2-Ayrıl.\n");
		   		scanf("%d",&Lsecim1);
		   	    
		   	    if(Lsecim1 == 1){
		   	    	while(Lliman != 0){
					   
		   	    	printf("Hangi sandalı almak istersin:\n1-Büyük.\n2-Orta.\n3-Küçük.\n4-Çık.\n");
		   	    	scanf("%d",&Lsecim1);
		   	    	printf("Altınınız: %d\n",altin);
					if(Lsecim1 == 1){
						
						if(altin > 500){
							printf("Bizim karakter:Bu büyük sandalı almak istiyorum.\nSandalcı:Çok doğru bir seçim efendim tamamdır.\n");
							altin = altin - 500;
							printf("Altınınız: %d\n",altin);
							printf("Geri dönülüyor..\n");
							break;
						}
						else{
							printf("Altınınız yetersiz.");
							break;
							
						}
					}
					else if(Lsecim1 == 2){
							if(altin > 250){
								printf("Bizim karakter:Bu orta boy sandalı almak istiyorum.\nSandalcı:Çok oğru bir karar efendim tamamdır.\n");
								altin = altin - 250;
								printf("Altınınız: %d\n",altin);
								break;
							}
							else{
								printf("Altınınız yetersiz.");
								break;
							}
						}
						else if(Lsecim1 == 3){
					
							if(altin > 100){
								printf("Bizim karakter:Bu küçük sandalı istiyorum.\nSandalcı:Çok doğru bir karar efendim tamamdır.\n");
								altin = altin - 100;
								printf("Altınınız: %d\n",altin);
								break;
							}
							else{
								printf("Altınınız yetersiz.");
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
						printf("Snadalcıya teşekkür ettin ve ayrıldın");
						printf("Geri dönülüyor...\n");
						break;
					}  
			   }
		}
			   else if(Lsecim1 == 2){
			   	while(Lliman != 0){
				   
			   	printf("Bizim karakter:Söyle bakalım sandalcı.Bu sandallar ile neler yapabilirim?\nSandalcı:Beyim bu sandallar ile balık tutabilir.Gezintiye çıkabilir ve hatta şehir bile değiştirebilirsiniz.Ancak sizleri bir konuda uyarmam lazım çok dikkatli olmanız lazım efendim zira eşkiyalar giderek çoğalmakta ve bu tedirgin edici.\n");
			   	printf("Bizim karakter:Sen merak etme sandalcı öyle bir durumda görecekleri son şey yüzüm olur.hehehe.Teşekkürler Sandalcı.\n");
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
			   	printf("Limanda giyim kuşan satan yerlere geldin.\n");
			  
			   	while(Lliman != 0){
			   		printf("İçeridekiler:\n1-Kaftan.\n2-Takılar.\n3-Gömlek.\n4-Çorap.\n5-Ayakkabı.\n6-Çık.\nNe almak istersin?\n");
			   		scanf("%d",&Lsecim1);
			   	if(Lsecim1 == 1){
			   		while(Lliman != 0){
					   
			   			printf("Bizim karakter:Merhaba kolay gelsin.Bu kaftanların fiyatı ne kadar?\nTüccar:Merhaba efendim hoş geldnizi.\n1-Siyah olanlar 50 altin.\n2-Açık renkli olanlar 40 altin.\n3-Diğerleri 15.\n4-Çık.\n");
			   			scanf("%d",&Lsecim1);
			   			
			   		if(Lsecim1 == 1){
			   			if(altin > 50){
			   				printf("Bizim karakter:Pekala tüccar.Bana şu siyah olanlardan bir tane ver bakalım.\n");
			   				printf("Yeni eşya: Siyah kaftan.\n");
			   				altin = altin -50;
			   				def = def + 10;
			   				cekicilik = cekicilik + 10;
			   				printf("Altınınız: %d\n",altin);
			   				printf("Defansınız: %d\n",def);
			   				printf("Çekicilik: %d\n",cekicilik);
			   			
					   }
					   else{
					   		printf("Paranız yetersiz.\n");
					   	break;
					   }
					}
					   else if(Lsecim1 == 2){
					   	if(altin > 40){
					   		printf("Bizim karakter:Pekala tüccar efendi.Şu açık renkli olanlardan 1 tane almak istiyorum.\n");
					   		altin = altin - 40;
					  	 	def = def + 5;
					   		cekicilik = cekicilik + 5;
					   		printf("Altınınız: %d\n",altin);
			   				printf("Defansınız: %d\n",def);
			   				printf("Çekicilik: %d\n",cekicilik);
			   			
						}
						else{
							printf("Paranız yetersiz.\n");
						break;
						}
					  }
					   else if(Lsecim1 == 3) {
					   		if(altin > 15){
					   			printf("Bizim karakter:Pekala tüccar.Şunlardan bana bir tane ver bakalım.\n");
					   			altin = altin - 15;
					   			def = def + 3;
					   			cekicilik = cekicilik + 3;
					   			printf("Altınınız: %d\n",altin);
			   					printf("Defansınız: %d\n",def);
			   					printf("Çekicilik: %d\n",cekicilik);
			   				
				}
				else{
					printf("Paranız yetersiz.\n");
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
						printf("Bizim karakter:Merhaba tüccar.Elinde takı olarak ne var söyle bakalım.\n");
					
						while(Lliman != 0){
							printf("Tüccar:Size de merhabalar beyim hoş geldiniz.Tabi ki.\n1-Şu yüzükler 10 altin.\n2-Kolyeler de 10 atlin.\n3-Bileklikler 15 altin.\n4-Şans tılsımları 20 altin.\n5-Çık.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
							if(altin > 10){
								printf("Bizim karakter:Pekala tüccar efendi.Bana şu yüzüklerden ver bakalım 1 tane.\n");
								printf("Yeni eşya.Bakır Yüzük.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 5;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranız yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 2){
							if(altin > 10){
								printf("Bizim karakter:Pekala tüccar efendi.Şu kolyeden alayım.\n");
								printf("Yeni eşya:Gümüş Kolye.\n");
								altin = altin - 10;
								cekicilik = cekicilik + 10;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranız yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 3){
							if(altin > 15){
								printf("Bizim karakter:O zaman şu bilekliklerden 1 tane alayım tüccar.\n");
								printf("Yeni eşya:Bielklik.\n");
								altin = altin - 15;
								cekicilik = cekicilik + 10;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
							
						}
						else{
							printf("Paranız yetersiz.\n");
						break;
						}
					}
						else if(Lsecim1 == 4){
							printf("Şu şans tılsımları ne tür şeyler içerir tüccar söyle bakalım.\n");
							
							while(Lliman != 0){
								if(altin > 20){
									printf("Tüccar:Tabi efendim.3 çeşit var.\n1-Kaplan Gözü Tılsımı.\n2-Kuvars Tılsımı.\n3-Kehribar Tılsımı.\n4-Çık.\nHnagisini alamk istersniz beyim.\n");
									scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Pekala tüccar efendi söyle bakalım bu Kaplan Gözü Tılsımı ne işe yarar.\nTüccar:Tabi efendim.Bu taş sizin diğer insanlara olan bağlılığınızı azaltır beyim.Ancak bu durum ikili ilişkilerinizi etkiliyebilir.\n1-Al.\n2-Alma.\n");
								scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								printf("Bizim karakter:Anladım tüccar efendi.Ver bakayım bir tane.\n");
								printf("Yeni eşya:Kaplan Gözü Tılsımı.\n");
								altin = altin - 20;
								cekicilik = cekicilik - 5;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
									
						}
							else{
								printf("Paranız yetersiz.\n");
								break;
							}
						}
								else{
									printf("Anladım tüccar efendi kalsın.\n");
								}
						}
						else if(Lsecim1 == 2){
							printf("Bizim karakter:Pekala tüccar efendi bana kuars tılsımını anlat bakalım.\nTüccar:Heheh kuvars demek istediniz herhalde efendim.Bu tılsım duygusal dengeliyicidir efendim.Beyin fonksiyonlarını düzenlediğine inanılır.\n1-Al.\n2-Alma.\n");
							scanf("%d",&Lsecim1);
								if(Lsecim1 == 1){
									if(altin > 20){
										printf("Bizim karakter:Anladım tüccar ver bakalım.\n");
										altin = altin - 20;
										cekicilik = cekicilik + 5;
										bilgelik = bilgelik + 10;
										printf("Altınınız: %d\n",altin);
										printf("Çekicilik: %d\n",cekicilik);
						      			printf("Bilgeliğiniz: %d",bilgelik);	
						}
						else{
							printf("Paranız yetersiz.\n");
						break;
						}
							}
							else{
								printf("Bizim karakter:Anladım tüccar efendi kalsın.\n");
							break;
						}
				}
					else if(Lsecim1 == 3){
						printf("Bizim karakter:Bana kehribar tılsımından bahset tüccar.\nTüccar:Tabi efendim.Bu tılsım kötü talihi götürüp şans getirir.Tılsımın aynı zamanda zehirlenmeyi önlediğine inanılır.Aynı zamanda cinsel açıdan güç verir efendim hehe.\n1-Al.\n2-Alma.\n");
						scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 20){
									printf("Biim karakter:Hehehe pekala tüccar efendi ver bakalım kehribar tılsımından bir tane.\n");
									printf("Yeni eşya:Kehribar tılsımı.\n");
									altin = altin- 20;
									cekicilik = cekicilik + 10;
									bilgelik = bilgelik + 10;
									printf("Altınınız: %d\n",altin);
									printf("Çekicilik: %d\n",cekicilik);
									printf("Bilgeliğiniz: %d",bilgelik);
					}
					else{
						printf("Paranız yetersiz.\n");
					break;
					}
				}
						else{
							printf("Bizim karakter:hehe.Kalsın tüccar efendi teşekkürler.Dedin ve çıktın.\n");
						break;
						}
					}
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Kalsın tüccar.\nGeri dönülüyor...\n");
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
						printf("Bizim karakter:Merhaba tüccar efendi kolay gelsin.Gömlek bakıyorum da sendekiler nasıl?\n");
							while(Lliman != 0){
								printf("TÜccar:Hoş geldiniz beyim buyrun.Yeni ürünlerim var.\n1-Şu şekilli olanlar 25 altin.\n2-Düz olanlar 35 altin.\n3-Çık.\nHangisini almak istersiniz?\n");
								scanf("%d",&Lsecim1);
									if(Lsecim1 == 1){
										if(altin > 25){
											printf("Bizim karakter:Şu şekilli olanlarından alayım bir tane tüccar.\n");
											printf("Yeni eşya:Şekilli gömlek.\n");
											altin = altin - 25;
											cekicilik = cekicilik + 10;
											printf("Altınınız: %d\n",altin);
											printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paranız yetersiz.\n");
					}
				}
						else{
							if(altin > 35){
								printf("Bizim karakter:Bana şu düz olanlardan ver tüccar efendi.\n");
								printf("Yeni eşya:Düz renk gömlek.\n");
								altin = altin - 35;
								cekicilik = cekicilik + 15;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						printf("Paranız yetersiz.\n");
					}
				}
			}
		}
		
					else if(Lsecim1 == 4){
						printf("Bizim karakter:Merhaba tüccar efendi.Çorap almak istiyorum.\n");
						
						while(Lliman != 0){
							printf("Tüccar:Hoş geldinizi beyim buyurun.Elimde çok güzel çoraplar var.\n1-Şu ince olanlar 15.\n2-Kalın olanlar 20 altin beyim.\n3-Çık.\nHangisini almak istersiniz?\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 15){
									printf("Bizim karakter:Şu ince olanlardan alayım bir tane tüccar efendi.\n");
									printf("Yeni eşya:İnce çorap.\n");
									altin = altin - 15;
									printf("Altınınız: %d\n",altin);
					}
					else{
						printf("Paranız yetersiz.\n");
					break;
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 20){
								printf("Bizim karakter:Şu kalın olanlardan alayım bir tane tüccar efendi.\n");
								printf("Yeni eşya:Kalın çorap.\n");
								altin = altin - 20;
								printf("Altınınız: %d\n",altin);
					}
					else{
						printf("Paranız yetersiz.\n");
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
						printf("Bizim karakter:Merhaba tüccar efendi.Ayakkabı almak istiyorum.\n");
					
						while(Lliman != 0){
							printf("Tüccar:Hoş geldiniz beyim buyurun.Elimde çok güzel ayakkabılar var.\n1-Şu sandaletler 40 altin.\n2-Deri ayakkabılar 50 altin.\n3-Asker ayakkabısı da 60 altın beyim.\n");
							scanf("%d",&Lsecim1);
							if(Lsecim1 == 1){
								if(altin > 40){
									printf("Bizim karakter:Pekala tüccar efendi bana şu sandaletlerden ver.\n");
									printf("Yeni eşya:Sandalet.\n");
									altin = altin - 40;
									cekicilik = cekicilik + 5;
									printf("Altınınız: %d\n",altin);
									printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranız yetersiz.\n");
						
					}
				}
						else if(Lsecim1 == 2){
							if(altin > 50){
								printf("Bizim karakter:Pekala tüccar efendi bana şu deri ayakkabılardan ver.\n");
								printf("Yeni eşya:Deri ayakkabı.\n");
								altin = altin - 50;
								cekicilik = cekicilik + 10;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranız yetersiz.\n");
					
					}
				}
						else{
							if(altin > 60){
								printf("Bizim karakter:Tamam tüccar efendi.Bana şu asker ayakkabısından bir tane ver bakayım.\n");
								printf("Yeni eşya:Asker Ayakkabısı.\n");
								altin = altin - 60;
								cekicilik = cekicilik + 15;
								printf("Altınınız: %d\n",altin);
								printf("Çekicilik: %d\n",cekicilik);
					}
					else{
						
						printf("Paranız yetersiz.\n");
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
		printf("Hana doğru giderken yolda hırsızlar cebini çarptı ve peşlerine düştün.Uzun bir kovalamacadan sonra hırsızlardan birini yakaladın ama hırsız dişli çıktı ve ufak bir kavga tutuştunuz.\n");
   		printf("Adam sana saldırmaya hazırlanıyor:\n1-Sağa gitmek için D'ye bas.\n2-Sola gitmek için A'ya bas.\n3-Eğilmek için C'ye bas.\n4-Kendini geri çekmek için S'ye bas.\n");
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
				printf("Düşman saldırısndan kaçtın.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldır.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düşmana vurdun.\n");
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
				printf("Düşman saldırısndan kaçtın.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldır.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düşmana vurdun.\n");
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
				printf("Düşman saldırısndan kaçtın.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldır.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
					if(Lsira3 == 1){
						Lsira1++;
						printf("Düşmana vurdun.\n");
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
				printf("Düşman saldırısndan kaçtın.\n");
			
			if(Lsira2 == 0){
				printf("1-Saldır.\n2-Bekle.\n");
				scanf("%d",&Lsira3);
				if(Lsira3 == 1){
					Lsira1++;
					printf("Düşmana vurdun.\n");
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
		printf("Tebrikler kazandınız.\n");
		altin = altin + 100;
		onur = onur + 10;
		printf("Altınınız: %d",altin);
		printf("Onurunuz: %d",onur);
	}
	else if(Lsira5 == 0){
		printf("Kaybettiniz.\n");
		altin = altin - 50;
		onur = onur - 5;
		printf("Altınınız: %d\n",altin);
		printf("Onurunuz: %d\n",onur);
		
	}	
	printf("Hana girdin.\n");
	
	while(Lliman != 0){
				   
		printf("Ne yapmak istersin:\n1-Birşeyler iç.\n2-Hancı ile konuş.\n3-Karnını doyur.\n4-Dinlen.\n5-Çık.\n");
		scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Handa birşeyler içtin ve kendine geldin bu seni çok rahatlattı.\n");
				can = can + 5;
				altin = altin - 5;
				printf("Canınız: %d\n",can);
				printf("Altınınız: %d\n",altin);
		}
				   else if(Lsecim1 == 2){
				   	printf("Hancının yanına giderek:Merhaba hancı kolay gelsin.Söyle bakalım buraya ne tür insanlar gelir.\nHancı:Saolasın beyim.Burası bir han beyim her yerden insan gelir biz paramıza bakarız.Eğer dinlenmek istersen uygun yerimiz var.Yalnız burada kalırken dikkat etmelisin beyim her yerden insan geldiği için neden geldiklerini de bilemeyiz!\n");
				   	printf("Pekala hancı teşekkürler.\nAyrıldın.\n");
				   }
				   else if(Lsecim1 == 3){
				   	printf("Yemek yedin ve karınını doyurdun bu seni çok rahatlattı.\n");
				   	can = can + 10;
				   	altin = altin - 15;
				   	printf("Canınız: %d\n",can);
				   	printf("Altınınız: %d\n",altin);
				   }
				   else if(Lsecim1 == 4){
				   	printf("Dinlenmek için han da kaldın ve akşam handa müzik eşliğinde vakit geçirdikten sonra güzel bir uyku çektin...Ama o da ne!!Paran yok!\n");
				   	LGgun = 1 + LAgun;
				   	printf("Yeni gün: %d\n",LGgun);
				   	printf("Sinirli bir şekilde hancının yanına gittin:Hey sen söyle bakalım eşyalarım nerede!\nHancı:Ben sizi dikkatli olmanız konusunda uyardım beyim söyleyin bakalım ne oldu.\nBizim karakter:Uyandım ve bazı değerli eşyalarımın olmadığını gördüm.\nHancı:Kusura bakmayın beyim yapabileceğim birşey yok bir dahaki sefere daha dikkatli olun.\n");
					   altin = altin - 100;
					   exp = exp + 10;
					   printf("Altınınız: %d\n",altin);
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
					  
					printf("Limanda gemilere bakarak yürürken bir gemici adamın yanına geldin:\n1-Gemi fiyatlarını sor.\n2-Ayrıl.\n");
					scanf("%d",&Lsecim1);
				if(Lsecim1 == 1){
					printf("Bizim karakter:Kolay gelsin gemici.Gemilerin fiyatını öğrnmek istiyorum.\n");
				
					printf("Gemici söyle bakalım satın almak ister misin?\n1-Evet.\n2-Hayır.\n");
					scanf("%d",&Lsecim1);
						while(Lliman != 0){
							printf("Gemici:Peki.Gemiler en pahalıdan en ucuza doğru gider.\nŞu en soldaki en pahalası adı KISMET'tir.Çok güçlü bir gemidir.Aynı zamanda savaş gemisidir.Fiyatı 10.000 altındır.\nDiğer gemi yük gemisidir lakin güçlüdür.Heniz bir adı yok.Fiyatı 7.000 altındır.\nEn küçük olanın adı Serçedir hızlıdır lakin güçsüzdür savunmasızdır.Fiyatı 4.000 altındır.\n");
				if(Lsecim1 == 1){
					printf("Gemici:Pekala hangisini almak istersin:\n1-Kısmet.\n2-Yük gemisi.\n3-Serçe.\n4-Ayrıl.\nNe yapmak istiyorsun.\n");
					scanf("%d",&Lsayac);
					
				
				if(Lsayac == 1){
					printf("Gemici:Pekala beyim.Kısmet artık sizindir.İstediğiniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 10.000;
					printf("Altınınız: %d\n",altin);
					
				}
				else{
					printf("Paran yetersiz!\n\n");
					
				
				}
				if(Lsayac == 2){
					printf("Gemici:Pekala beyim.Bu yük gemisi sizindir.İstediğinizi zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 7.000;
					printf("Altınınız: %d\n",altin);
				
				}
				else{
					printf("Paranız yetersiz!\n\n");
				
				}
				if(Lsayac == 3){
					printf("Gemici:Pekala beyim.Serçe artık sizindir.İstediğiniz zaman gelip buradan alabilirsiniz.\n");
					altin = altin - 4.000;
					printf("Altınınız: %d\n",altin);
				
				}
				else{
					printf("Paran yetersiz!\n\n");
				
				}
				if(Lsayac == 4){
					printf("Bizim karakter:Ya da teşekkürler gemici.\n");
				
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
		printf("Görev:\nBalık tutmak.\n");
	
		printf("Göreve gitmeye hazır mısn?\n1-Evet.\n2-Hayır.\n");
			scanf("%d",&Lsecim1);
			if(Lsecim1 == 1){
				printf("Bilgilendirme:\nSenden istenilen sayıyı doğru girersen ve eğer 10 denemeden önce bilirsen balığı kapaersın.Her balığı tutmak için 3 olta atma hakkın var.Eğer balığı tutarsan hakkın aynı kalır.\nGünlük 10 tane balık tutma hakkın var.\nHadi başlayalım.\n");
				printf("Sandala atladın ve denize balık tutmak için açıldın.\nTutabileceğin balıklar:\n1-Çipura.\n2-Alabalık.\n3-Palamut.\n4-Küçük balık.\nBakalım ne yakalyacaksın.\n");
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
					printf("Sayı gir:");
					scanf("%d",&Lsans7);
					if(Lsans7 < Lsayac3){
						printf("Sayıyı büyültün.\n");
					}
					else if(Lsans7 > Lsayac3){
						printf("Sayıyı küçültün.\n");
					}
					Ldeneme4++;
					
					if(Lsayac3 == Lsans7){
						Lsayac4++;
						printf("Tebrikler doğru.Hakkınız aynı kaldı\n");
						Lsans7 = Lsayac3;
						Lhak4 = 0;
						Ldeneme4 = 10;
						Lb = 1; 
						printf("Kalan hakkınız: %d\n",Lhak);
						printf("Eldeki balık sayısı: %d\n",Lsayac4);
					}
					else if(Lhak4 > 1 && Ldeneme4 == 10){
						printf("Kaybettiniz.Hakkınız azaldı.\n");
						Lhak4--;
						printf("Kalan hakkınız: %d\n\n",Lhak);
						
					}
					else if(Lhak4 == 1 && Ldeneme4 == 10){
						printf("Tüm haklarınız bitti.Kaybettiniz.\n\n");
						Lb = 0;
						Lj++;
						Lhak4--;
					}
			    }
			}	
				
			if(Lb == 1){
				printf("%d kadar balığınızı sattık %d altın kazandınız:\n",Lsayac4,(Lsayac4 * 5));
				altin = altin + (Lsayac4 * 5);
				printf("Altınınız: %d\n",altin);
				Lj++;
			/*	if(Lbaliktutma == 0){ BUNLAR ŞUANLIK BÖLYE İTEMLER İLE BERABER DÜCELTİLECEK
					printf("\nYeni balık: Çipura.\n");
				}
				else if(Lbaliktutma == 1){
					printf("\nYeni balık: Alabalık.\n");
				}
				else if(Lbaliktutma == 2){
					printf("\nYeni balık: Palamut.\n");
				}
				else if(Lbaliktutma == 3){
					printf("\nYeni balık: Küçük Balık.\n");
				}	
			*/}
			
			printf("Balık tutmaya devam mı?\n1-Devam.\n2-Geri dön.\n");
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
	  	printf("Limana br göz attın ve geri çıkıyorsun.\n");
	  	printf("Geri dönülüyor...\n");
	  	break;
	  }
    }
					
				
				break;	
					
				case 12:
					
					while(Esay!=0)
					{
		
						printf("hangi alandaki eşyalarınıza bakmak istiyorsunuz?\n");
						printf("[1] savaş aletleri \n[2] zırhlar\n[3] iksirler ve petler\n[4]ziynet eşyaları\n");
						printf("seçiminiz: ");
						scanf("%d",&Esay1);
		
						if(Esay1==1)
						{
							printf("[1]Kısa Kılıç(Hasarı 20 arttırır): %d              [2]Uzun Kılıç(Hasarı 30 arttırır): %d      [3]Tek Elli Ağır Kılıç(Hasarı 40 arttırır) : %d\n",kil[0],kil[1],kil[2]);
							printf("[4]Çift Elli Ağır Kılıç(Hasarı 50 arttırır): %d    [5]Ekmek Bıçağı(Hasarı 10 arttırır): %d    [6]Hançer(Hasarı 15 arttırır): %d\n",kil[3],bic[0],bic[1]);
							printf("[1]Kısa Balta(Hasarı 30 arttırır): %d              [2]Uzun Balta(Hasarı 50 arttırır): %d      [3]Tek Elli Ağır Balta(Hasarı 70 arttırır): %d\n",bal[0],bal[1],bal[2]);
							printf("[4]Çift Elli Ağır Balta(Hasarı 90 arttırır): %d \n",bal[3]);
							printf("[1]Uzun Mızrak(Hasarı 40 arttırır): %d             [2]Üç Başlı Mızrak(Hasarı 60 arttırır): %d \n",miz[0],miz[1]);
							printf("[3]Uzun Kargı(Hasarı 80 arttırır): %d              [4]Baltalı Kargı(Hasarı 100 arttırır): %d \n",kar[0],kar[1]);
							printf("[1]Kısa Yay(Okun hasarını 20 arttırır): %d         [2]Uzun Yay(Okun hasarını 30 arttırır): %d [3]Crossbow(Okun hasarını 50 arttırır): %d \n",yay[0],yay[1],yay[2]);
							printf("[4]Tahta Ok(Okun hasarını 2 arttırır: %d           [5]Taş Ok(Okun hasarını 4 arttırır): %d \n",ok[0],ok[1]);
							printf("[1]Klasik Yuvarlak Kalkan(Defansı 20 arttırır): %d [2]Klasik Uzun Kalkan(Defansı 30 arttırır): %d \n",kalkan[0],kalkan[1]);
							printf("[3]Büyük Yuvarlak Kalkan(Defansı 50 arttırır): %d  [4]Dayanıklı Yuvarlak Kalkan(Defansı 70 arttırır): %d \n",kalkan[2],kalkan[3]);
							system("pause");
						}
		
						else if(Esay1==2)
						{
							printf("[1]Eskimiş Miğfer(Defansı 10 arttırır): %d         [2]Klasik Miğfer(Defansı 15 arttırır): %d \n",mig[0],mig[1]);
							printf("[3]Kaliteli Miğfer(Defansı 20 arttırır): %d        [4]Dayanıklı Miğfer(Defansı 25 arttırır): %d \n",mig[2],mig[3]);
							printf("[1]Hasarlı Gövde Zırhı(Defansı 30 arttırır): %d    [2]Klasik Gövde Zırhı(Defansı 40 arttırır): %d \n",gov[0],gov[1]);
							printf("[3]Kaliteli Gövde Zırhı(Defansı 50 arttırır): %d   [4]Dayanıklı Gövde Zırhı(Defansı 60 arttırır): %d \n",gov[2],gov[3]);
							printf("[1]Parçalanmış Bacak Zırhı(Defansı 5 arttırır): %d [2]Klasik Bacak Zırhı(Defansı 10 arttırır): %d\n",bac[0],bac[1]);
							printf("[3]Kaliteli Bacak Zırhı(Defansı 15 arttırır): %d   [4]Dayanıklı Bacak Zırhı(Defansı 20 arttırır): %d \n",bac[2],bac[3]);
							printf("[1]Paslanmış Kol Zırhı(Defansı 5 arttırır): %d     [2]Klasik Kol Zırhı(Defansı 10 arttırır): %d \n",kol[0],kol[1]);
							printf("[3]Kaliteli Kol Zırhı(Defansı 15 arttırır): %d     [4]Sağlam Kol Zırhı(Defansı 20 arttırır): %d \n",kol[2],kol[3]);
							printf("[1]Yün Eldiven(Defansı 5 arttırır): %d             [2]Deri Eldiven(Defansı 10 arttırır): %d \n",eld[0],eld[1]);
							printf("[3]Kaliteli Eldiven(Defansı 15 arttırır): %d       [4]Ağır Eldiven(Defansı 20 arttırır): %d \n",eld[2],eld[3]);
							printf("[1]Yün Bot(Defansı 10 arttırır): %d                [2]Klasik Bot(Defansı 15 arttırır): %d \n",bot[0],bot[1]);
							printf("[3]Sağlam Bot(Defansı 20 arttırır): %d             [4]Dayanıklı Bot(Defansı 25 arttırır): %d \n",bot[2],bot[3]);
							system("pause");
						}
		
						else if(Esay1==3)
						{
							printf("[1]Kuvvet İksiri(Savaş sırasında +x hasar artışı)              [2]Sağlık İksiri(Savaş sırasında +x sağlık artışı)(eklenmedi)\n");
							printf("[3]Dayanıklılık İksiri(Savaş sırasında +x dayanıklılık artışı) [4]Şans İksiri(eklenmedi)\n");
							printf("[1]Kedi(Zihin yeteneği 50 artar): %d                           [2]Köpek(Tahmin yeteneği 50 artar): %d \n",pet[0],pet[1]);
							system("pause");
						}
		
						else if(Esay1==4)
						{
							printf("[1]Bronz Kolye: %d             [2]Altın Kolye: %d           [3]Elmas Kolye: %d \n",kolye[0],kolye[1],kolye[2]);
							printf("[1]Bronz Bileklik: %d          [2]Altın Bileklik: %d        [3]Elmas Bileklik: %d \n",bilek[0],bilek[1],bilek[2]);
							printf("[1]Bronz Yüzük: %d             [2]Altın Yüzük: %d           [3]Elmas Yüzük: %d \n",yuzuk[0],yuzuk[1],yuzuk[2]);	
							printf("[1]Bronz Küpe: %d              [2]Altın Küpe: %d            [3]Elmas Küpe: %d \n",kupe[0],kupe[1],kupe[2]);
							system("pause");
						}		
		
						printf("[1]çıkmak istiyorum \n[2]bakmaya devam etmek istiyorum \nenvanterden çıkmak ister misiniz: ");
						scanf("%d",&Esay2);
						
						if(Esay2==1)
						{
							Esay--;
						}
					}
					
				break;
				
				case 13:
					printf("Nizam Sövalyeleri Kalesine girdin. İçeride bir şövalye seni karşılıyor\n");
					printf("Nizam Şövalyesi giriş biletini görebilir miyim?  ");				
					scanf("%d",&Kbilet);
					if(Kbilet==1){
						printf("Nizam Şövalyeleri Kalesine hoşgeldin! Kalenin içinde istediğin gibi gezebilirsin ama eşyalara fazla dokunmamaya çalış.\n");
						Ksay=1;
						while(Ksay!=0){
						printf("Ne yapmak istersin?\n");
						printf("[1]Etrafta dolaş [2]Kumandanın ofisine git [3]Kalenin deposuna git [4]siuuuuuu  ");
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
							printf("\nKalenin deposuna geldin ve birsürü deperli eşya ve silah olduğunu gördün.\n");
							printf("Ne yapacaksın?\n");
							printf("[1]Değerli eşyaları çal(Yakalanma riski yüksek)\n[2]Silahları çal(Yakalanma riski yüksek)\n[3]Herşeyi çal(Yakalanma riski çok yüksek)\n[4]Hiçbirşeye ellemeden depodan ayrıl  ");
							scanf("%d",&Kdepo);
							if(Kdepo==1){
								
							}
							else if(Kdepo==2){
								
							}
							else if(Kdepo==3){
								
							}
							else if(Kdepo==4){
								printf("Hiçbir değerli eşya ve silaha dokunmadın ve depodan ayrıldın.\n");
								
							}
						}
						else if(Ksecim==4){
							Ksay=0;
						}
			}
					}
					else{
						printf("Şövalye sana siktir çekti ve seni kaleden kovdu.");
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
				printf("\n\n-------Seviye Atladınız!!-------");
				yetenekpuani();
				}
			}
			/*if(xp>=10 && lvl==0){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}
			if(xp>=20 && lvl==1){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}
			if(xp>=45 && lvl==2){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}
			if(xp>=100 && lvl==3){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}
			if(xp>=300 && lvl==4){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}
			if(xp>=800 && lvl==5){ 
			lvl++;
			printf("\n\n-------Seviye Atladınız!!-------");
			yetenekpuani();
			}*/
			
			system("pause");
			system("cls");
			
			if((((hiz/100)-Igun)>1)&&can>0)
			{
			printf("\n\nÇok hızlısın gün bitmeden bir iş daha yapabilirsin\n\n");
			}
			Igun++;
		}
			int oyunsayac=0; //SORUN OLURSA İNTİ SİL
			intyilanyumurtasialmahakki=0;
			printf("GÜN BİTTİ\n");
            gun +=1;
			
		
		}
	}
	else if(sec=='n')
	{
		printf("Keşke bir şans verseydin :'(");
	}
	else
	{
		printf("ne diyorsun be");
	}
	
	
	
	return 0;
}
