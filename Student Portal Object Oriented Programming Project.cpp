	#include <iostream>
	#include <cstring>
	#include <vector>
	#include <iomanip>
	#include <regex>
	
	using namespace std;
	
	class StudentReport
	{
		private:
		string program;
		int regID;
		string name;
		string fName;
		string gender;
		string religion;
		string nationality;
		string eAddress;
		public:
		bool addPersonalInfo(string p, int rID, string n1, string fn, string g, string r, string n2, string eA)
		{
		  	program = p;
			regID = rID;
			name = n1;
			fName = fn;
			gender = g;
			religion = r;
			nationality = n2;
			eAddress = eA;
		    return true;
		   	
	}
	
		string getPersonalInfo()
		{
			return "	Registration ID :   	" + to_string(regID) +" Name :  " + name +  "   Father's Name' :    " + fName + "   Gender :    " + gender + "  Program Enrolled : " + program + "Religion : " + religion + "Nationality : " + nationality + "Email Address : " +eAddress;  
		}
		
		string getRegID()
		{
			return to_string(regID);
		}
		};
	
	class AttendanceReport : public StudentReport
	{
	private:
	int sNo;
	string subject;
	int totalClasses;
	int totalHrs;
	int attendance;
	int absence;
	int attHrs;
	int absHrs;
	double attPercentage;
	
	public:
	bool setData(int sno, string s, int TC, int TH, int att, int ab, int atth, int abhr, double attP)
	{
	sNo = sno;
	subject = s;
	totalClasses = TC;
	totalHrs = TH;
	attendance = att;
	absence = ab;
	attHrs = atth;
	absHrs = abhr;
	attPercentage = attP;
	return true;
	}
	
	string getData()
	{
	return "Serial No : " + to_string(sNo) + "	Subject : 	" + subject + "	Total Classes : 	" + to_string(totalClasses) + "	Attendance : 	" + to_string(attendance)+"	Absence : 	" + to_string(absence) + "	Attendance Hours : 	" + to_string(attHrs) + "	Absent Hours 	: " + to_string(absHrs) + "	Attendance Percentage : 	" + to_string(attPercentage);
	}
	
	string getSerialNo()
	{
	return to_string(sNo);
	}
	};
	
	class RegisteredCourses
	{
	private:
	string courseCode;
	string courseTitle;
	int creditHrs;
	string preReq;
	int serial;
	
	public:
	bool addData(string cC, string cT, int cHr, string pR, int s)
	{
	serial = s;
	courseCode = cC;
	courseTitle = cT;
	creditHrs = cHr;
	preReq = pR;
	return true;
	}
	
	string returnData()
	{
	return "Serial No : 	"+to_string(serial)+"	Course Code : 	"+courseCode+"	Course Title : 	"+courseTitle+"	Credit Hours : 	" + preReq;
	}
	   
	   string getSerial()
	   {
	       return to_string(serial);
	   }
	};
	
	class gradeReport
	{
	    private:
		int IDgr;
	    string courseName;
	    int creditHrs;
	    char grade;
	
	    public:
	    bool setGrade(string cN, int cHr, char g, int idgr)
	    {
	        int IDgr = idgr;
	        courseName = cN;
	        creditHrs = cHr;
	        grade = g;
	        return true;
	    }
	
	string getGrade()
	{
	return	 "SNO	:	" + to_string(IDgr) + "	Course : 	"+courseName+"	Credit Hour : 	"+to_string(creditHrs)+"	Grade : 	"+to_string(grade);
	}
	
	string takeId()
	{
		return to_string(IDgr);
	}
	
	};
	
	
	class feeGenerator : public StudentReport
	{
	private:
	int regID;
	int session;
	
	public:
	bool setInformation(int rID, int sess)
	{
	regID = rID;
	session = sess;
	return true;
	}
	
	int getInformation()
	{
	return regID;
	return session;
	}
	};
	
	int main()
	{
	
	cout<<"////Welcome to Student Management System////"<<endl;
	cout<<"//////////////////////////////////////////////"<<endl;
	cout<<"Please enter your authentication ID	:	"<<endl;
	string authID;
	cin>>authID;
	cout<<"	Authentication Approved	"<<endl;
	
	int choice;
	bool isCon;
	int id = 0;
	string isContinue;
	string deleteId;
	int choice1;
	int id1 = 0;
	string isContinue1;
	bool isCon1;
	string deleteId1;
	
	string p1;
	int r1;
	string n1;
	string fN1;
	string g1;
	string r2;
	string n2;
	string eA1;
	
	StudentReport A;
	vector<StudentReport>Access;
	vector<StudentReport>::iterator SR;
	
	AttendanceReport B;
	   vector<AttendanceReport>Access2;
	   vector<AttendanceReport>::iterator AR;
		  	int choice2;
			int id2 = 0;
			string isContinue2;
			bool isCon2;
			string deleteSerialNo;
			    int sNo1 = 0;
				string subject1;
				int totalClasses1;
				int totalHrs1;
				int attendance1;
				int absence1;
				int attHrs1;
				int absHrs1;
				double attPercentage1;
	   
	      RegisteredCourses C;
		vector<RegisteredCourses> Access3;
		vector<RegisteredCourses>::iterator RC;
			int choice3;
			string isContinue3;
			bool isCon3;
			string deleteSerialNo1;
				string courseCode1;
				string courseTitle1;
				int creditHrs1;
				string preReq1;
				int serial1 = 0;
				
				
	   
	   gradeReport D;
		vector<gradeReport> Access4;
		vector<gradeReport>::iterator GR;
			int choice4;
			int id4 = 0;
			string isContinue4;
			bool isCon4;
			string deleteId4;
			string courseName4;
			int creditHrs4;
			char grade4;
				
	
	
	
	
	
	
	do
	    {
	        cout<<"Enter your choice 1.Student Report, 2.Attendance Report, 3.Registered Courses, 4.Grade Report, 5.Log Out :  "<<endl;
	        cin>>choice;
	       
	            switch(choice)
	            {
	            case 1:
	                do
	    	{
	        cout<<"Enter your choice 1.AddData, 2.ListData, 3.EraseData, 4.Delete, 5.ExitProgram :  "<<endl;
	        cin>>choice1;
	       
	            switch(choice1)
	            {
	            case 1:
	                cout<<"Adding Data : "<<endl;
	                isCon = true;
	                while(isCon == true)
	                {
	                    id = id + 1;
	                    cout<<"Enter Program Title, Registration ID, Student's Name, Father's Name, Gender, Religion, Nationality and Email Address in order    :   "<<endl;
	                    cin>>p1>>r1>>n1>>fN1>>g1>>r2>>n2>>eA1;
	                    A.addPersonalInfo(p1,r1,n1,fN1,g1,r2,n2,eA1);
	                    Access.push_back(A);
	                    cout<<"Do you want to add another Student Data  (Y/N)  :   "<<endl;
	                    cin>>isContinue;
	                    if(isContinue == "N")
	                        {
	                            isCon = false;
	                        }
	                       
	                           
	                }    
	                        break;
	                       
	            case 2:
	                cout<<"Listing all Students Data : "<<endl;
	                    if(Access.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                    }
	                   
	                    for( SR = Access.begin(); SR != Access.end(); SR++)
	                    {
	                       
	                        cout<<SR->getPersonalInfo();
	                        cout<<endl;
	                    }
	                        break;
	               
	               
	                   
	               
	            case 3:
	                 cout<<"Deleting Student's Data' : "<<endl;
	                    {
	                        if(Access.size() == 0)
	                        {
	                   
	                        cout<<"You have not added any data yet    "<<endl;
	                        break;
	                        }
	                       
	                   
	                        for( SR = Access.begin(); SR != Access.end(); SR++)
	                        {
	                           
	                            cout<<SR->getPersonalInfo();
	                            cout<<endl;
	                        }
	                           
	                        cout<<"Enter the Registration ID :   "<<endl;
	                        cin>>deleteId;
	                   
	                        for(  SR = Access.begin(); SR != Access.end(); SR++)
	                        {
	                            cout<< SR->getRegID() <<" "<<endl;
	                            if(deleteId == SR->getRegID())
	                            {
	                                Access.erase(SR);      
	                                break;
	                            }
	                            cout<<endl;
	                        }
	                        for( SR = Access.begin(); SR != Access.end(); SR++)
	                        {
	                            cout<<"After deletion   :   "<<endl;
	                            cout<<SR->getPersonalInfo();
	                            cout<<endl;
	                        }
	                       
	                            break;  
	                    }
	            case 4:
	                        cout<<"Deleting all data : "<<endl;
	                       
	                        if(Access.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any tasks yet    "<<endl;
	                        break;
	                    }
	                    Access.clear();
	                    for( SR = Access.begin(); SR != Access.end(); SR++)
	                    {
	                       
	                        cout<<SR->getPersonalInfo();
	                        cout<<endl;
	                    }
	                        break;
	                       
	               
	            case 5:
	                       // return 0;
	                        break;
	                         }  
	    	}while(choice1<5);    
	                        break;
	                       
	            case 2:
	                 do
	    {
	        cout<<"Enter your choice 1.Add Subject Details, 2.List All Details, 3.Erase Data, 4.Delete, 5.Exit Program :  "<<endl;
	        cin>>choice2;
	       
	            switch(choice2)
	            {
	
	            case 1:
	                cout<<"Adding Data : "<<endl;
	                isCon2 = true;
	                while(isCon2 == true)
	                {
	                    sNo1 = sNo1 + 1;
	                    cout<<"Enter Subject Title, Total Classes, Total Hours, Classes Taken, Classes Missed, Attendance Hours, Absence Hours and Attendance Percentage in order    :   "<<endl;
	                    cin>>subject1>>totalClasses1>>totalHrs1>>attendance1>>absence1>>attHrs1>>absHrs1>>attPercentage1;
	                    B.setData(sNo1,subject1,totalClasses1,totalHrs1,attendance1,absence1,attHrs1,absHrs1,attPercentage1);
	                    Access2.push_back(B);
	                    cout<<"Do you want to add another Subject Details  (Y/N)  :   "<<endl;
	                    cin>>isContinue2;
	                    if(isContinue2 == "N")
	                        {
	                            isCon2 = false;
	                        }
	                       
	                           
	                }    
	                        break;
	                       
	            case 2:
	                cout<<"Listing all Data : "<<endl;
	                    if(Access2.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                    }
	                   
	                    for( AR = Access2.begin(); AR != Access2.end(); AR++)
	                    {
	                       
	                        cout<<AR->getData();
	                        cout<<endl;
	                    }
	                        break;
	               
	               
	                   
	               
	            case 3:
	                 cout<<"Deleting Subject Data : "<<endl;
	                    {
	                        if(Access2.size() == 0)
	                        {
	                   
	                        cout<<"You have not added any data yet    "<<endl;
	                        break;
	                        }
	                       
	                   
	                        for( AR = Access2.begin(); AR != Access2.end(); AR++)
	                        {
	                           
	                            cout<<AR->getData();
	                            cout<<endl;
	                        }
	                           
	                        cout<<"Enter the Serial No :   "<<endl;
	                        cin>>deleteSerialNo;
	                   
	                        for(  AR = Access2.begin(); AR != Access2.end(); AR++)
	                        {
	                            cout<< AR->getSerialNo() <<" "<<endl;
	                            if(deleteSerialNo == AR->getSerialNo())
	                            {
	                                Access2.erase(AR);      
	                                break;
	                            }
	                            cout<<endl;
	                        }
	                        for( AR = Access2.begin(); AR != Access2.end(); AR++)
	                        {
	                            cout<<"After deletion   :   "<<endl;
	                            cout<<AR->getSerialNo();
	                            cout<<endl;
	                        }
	                       
	                            break;  
	                    }
	            case 4:
	                        cout<<"Deleting all data : "<<endl;
	                       
	                        if(Access2.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                        break;
	                    }
	                    Access2.clear();
	                    for( AR = Access2.begin(); AR != Access2.end(); AR++)
	                    {
	                       
	                        cout<<AR->getSerialNo();
	                        cout<<endl;
	                    }
	                        break;
	                       
	               
	            case 5:
	                        //return 0;
	                        break;
	                         }  
	    }while(choice2<5);
	                        break;
	               
	               
	                   
	               
	            case 3:
	                do
	    {
	        cout<<"Enter your choice 1.Add Course Details, 2.List All Details, 3.Erase Data, 4.Delete, 5.Exit Program :  "<<endl;
	        cin>>choice3;
	       
	            switch(choice3)
	            {
	
	            case 1:
	                cout<<"Adding Data : "<<endl;
	                isCon3 = true;
	                while(isCon3 == true)
	                {
	                    serial1 = serial1 + 1;
	                    cout<<"Enter Course Code, Course Title, Credit Hours, and Pre Requisite in order    :   "<<endl;
	                    cin>>courseCode1>>courseTitle1>>creditHrs1>>preReq1;
	                    C.addData(courseCode1, courseTitle1, creditHrs1, preReq1, serial1);
	                    Access3.push_back(C);
	                    cout<<"Do you want to add another Course Details  (Y/N)  :   "<<endl;
	                    cin>>isContinue3;
	                    if(isContinue3 == "N")
	                        {
	                            isCon3 = false;
	                        }
	                       
	                           
	                }    
	                        break;
	                       
	            case 2:
	                cout<<"Listing all Data : "<<endl;
	                    if(Access3.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                    }
	                   
	                    for( RC = Access3.begin(); RC != Access3.end(); RC++)
	                    {
	                       
	                        cout<<RC->returnData();
	                        cout<<endl;
	                    }
	                        break;
	               
	               
	                   
	               
	            case 3:
	                 cout<<"Deleting Course Data : "<<endl;
	                    {
	                        if(Access3.size() == 0)
	                        {
	                   
	                        cout<<"You have not added any data yet    "<<endl;
	                        break;
	                        }
	                       
	                   
	                        for( RC = Access3.begin(); RC != Access3.end(); RC++)
	                        {
	                           
	                            cout<<RC->returnData();
	                            cout<<endl;
	                        }
	                           
	                        cout<<"Enter the Serial No :   "<<endl;
	                        cin>>deleteSerialNo1;
	                   
	                        for(  RC = Access3.begin(); RC != Access3.end(); RC++)
	                        {
	                            cout<< RC->getSerial() <<" "<<endl;
	                            if(deleteSerialNo1 == RC->getSerial())
	                            {
	                                Access3.erase(RC);      
	                                break;
	                            }
	                            cout<<endl;
	                        }
	                        for( RC = Access3.begin(); RC != Access3.end(); RC++)
	                        {
	                            cout<<"After deletion   :   "<<endl;
	                            cout<<RC->getSerial();
	                            cout<<endl;
	                        }
	                       
	                            break;  
	                    }
	            case 4:
	                        cout<<"Deleting all data : "<<endl;
	                       
	                        if(Access3.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                        break;
	                    }
	                   Access3.clear();
	                   for( RC = Access3.begin(); RC != Access3.end(); RC++)
	                   {
	                      
	                       cout<<RC->getSerial();                       cout<<endl;
	                   }
	                       break;
	                      
	               
	          case 5:
	                      // return 0;
	                        break;
	                         }  
	   }while(choice3<5);
	                            break;  
	                    
	            case 4:
	                    	do
	   					 {
	        cout<<"Enter your choice 1.Add Course Details, 2.List All Details, 3.Erase Data, 4.Delete, 5.Exit Program :  "<<endl;
	        cin>>choice4;
	       
	            switch(choice4)
	            {
	
	            case 1:
	                cout<<"Adding Data : "<<endl;
	                isCon4 = true;
	                while(isCon4 == true)
	                {
	                    id4 = id4 + 1;
	                    cout<<"Course Title, Credit Hours, and Grade in order    :   "<<endl;
	                    cin>>courseName4>>creditHrs4>>grade4;
	                    D.setGrade(courseName4, creditHrs4, grade4, id4);
	                    Access4.push_back(D);
	                    cout<<"Do you want to add another Course Details  (Y/N)  :   "<<endl;
	                    cin>>isContinue4;
	                    if(isContinue4 == "N")
	                        {
	                            isCon4 = false;
	                        }
	                       
	                           
	                }    
	                        break;
	                       
	            case 2:
	                cout<<"Listing all Data : "<<endl;
	                    if(Access4.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                    }
	                   
	                    for( GR = Access4.begin(); GR != Access4.end(); GR++)
	                    {
	                       
	                        cout<<GR->getGrade();
	                        cout<<endl;
	                    }
	                        break;
	               
	               
	                   
	               
	            case 3:
	                 cout<<"Deleting Course Data : "<<endl;
	                    {
	                        if(Access4.size() == 0)
	                        {
	                   
	                        cout<<"You have not added any data yet    "<<endl;
	                        break;
	                        }
	                       
	                   
	                        for( GR = Access4.begin(); GR != Access4.end(); GR++)
	                        {
	                           
	                            cout<<GR->getGrade();
	                            cout<<endl;
	                        }
	                           
	                        cout<<"Enter the Serial No :   "<<endl;
	                        cin>>deleteId4;
	                   
	                        for(  GR = Access4.begin(); GR != Access4.end(); GR++)
	                        {
	                            cout<< GR->takeId() <<" "<<endl;
	                            if(deleteId4 == GR->takeId())
	                            {
	                                Access4.erase(GR);      
	                                break;
	                            }
	                            cout<<endl;
	                        }
	                        for( GR = Access4.begin(); GR != Access4.end(); GR++)
	                        {
	                            cout<<"After deletion   :   "<<endl;
	                            cout<<GR->takeId();
	                            cout<<endl;
	                        }
	                       
	                            break;  
	                    }
	            case 4:
	                        cout<<"Deleting all data : "<<endl;
	                       
	                        if(Access4.size() == 0)
	                    {
	                   
	                        cout<<"You have not added any information yet    "<<endl;
	                        break;
	                    }
	                    Access4.clear();
	                    for( GR = Access4.begin(); GR != Access4.end(); GR++)
	                    {
	                       
	                        cout<<GR->takeId();
	                        cout<<endl;
	                    }
	                        break;
	                       
	               
	            case 5:
	                      //  return 0;
	                        break;
	                         }  
	    }while(choice4<5);
	                        break;
	                       
	               
	            case 5:
	            		{
						
	                        return 0;
	                        break;
	            		}    
	    			}	
	    }while(choice<5);
	    
	    
	
	}
