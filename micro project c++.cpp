#include<iostream>
int BT,M=500,BS=150,US=200,I=2000;
class hospital
{
	private:
		
    public:
    	char name[50],Gender[10],Address[100];
        int dd,mm,yy,Mobile,Hight,Weight,dd1,mm1,yy1,Age;

    	void patient_detail()
    	{
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
            std::cout<<"\t\tPATIENT DETAIL"<<std::endl<<std::endl;
            std::cout<<"Today's Date:(dd/mm/yy)"<<std::endl;
			std::cout<<"dd:";
    		std::cin>>dd1;
    		std::cout<<"mm:";
    		std::cin>>mm1;
    		std::cout<<"yy:";
    		std::cin>>yy1;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"Patient's Name:";
    		std::cin>>name;
    		std::cout<<"\n";
    	    std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"Date of birth:(dd/mm/yy)"<<std::endl;
    		std::cout<<"dd:";
    		std::cin>>dd;
    		std::cout<<"mm:";
    		std::cin>>mm;
    		std::cout<<"yy:";
    		std::cin>>yy;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"AGE:";
    		std::cin>>Age;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"Gender:";
    		std::cin>>Gender;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"Address:";
    		std::cin>>Address;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
    		std::cout<<"Mobile No.:";
    		std::cin>>Mobile;
    		std::cout<<"\n";
    		std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
			std::cout<<"Hight(in cm):";
			std::cin>>Hight;
			std::cout<<"\n";
			std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
			std::cout<<"Weight(in kg):";
			std::cin>>Weight;
			std::cout<<"\n";
			std::cout<<"________________________________________________________________________________"<<std::endl<<std::endl;
			std::cout<<"\n";
			system("CLS");	
		}			
};
class display:public hospital
{
  private:
  	int x;
  	int a;
  public:
  void Type()
		{		
		    
			std::cout<<"\nWhich type of symptoms you see in patiant: "<<std::endl;
			std::cout<<"1.Fever"<<std::endl;
			std::cout<<"2.Headache"<<std::endl;
			std::cout<<"3.Stomach ache"<<std::endl;
			std::cout<<"4.Cold"<<std::endl;
			std::cout<<"5.Dengue"<<std::endl;
			std::cout<<"6.Malaria"<<std::endl;
			std::cout<<"7.Taifaid"<<std::endl;
			std::cout<<"8.Chikungunya"<<std::endl;
			std::cout<<"9.Heart Attack"<<std::endl;
			std::cout<<"10.Accidental Injury"<<std::endl;
			std::cout<<"ENTER NO.:";
			std::cin>>a;
			system("CLS");
			
			switch(a)
			{
				case 1:
					 Fever();
					break;
				case 2:
					 Headache();
			        break;
			    case 3:
			    	 Stomach_ache();
			    	break;
			    case 4:
			    	 Cold();
			    	break;
			    case 5:
			    	 Dengue();
			    	break;
			    case 6:
			    	 Malaria();
			    	break;
			    case 7:
			    	 Taifaid();
			    	break;
			    case 8:
			    	 Chikungunya();
			    	break;
			    case 9:
			    	 Heart_Attack();
			    	break;
			    case 10:
			    	 Accidental_Injury();
			    	break;
			}
			
        }
    	void Fever()
	    {
	      std::cout<<"1.Normal fever"<<std::endl;
	      std::cout<<"2.Major fever"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Nfever();
	      		break;
	        case 2:
	        	Mfever();
	        	break;
		  }
		  	
	    }
	    void Headache()
	    {
	 	  std::cout<<"1.Normal Headache"<<std::endl;
	      std::cout<<"2.Major Headache"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Nheadache();
	      		break;
	        case 2:
	        	Mheadache();
	        	break;
		  }
		  	
	    }
	    void Stomach_ache()
	    {
		  std::cout<<"1.Normal Stomach ache"<<std::endl;
	      std::cout<<"2.Major Stomach ache"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Nstomach_ache();
	      		break;
	        case 2:
	        	Mstomach_ache();
	        	break;
		  }
		  	
	    }
	    
	    void Cold()
	    {
		  std::cout<<"1.Normal Cold"<<std::endl;
	      std::cout<<"2.Major Weakness"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Ncold();
	      		break;
	        case 2:
	        	Mcold();
	        	break;
		  }
		  	
	    }
	    void Dengue()
	    { 
		  std::cout<<"1.Normal Dengue"<<std::endl;
	      std::cout<<"2.Major Dengue"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Ndengue();
	      		break;
	        case 2:
	        	Mdengue();
	        	break;
		  }
		  	
	    }
	    void Malaria()
	    {
		  std::cout<<"1.Normal Malaria"<<std::endl;
	      std::cout<<"2.Major Malaria"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Nmalaria();
	      		break;
	        case 2:
	        	Mmalaria();
	        	break;
		  }
		  	
	    }
	    void Taifaid()
	    {
		  std::cout<<"1.Normal Taifaid"<<std::endl;
	      std::cout<<"2.Major Taifaid"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Ntaifaid();
	      		break;
	        case 2:
	        	Mtaifaid();
	        	break;
		  }
		  	
	    }
	    void Chikungunya()
	    {
		  std::cout<<"1.Normal Chikungunya"<<std::endl;
	      std::cout<<"2.Major Chikungunya"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		NChikungunya();
	      		break;
	        case 2:
	        	MChikungunya();
	        	break;
		  }
		  	
	    }
	    void Heart_Attack()
	    {
		  std::cout<<"1.Normal Heart Attack"<<std::endl;
	      std::cout<<"2.Major Heart Attack"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	      system("CLS");
	      switch(x)
	      {
	      	case 1:
	      		Nheart_attack();
	      		break;
	        case 2:
	        	Mheart_attack();
	        	break;
		  }
		  	
	    }
	    void Accidental_Injury()
	    {
	      std::cout<<"1.Normal Accidental Injury"<<std::endl;
	      std::cout<<"2.Major Accidental Injury"<<std::endl;
	      std::cout<<"Chosse any one:"<<std::endl;
	      std::cin>>x;
	   	  system("CLS");

	      switch(x)
	      {
	      	case 1:
	      		Naccidental_injury();
	      		break;
	        case 2:
	        	Maccidental_injury();
	        	break;
		  }
	    }
		void Nfever();
		void Mfever();
		void Nheadache();
		void Mheadache();
		void Nstomach_ache();
		void Mstomach_ache();
		void Ncold();
		void Mcold();
		void Ndengue();
		void Mdengue();
	    void Nmalaria();	
	    void Mmalaria();
	    void Ntaifaid();
	    void Mtaifaid();
	    void NChikungunya();
	    void MChikungunya();
	    void Nheart_attack();
	    void Mheart_attack();
	    void Naccidental_injury();
	    void Maccidental_injury();
};
void display::Nfever()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 OR 2 DAYS."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M;
  std::cout<<"TOTAL BILL:"<<BT;
} 
void display::Mfever()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\tDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl<<std::endl;	
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Nheadache()
{
 std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 OR HALF DAY."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mheadache()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<name<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 OR 2 DAYS."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl<<std::endl;
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Nstomach_ache()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 OR HALF DAY."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mstomach_ache()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-NEEDED"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl<<std::endl;
  BT=M+US;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Ncold()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"/tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 3 DAY."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD AND DON'T DRINK COLD DRINK."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mcold()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-NEEDED"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD "<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD AND DON'T DRINK COLD DRINK."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl<<std::endl;
  BT=M+US;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;	
}
void display::Ndengue()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"/tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"YOU HAVE TO GIVE REGULAR BLOOD SAMPLE."<<std::endl;	
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mdengue()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 2 TO 3 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"YOU HAVE TO GIVE REGULAR BLOOD SAMPLE."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Nmalaria()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mmalaria()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 2 TO 3 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;	
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Ntaifaid()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"YOU HAVE TO CHECK YOUR TAMPRATUER REGULARLY."<<std::endl;	
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mtaifaid()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 3 TO 4 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"YOU HAVE TO CHECK YOUR TAMPRATUER REGULARLY."<<std::endl;	
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;	
  BT=M+BS;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::NChikungunya()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU WANT TO TAKE REST FOR 1 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;	
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::MChikungunya()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 3 TO 4 WEEK."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;	
  BT=M;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Nheart_attack()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-NEEDED"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU WANT TO TAKE REST FOR 1 OR 2 MONTHS."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl;	
  std::cout<<"YOU HAVE DO ROUTINE CHECK UP."<<std::endl<<std::endl;
  BT=M+BS+US;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Mheart_attack()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"\tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-NEEDED"<<std::endl;
  std::cout<<"URINE SAMPLE:-NEEDED"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU WANT TO TAKE REST FOR 3 OR 4 MONTHS."<<std::endl;
  std::cout<<"DON'T EAT JUNK FOOD."<<std::endl;
  std::cout<<"YOU HAVE TO MEET THE DOCTER AFTER 3 DAYS,THIS IS IMPORTENT."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl;	
  std::cout<<"YOU HAVE TO DO ROUTINE CHECK UP."<<std::endl;
  std::cout<<"YOU HAVE TO STAY IN ICU FOR 2 TO 3 DAYS."<<std::endl<<std::endl;	
  BT=M+BS+US+I;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}
void display::Naccidental_injury()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"/tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 MONTH."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl<<std::endl;
  BT=M+I;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
}  
void display::Maccidental_injury()
{
  std::cout<<"\t\t\t\tBILL"<<std::endl;
  std::cout<<"NAME:"<<name<<"\tTODAY DATE(dd/mm/yy):"<<dd1<<"/"<<mm1<<"/"<<yy1<<std::endl;
  std::cout<<"AGE:"<<Age<<"\nGENDER:"<<Gender<<"\nHIGHT(in cm):"<<Hight<<"\nWEIGHT(in kg):"<<Weight<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
  std::cout<<"ADDRESS:"<<Address<<"/tMOBILE NO.:"<<Mobile<<std::endl;
  std::cout<<"--------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"MEDICINE:-TAKE IT FROME THE COUNTER"<<std::endl<<std::endl;
  std::cout<<"BLOOD SAMPLE:-"<<std::endl;
  std::cout<<"URINE SAMPLE:-"<<std::endl<<std::endl;
  std::cout<<"WHAT TO DO:-"<<std::endl;
  std::cout<<"YOU HAVE TO TAKE REST FOR 1 OR 2 MONTH."<<std::endl;
  std::cout<<"IF YOUR CONDITION WILL NOT IMPROVE THEN MEET THE DOCTER."<<std::endl;	
  std::cout<<"YOU HAVE TO STAY IN ICU FOR 2 TO 3 DAYS."<<std::endl<<std::endl;	
  BT=M+I;
  std::cout<<"\t\t\tTOTAL BILL:"<<BT;
  
} 
int main()
{
	
	display d1;
	std::cout<<"\t\t\tWELCOME TO PARIVARIK HOSPITAL"<<std::endl;
	std::cout<<"________________________________________________________________________________"<<std::endl;
	d1.patient_detail();
	d1.Type();		
}
