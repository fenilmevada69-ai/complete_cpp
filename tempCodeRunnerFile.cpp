void Bank :: scanData(){
	cout<<"\nEnter the Customer ID : ";
	cin>>custId;

    cin.ignore();

	cout<<"\nEnter the Customer Name : ";
    getline(cin,custName);
}