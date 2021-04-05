/*	STATE:2

	=====o=====
		
	 DEAD : 0
	 WIP  : 1
	 FULL : 2
	
	=====0=====

	#     #                                      
	##   ## #####  #####    ##   #####  # #####  
	# # # # #    # #    #  #  #  #    # # #    # 
	#  #  # #    # #    # #    # #    # # #    # 
	#     # #####  #    # ###### #####  # #####  
	#     # #   #  #    # #    # #   #  # #      
	#     # #    # #####  #    # #    # # #     
   ==============================================
   
	TITLE:

	DESCRIPTION:
	totalmente inutil,inexacto y peligroso, come mucha memoria(ssd,hdd,usb)
	
   ==============================================

*/
#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char* argv[])
{
	ofstream file;
	file.open("file.txt");
	long double n[3] = {1,1};
	long double nW;
	cout<< "n buscado?";
	cin>>nW;
	
	for (unsigned long i = 0; i < nW; i++)
	{
		file << n[0] << "\n";
		n[2]=n[1]+n[0];
		n[0]=n[1];
		n[1]=n[2];
	}
	
	file.close();
	system("pause");
	return 0;
}
