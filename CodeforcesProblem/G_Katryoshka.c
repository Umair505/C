#include <stdio.h>
int main() {
 long long int e, m, b, result=0; 
 scanf("%lld %lld %lld", &e,&m,&b);
if (e == 0 || b == 0) { printf("0");
}
else{
long long int mn = e;//সুবিধার জন্য আলাদা একটা ভ্যারিয়েবল ডিক্লার
if(m < mn && m<b) {
mn = m;
}
if(b < mn && b<m) {
mn = b;
}
result=result+mn;
//এবার ৩ নম্বর অপশন ব্যবহার করে ফেললে সবগুলো থেকে সেটা বাদ দিয়ে দাও
e=e-mn;
b=b-mn;
m=m-mn;
if(e/2 <= b){
result=result+e/2;
}
// আর যদি চোখ এর অর্ধেক পরিমাণ শরীর না থাকতো তাহলে শরীর যতগুলো আছে ততগুলো ই বানানো যাবে।
else{
result=result+b;

}
printf("%lld", result);
}
return 0;
}
//  তোমাকে তিনটি সংখ্যা দেওয়া হবে। ১ম টি হচ্ছে কয়টি চোখ আছে সেটা, ২য় টি হচ্ছে কয়টি মুখ আছে সেটা এবং সবার শেষে কয়টি শরীর আছে তা দেওয়া থাকবে। তোমাকে বলতে হবে তুমি কয়টি মূর্তি বানাতে পারবে। মূর্তি বানানো যাবে তিন ভাবে –
// ১। দুটি চোখ ও একটি শরীর দিয়ে
// ২। দুটি চোখ, একটি মুখ এবং একটি শরীর দিয়ে
// ৩। একটি চোখ, একটি মুখ এবং একটি শরীর দিয়ে
// এগুলো ব্যবহার করে তোমাকে সবচেয়ে বেশি মূর্তি বানাতে হবে। একটু চালাক হলে তুমি অলরেডি ধরে ফেলেছো। তা হলো ২ নম্বর অপশন আসলে কোন কাজেই আসবে না, কারণ ২ আর ৩ নম্বর অপশনের মধ্যে পার্থক্য হচ্ছে ২য় অপশন এ দুটি চোখ লাগে আর ৩য় অপশন এ একটি চোখ লাগে। তো আমি যদি বেশি সংখ্যক মূর্তি বানাতে চাই তাহলে আমি দুটি চোখ ব্যবহার করে কেনো মূর্তি বানাবো যেখানে আমি একটি চোখ ব্যবহার করেই বানাতে পারছি। বুঝতে পেরেছো?
// এবার দেখো, প্রথমে আমি চেক করবো ৩ নম্বর অপশন ব্যবহার করে কয়টি বানানো যাবে, কারণ এখানে সব ১টা করে লাগবে। আর তা হচ্ছে এদের মধ্যে সবচেয়ে মিনিমাম ভ্যেলু সংখ্যক মূর্তি বানানো যাবে। কিভাবে বুঝলাম? ধরো তোমার কাছে মুখ আছে ২ টি, বাকি গুলো ১০০টা করে আছে। তারপরেও কি ৩ নম্বর অপশন ব্যবহার করে ২টার বেশি বানাতে পারবে? পারবে না। কারণ মুখ শেষ হয়ে গেলে ৩ নম্বর অপশন আর কাজে দিবে না।
// এবার ৩ নম্বর অপশন ব্যবহার করে ফেললে সবগুলো থেকে সেটা বাদ দিয়ে দাও। 90 24 89 এই উদাহরণ এর কথা চিন্তা করো। ৩ নম্বর অপশন থেকে ২৪ টা মূর্তি বানানো যাবে। তাহলে আর থাকে 66 0 65। এবার ১ নম্বর অপশন এ শুধু চোখ আর শরীর লাগবে যেটা এখানে আছে। কিন্তূ একটা শরীর এর সাথে দুটি চোখ লাগবে। তার মানে চোখ যতগুলো আছে চেক করবে তার অর্ধেক শরীর আছে কিনা। যদি থাকে তাহলে সেগুলো দিয়ে মূর্তি বানাবে। এখানে 66 এর অর্ধেক 33। আর 33 টি শরীর আছে দেখা যাচ্ছে। তাহলে আরও 33 টি মূর্তি বানানো যাবে।
// টোটাল হলো 24+33=57টি। আর যদি চোখ এর অর্ধেক পরিমাণ শরীর না থাকতো তাহলে শরীর যতগুলো আছে ততগুলো ই বানানো যাবে।  
