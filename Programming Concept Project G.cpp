#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

#define ppn 0.10 //PPN = 10%
const int diskon = 25000;

int main()
{
	char nama[50], menu[120], back;
	int jumlah,skincare, makan, total, bayar, kurang, bonus, pajak, kembalian,
		harga[30]={26200, 189000, 59000, 89380, 99000, 59000, 116100, 100000, 130380, 107525, 102000, 91375, 97580, 169000, 119999, 58900, 54850, 62350, 58500, 58900 , 33750, 92400, 123464, 66900 , 109000, 30000, 305150,  87550, 84150,51850 }, i=0;
	bool saldo;
	do{
		system("CLS");
		cout<<"===================================================================== BEAUTEAMOR ====================================================="<<endl;
		cout<<"=================================================================== BEAUTEAMOR.ID ===================================================="<<endl;
		cout<<"================================================Glowing Skin Care is The Result of Proper Skin Care==================================="<<endl;
		cout<<endl;
		cout<<"Please Input Your Name : " ; cin>>nama; 
		cout<<"Available Skin Care---"<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|	[1] Wardah UV Shield Essential Sunscreen Gel SPF30 PA++ 40ml                                                        = Rp 26200 |"<<endl;
		cout<<"|	[2] Skintific Cover All Perfect Cushion High Coverage Poreless&Flawless Foundation 24H Long-lasting SPF35 PA++++    = RP 189000|"<<endl;
		cout<<"|	[3] Scarlett Whitening Body Cream Jolly 300ml                                                                       = RP 59000 |"<<endl;
		cout<<"|	[4] Luxcrime Ultra Creamy Lip Velvet                                                                                = Rp 89380 |"<<endl;
		cout<<"|	[5] Skintific Amino Acid Ultra Gentle Cleansing Mousse 100ml                                                        = Rp 99000 |"<<endl;
		cout<<"|	[6] Scarlett Whitening Body Serum Charming 250ml                                                                    = Rp 59000 |"<<endl;
		cout<<"|	[7] Npure Licorice Light Up Brightening Pad - 30pads                                                                = Rp 116100|"<<endl;
		cout<<"|	[8] Npure Licorice Creamy Light Moisturizer 25gr                                                                    = Rp 100000|"<<endl;
		cout<<"|	[9] Luxcrime Ultra Cover Foundation Balm                                                                            = Rp 130380|"<<endl;
		cout<<"|	[10]Adara Bee White Spotless GEL 20gr                                                                               = Rp 107525|"<<endl;
		cout<<"|	[11]Adara Bee White Yogurt Cream - Day | Night                                                                      = Rp 102000|"<<endl;
		cout<<"|	[12]Adara C Bright Serum 30ml                                                                                       = Rp 91375 |"<<endl;
		cout<<"|	[13]Luxcrime Ultra Dreamy Eyeshadow Compact                                                                         = Rp 97580 |"<<endl;
		cout<<"|	[14]Skintific MSH Niacinamide Brightening Moisturizer Glowing Moisture Gel 30gr                                     = Rp 169000|"<<endl;
		cout<<"|	[15]Bioaqua Face Mist Spray Wajah Portable 150ml                                                                    = Rp 119999|"<<endl;
		cout<<"|	[16]Azarine Hydrasoothe Sunscreen Gel SPF 45 (BLUE LIGHT) - 30ml | 50ml                                             = Rp 58900 |"<<endl;
		cout<<"|	[17]Azarine Purifying Deep Cleansing Clay Mask 60gr                                                                 = Rp 54850 |"<<endl;
		cout<<"|	[18]Azarine Toner 90ml - Multi Acids Glowing | Moisture Hydrating | Beginner Exfoliating | Mild Purifying           = Rp 62350 |"<<endl;
		cout<<"|	[19]Azarine Body Guard Moisturizer Sunscreen Serum 100ml - BT21 Edition                                             = Rp 58500 |"<<endl;
		cout<<"|	[20]Azarine Hydrasoothe Sunscreen 'MIST' SPF50 PA++++ 60ml                                                          = Rp 58900 |"<<endl;
		cout<<"|	[21]Kahf Skin Energizing & Brightening Face Wash 100ml                                                              = Rp 33750 |"<<endl;
		cout<<"|	[22]Maybelline Superstay Matte Ink Liquid Matte Lipstick                                                            = Rp 92400 |"<<endl;
		cout<<"|	[23]Maybelline Sky High Waterproof Mascara 6ml                                                                      = Rp 123464|"<<endl;
		cout<<"|	[24]Maybelline Volume Express Hypercurl Waterproof Mascara 5ml                                                      = Rp 66900 |"<<endl;
		cout<<"|	[25]LVJ lavojoy Sparkling Daydream Body Wash - Dancing In The Mist | Summertrain                                    = Rp 109000|"<<endl;
		cout<<"|	[26]MeToo Mouthwash Fresh Mint 100ml | 250ml - Obat Kumur Probiotik | Nafas segar | Pemutih gigi                    = Rp 30000 |"<<endl;
		cout<<"|	[27]Avoskin Your Skin Bae Glow Concentrate Treatment Moisturizer Series 45ml                                        = Rp 305150|"<<endl;
		cout<<"|	[28]Adara P.M.S Ceramide Pudding Moisturizer 30gr                                                                   = Rp 87550 |"<<endl;
		cout<<"|	[29]Adara Overnight Skinpair Concentrate | Bakuchiol Anti Aging Serum 20ml                                          = Rp 84150 |"<<endl;
		cout<<"|	[30]Adara P.M.S Series Stay Clear Enzyme Wash 100gr                                                                 = Rp 51850 |"<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<" Hello "<< nama<< "WELLCOME TO THE SERVER"<< endl;
		cout<<"			(Input Your SkinCare Number)"<<endl;
		cout<<" Please Choose Your SkinCare : "; cin >> skincare;
		
		//Percabangan
		switch(skincare){
			case 1:
				strcpy(menu,"Wardah UV Shield Essential Sunscreen Gel SPF30 PA++ 40ml");
				break;
			case 2:
				strcpy(menu,"Skintific Cover All Perfect Cushion High Coverage Poreless&Flawless Foundation 24H Long-lasting SPF35 PA++++ ");
				i=1;
				break;
			case 3:
				strcpy(menu,"Scarlett Whitening Body Cream Jolly 300ml ");
				i=2;
				break;
			case 4:
				strcpy(menu,"Luxcrime Ultra Creamy Lip Velvet ");
				i=3;
				break;
			case 5:
				strcpy(menu,"Skintific Amino Acid Ultra Gentle Cleansing Mousse 100ml  ");
				i=4;
				break;
			case 6:
				strcpy(menu,"Scarlett Whitening Body Serum Charming 250ml");
				i=5;
				break;
			case 7:
				strcpy(menu,"Npure Licorice Light Up Brightening Pad - 30pads");
				i=6;
				break;
			case 8:
				strcpy(menu,"Npure Licorice Creamy Light Moisturizer 25gr");
				i=7;
				break;
			case 9:
				strcpy(menu,"Luxcrime Ultra Cover Foundation Balm ");
				i=8;
				break;
			case 10:
				strcpy(menu,"Adara Bee White Spotless GEL 20gr ");
				i=9;
				break;
			case 11:
				strcpy(menu,"Adara Bee White Yogurt Cream - Day | Night  ");
				i=10;
				break;
			case 12:
				strcpy(menu,"Adara C Bright Serum 30ml");
				i=11;
				break;
			case 13:
				strcpy(menu,"Luxcrime Ultra Dreamy Eyeshadow Compact ");
				i=12;
				break;
			case 14:
				strcpy(menu,"Skintific MSH Niacinamide Brightening Moisturizer Glowing Moisture Gel 30gr ");
				i=13;
				break;
			case 15:
				strcpy(menu,"Bioaqua Face Mist Spray Wajah Portable 150ml");
				i=14;
				break;
			case 16:
				strcpy(menu,"Azarine Hydrasoothe Sunscreen Gel SPF 45 (BLUE LIGHT) - 30ml | 50ml");
				i=15;
				break;
			case 17:
				strcpy(menu,"Azarine Purifying Deep Cleansing Clay Mask 60gr");
				i=16;
				break;
			case 18:
				strcpy(menu,"Azarine Toner 90ml - Multi Acids Glowing | Moisture Hydrating | Beginner Exfoliating | Mild Purifying");
				i=17;
				break;
			case 19:
				strcpy(menu,"Azarine Body Guard Moisturizer Sunscreen Serum 100ml - BT21 Edition");
				i=18;
				break;
			case 20:
				strcpy(menu,"Azarine Hydrasoothe Sunscreen 'MIST' SPF50 PA++++ 60ml");
				i=19;
				break;
			case 21:
				strcpy(menu,"Kahf Skin Energizing & Brightening Face Wash 100ml ");
				i=20;
				break;
			case 22:
				strcpy(menu,"Maybelline Superstay Matte Ink Liquid Matte Lipstick");
				i=21;
				break;
			case 23:
				strcpy(menu,"Maybelline Sky High Waterproof Mascara 6ml     ");
				i=22;
				break;
			case 24:
				strcpy(menu,"Maybelline Volume Express Hypercurl Waterproof Mascara 5ml");
				i=23;
				break;
			case 25:
				strcpy(menu,"LVJ lavojoy Sparkling Daydream Body Wash - Dancing In The Mist | Summertrain");
				i=24;
				break;
			case 26:
				strcpy(menu,"MeToo Mouthwash Fresh Mint 100ml | 250ml - Obat Kumur Probiotik | Nafas segar | Pemutih gigi");
				i=25;
				break;
			case 27:
				strcpy(menu,"Avoskin Your Skin Bae Glow Concentrate Treatment Moisturizer Series 45ml ");
				i=26;
				break;
			case 28:
				strcpy(menu,"Adara P.M.S Ceramide Pudding Moisturizer 30gr");
				i=27;
				break;
			case 29:
				strcpy(menu,"Adara Overnight Skinpair Concentrate | Bakuchiol Anti Aging Serum 20ml");
				i=28;
				break;
			case 30:
				strcpy(menu,"Adara P.M.S Series Stay Clear Enzyme Wash 100gr");
				i=29;
				break;
			default:
				cout << "Not Available" << endl;
				goto ulang;
		}

	cout << " Are You a Member? Answer Y / N" << endl;
	char ticket ;
	cin >> ticket;
	
	if (ticket == 'Y')
	   {
		cout << "Congratulation, You Got 15 Point" <<endl;
       }
    else 
        cout << " OKAY THANK YOU " <<endl;
     
     
     
	cout << "Do You Want to be a Member? Answer Y / N" <<endl;   
    char member ;
	cin >> member;
	if (member == 'Y')
	   {
		cout << "Please Input Your Name " <<endl;
		cin>> nama;
		cout<<"Now You are Member"<<endl;
	  }
    else 
        cout << " OKAY THANK YOU " <<endl;
	
    
		
	cout<<"	You Choose " << menu <<endl;
	cout<<endl;
	cout<<"Total SkinCare : ";cin>> jumlah;
		
		makan = jumlah * harga[i];
		pajak = makan * ppn;
		total = pajak + makan;
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	                 BEAUTEAMOR.ID                 |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\tCustomer Name          : "	<< nama     <<endl;
		cout << "\tSkincare Menu          : "	<< menu     <<endl;
		cout << "\tTotal Skincare         : "	<< jumlah   <<" item " <<endl;
		cout << "\tSkincare Price         : "	<< harga[i] << " * "   << jumlah << endl;
		cout << "\tShop Tax               : "	<< pajak    <<endl;	
		cout << "\tTotal Payment          : Rp "<< total    <<endl;
		
		if(jumlah>=4){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "# You Get Discount : Rp " << diskon <<" #"<< endl;
			cout << "Total Payment After Discount  : Rp "<< total << endl;
		}
		
		cout << "--------------------------------------------" << endl;
		cout << "Please Pay Here                  		: Rp.";cin>>bayar;
		cout << endl;
				
		//Perulangan
		while (saldo=bayar<total){
			cout << "Your Money is Low, Please Pay Again : Rp. "; cin>>kurang;
			bayar+=kurang;
		};
		
		kembalian=bayar-total;
		cout << "Your Money \t\t\t Rp. " << bayar<<endl;
		cout << "Change Money \t\t\t\t Rp. "     << kembalian <<endl;
		
		ulang:
			cout << "			[Y = ya / N = no]"<<endl;
			cout << "		Do You Want to Buy Again ? [Y/N]  =  "; cin>>back;
		}while (back=='Y'||back=='y');
		
		
	srand (time(0));
	int number1 = rand()%10; // % is a reminder
	int number2 = rand()%10;
	cout << "Guess The Number and You Can Get the Price " <<number1<<"  and  " <<number2<<endl;
	cout<< "Guess the fisrt number"<<endl;
	int guess1;
	cin>>guess1;
	
	cout<< "Guess the second number" <<endl;
	int guess2;
	cin>>guess2;
	
if (number1==guess1 && number2==guess2 )
	cout << "You Win !! $10000"<<endl;
else if (number2==guess2 && number1==guess1)
	cout << "You Win !! $3000"<<endl;
else if (number1==guess1|| number2==guess2 || number1==guess1 || number2==guess2)
cout << "You Win!! $1000"<<endl;
else
cout << "Sorry, You Loose"<< endl;


    for (int i = 1; i <= 3; ++i) {
        cout <<  "Thank You For Shooping in Beauteamor"  << endl;
		 }
	
		cout << "         GROUP G     "<<endl;	
		cout << " ANISA NIRWANA N     "<<endl;	
		cout << " ASYIFA AQILA FAUZAN "<<endl;	
		cout << " IRENE PUTRI SIHITE  "<<endl;	
		cout << " RAFLI YAHYA HIDAYAH "<<endl;	
		
		return 0;
	}
