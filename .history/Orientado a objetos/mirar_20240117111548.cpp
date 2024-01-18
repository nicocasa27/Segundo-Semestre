





int userDecision; // This variable will store the users decision.
cout << "What kind of trip would you like?\n" << "Enter '1' for a round-trip or '2' for a one-way trip: ";
cin >> userDecision;
while(cin.fail() || userDecision != 1 || userDecision != 2){ // This while loop checks if what the user entered is char,alpha or any other invalid value other than 1 or 2.
      cout << "\n\n" << "Invalid Entry!\n" << "You can only enter '1' or '2': ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> userDecision;
}