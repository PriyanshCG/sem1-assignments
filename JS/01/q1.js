var sub1 = 85;
var sub2 = 78;
var sub3 = 92;
var sub4 = 74;
var sub5 = 88;

var totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
var percentage = (totalMarks / 500) * 100;

var grade;
if (percentage >= 90) {
  grade = "Grade A";
} else if (percentage >= 80) {
  grade = "Grade B";
} else if (percentage >= 70) {
  grade = "Grade C";
} else if (percentage >= 60) {
  grade = "Grade D";
} else {
  grade = "Fail";
}

console.log("Total Marks:", totalMarks);
console.log("Percentage:", percentage  + "%");
console.log("Grade:", grade);
