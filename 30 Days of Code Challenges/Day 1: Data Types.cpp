//https://www.hackerrank.com/challenges/30-data-types
    
    // Declare second integer, double, and String variables.
    int myint = 0;
    double mydouble = 0.0;
    string mystring = "";
    string temp = "";
    // Read and save an integer, double, and String to your variables.
    cin >> myint;
    cin >> mydouble;
    while(cin >> temp)
        mystring += temp + " ";
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + myint << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + mydouble << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + mystring << endl;
    
