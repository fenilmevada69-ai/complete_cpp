// #include<iostream>
// #include<typeinfo>
// #include<queue>
// #include<stack>
// #include<map>
// #include<list>
// #include<algorithm>
// using namespace std;

// void seeOrders(queue<pair<int,string>> q) {
//     cout << "=======Orders========" << endl;
//     while(!q.empty()) {
//         cout<<q.front().first<<" "<<q.front().second<<endl;
//         q.pop();
//     }
// }

// int main() {
//     queue<pair<int,string>> incomingOrders;
//     stack<pair<int,string>> failedOrders;
//     list<pair<int,string>> completedOrders;
//     map<string,int> salesCount;
//     map<string,int> price;
//     price["Laptop"] = 60000;
//     price["Mobile"] = 20000;
//     price["Headphones"] = 2000;

//     map<string,int> totalRevenue;



//     incomingOrders.push({1,"Laptop"});
//     incomingOrders.push({2,"Mobile"});
//     incomingOrders.push({2,"Mobile"});
//     incomingOrders.push({5,"Mobile"});
//     incomingOrders.push({6,"Mobile"});
//     incomingOrders.push({3,"Laptop"});
//     incomingOrders.push({4,"Headphones"});

//     seeOrders(incomingOrders);

//     while(!incomingOrders.empty()) {
//         auto order = incomingOrders.front();
//         incomingOrders.pop();
//         if((order.first)%2==0) {
//             completedOrders.push_back(order);
//             salesCount[order.second]++;
//         } else {
//             failedOrders.push(order);
//         }
//     }
    
//     cout << "======Completed orders======" << endl;
//     for(auto order : completedOrders) {
//         cout << order.first << " " << order.second << endl;       
//     }

//     cout << "========Map========" << endl;
//     for(auto pair : salesCount) {
//         cout << pair.first << " " << pair.second << endl;
//     }
    
//     while(!failedOrders.empty()) {
//         auto order = failedOrders.top();
//         failedOrders.pop();
//         completedOrders.push_back(order);
//         salesCount[order.second]++;
//     }

//     cout << "========Map========" << endl;
//     for(auto pair : salesCount) {
//         cout << pair.first << " " << pair.second << endl;
//     }

//     auto mostSold = max_element(salesCount.begin(),salesCount.end(), [](auto p1, auto p2) {
//         return p1.first < p2.first;
//     });

//     cout << "=======Most Sold=======" << endl;
//     cout << mostSold->first << " " << mostSold->second << endl;


//     cout << "=======Price========" << endl;
//     for(auto pair : price) {
//         cout << pair.first << " " << pair.second << endl;
//     }

//     cout << "======Max Price======" << endl;
//     auto maxPrice = max_element(begin(price), end(price), [](auto p1, auto p2){
//         return p1.second < p2.second; 
//     });
//     cout << maxPrice->first << " " << maxPrice->second << endl;


//     int totalPrcice = 0;
//     for(auto pair : salesCount) {
//         string product = pair.first;
//         int quantity = pair.second;
//         totalRevenue[product] = quantity * price[product];
//     }

//     cout << "=======Total Revenue=======" << endl;
//     for(auto o : totalRevenue) {
//         cout << o.first << " " << o.second << endl;
//     }

//     auto maxRevenue = max_element(begin(totalRevenue), end(totalRevenue), [](auto p1, auto p2) {
//         return p1.second < p2.second;
//     }); 

//     cout << "=======Max Revenue=======" << endl;
//     cout << maxRevenue->first << " " << maxRevenue->second << endl;  
//     return 0;
// }








