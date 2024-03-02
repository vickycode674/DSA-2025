 void reverse(string &str,int i,int j)
{
	//base case
	if(i>j)
	return ;

	//condition

	swap(str[i],str[j]);   //shifting position from one to other
	i++;   //increment the value 
	j--;  

	//recursive call  to call newly change indexes
	reverse(str,i,j);
}



string reverseString(string str)
{
reverse(str,0,str.length()-1); //recalling the function and stroing the value
return str;
}

// string reverseString(string str)
// {
// 	int n = str.size();

// 	for (int i = 0; i < n/2; ++i) //n/2 lekapothe it wont shif
// 	{
// 		// Swap characters.
// 		swap(str[i], str[n - i - 1]);
// 	}
	
// 	return str;
// } 

// string reverseString(string str){
// 	int n=str.size();
//   for(int i=0;i<n/2;i++){
// 	  swap(str[i],str[n-1-i]);
//   }
//   return str;
// }




