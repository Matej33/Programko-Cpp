#include <iostream>

using namespace std;

string nazov(string iban){
    string banka;
    banka = iban.substr(5,4);
    if (banka == "0900")
        return "Slovenska sporitelna";
    else if (banka == "0200")
        return "VUB banka";
    else if (banka == "1100")
        return "Tatra banka";
    else if (banka == "6500")
        return "365 banka";
    else if (banka == "7500")
        return "CSOB";
    else if (banka == "8170")
        return "CSOB stavebna sporitelna";
    else if (banka == "5600")
        return "Prima banka Slovensko";
    else if (banka == "5900")
        return "Prva stavebna sporitelna";
    else if (banka == "6500")
        return "Postova banka";
	else if (banka == "8360")
        return "mBank";
    else if (banka == "8330")
        return "Fio banka";
    else if (banka == "7300")
        return "ING banka";
    else if (banka == "8100")
        return "KB";
    else if (banka == "8320")
        return "J&T banka";
    else if (banka == "5200")
        return "OTP banka Slovensko";
    else if (banka == "0720")
        return "Nb Slovenska";
    else if (banka == "8180")
        return "Statna pokladnica";
    else if (banka == "1111")
        return "UniCreditBanka";
    else if (banka == "1100")
        return "Reiffeisen BANK";
    else if (banka == "8430")
        return "KDB banka";
    else if (banka == "8160")
        return "EXIMBANKA";
    else if (banka == "8400")
        return "BANCO COFIDIS";
    else if (banka == "8050")
        return "COMMERZBANK";
    else if (banka == "8370")
        return "Oberbank";
    else if (banka == "8130")
        return "Citibank";
    else if (banka == "8420")
        return "BKS bank";
    else if (banka == "3000")
        return "SZaRB";
    else if (banka == "8120")
        return "Privatbanka";
    else if (banka == "7930")
        return "Wustenrot";
    else 
    	return "neexisting";
        
}
int main() {
    string iban;
    getline(cin, iban);
    cout << nazov(iban) << endl;

    return 0;
}
