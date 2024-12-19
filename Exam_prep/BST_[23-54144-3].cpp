#include<iostream>

using namespace std;

struct node{
double data;
node* lowerPriceProduct;
node* higherPriceProduct;
};

node *addProduct(double new_digit){
node *new_product=new node();
new_product->data=new_digit;
new_product->lowerPriceProduct=NULL;
new_product->higherPriceProduct=NULL;
return new_product;

}

node *priceTracker(node *productPrice, double price){
if(productPrice==NULL){
    return addProduct(price);
}
else if(price>productPrice->data){
productPrice->higherPriceProduct=priceTracker(productPrice->higherPriceProduct,price);
}
else if(price<productPrice->data){
productPrice->lowerPriceProduct=priceTracker(productPrice->lowerPriceProduct,price);
}

}

void showSortedProduct(node *productPrice){
    if(productPrice!=NULL){
        cout<<productPrice->data<<" ";
showSortedProduct(productPrice->lowerPriceProduct);
showSortedProduct(productPrice->higherPriceProduct);
    }

}

int main(){
node *productPrice=NULL;
productPrice=priceTracker(productPrice,85.7);
priceTracker(productPrice,50.5);
priceTracker(productPrice,95.2);
priceTracker(productPrice,34.3);
priceTracker(productPrice,62.4);
priceTracker(productPrice,78.9);
priceTracker(productPrice,100.0);
priceTracker(productPrice,42.5);
priceTracker(productPrice,20);
priceTracker(productPrice,140.5);

cout<<"Preorder Traversal: ";
showSortedProduct(productPrice);


}



