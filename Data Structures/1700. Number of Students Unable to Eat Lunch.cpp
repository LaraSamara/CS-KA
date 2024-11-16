const string URL = "https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/";
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int>student;
    for(int i=0;i<students.size();i++){
        student.push(students[i]);
    } 
    stack<int>sandwich;
    for(int i=sandwiches.size()-1;i>=0;i--){
        sandwich.push(sandwiches[i]);
    }
        int count=0;
    while(!student.empty()){
        if(sandwich.top()==student.front()){
            sandwich.pop();
            student.pop();
            count=0;
        }else{
            count++;
            if(count==sandwich.size()) break;
            student.push(student.front());
            student.pop();
        }
    }
    return count;
    }
};
