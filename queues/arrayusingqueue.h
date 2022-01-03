template<typename T>
class arrayusingqueue{
 T *data;
 int nextindex;
 int firstindex;
 int size;
 int capacity;
 public:
 arrayusingqueue(int s){
     data=new T[s];
   size=0;
   firstindex=-1;
   nextindex=0;
   capacity=s;
 }
 int getsize(){
     return size;
 }
 bool isempty(){
     return size==0;
 }
 //insert the element
 void enqueue(T element){
     if(size==capacity){
         T *newdata=new T [2 * capacity];
         int j=0;
         for(int i=firstindex;i<capacity;i++){
             newdata[j]=data[i];
             j++;
         }
         for(int i=0;i<firstindex;i++){
             newdata[j]=data[i];
             j++;
         }
         delete [] data;
         data=newdata;
         firstindex=0;
         nextindex=capacity;
         capacity*=2;
        //  cout<<"queue is full"<<endl;
        //  return ;
     }
     data[nextindex]=element;
     nextindex=(nextindex+1)%capacity;
     if(firstindex==-1){
         firstindex=0;
     }
     size++;
 }
 T front(){
     if(isempty()){
         cout<<"stack is empty"<<endl;
         return 0;
     }
     return data[firstindex];
 }
 T dequeue(){
     if(isempty()){
         cout<<"stack is empty"<<endl;
         return 0;
     }
     T ans=data[firstindex];
         firstindex=(firstindex+1)%capacity;
         size--;
         if(size==0){
             firstindex=-1;
             nextindex=0;
         }
         return ans;
 }
};