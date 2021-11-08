const array = (arr) => {
  return arr.split(",").slice(1, -1).join(" ") || null;
};

let myArr = "1,2,3,4,5";

console.log(array(myArr));
