int maxProfit(int* prices, int pricesSize) {
    int profit=0;
    int min_price=prices[0];
    if(pricesSize<=1) return 0;
  for(int i=1;i<pricesSize;i++){
    if(prices[i]<min_price){
        min_price=prices[i];
    }
    else if(prices[i]-min_price>profit){
        profit=prices[i]-min_price;
    }

  }
  return profit;  
}
