// Insertion Sort
let unsortedP = document.querySelector("p.unsorted");
let sortedP = document.querySelector("p.sorted");
let unsorted = [];

for (let k = 0; k < 1000; k++)
{
  unsorted[k] = Math.floor(Math.random() * 11);
}

unsortedP.innerHTML = unsorted.join(", ");

let insert = (ai, arr) => {
  for (let i = 0; i < arr.length; i++)
  {
    if (arr[i] >= arr[ai])
    {
      let n = arr[ai];
      
      for (let j = ai; j > i ; j--)
      {
        arr[j] = arr[j-1];
      }
      
      arr[i] = n;
      break;
    }
  }
};

for (let i = 0; i < unsorted.length; i++)
{
  insert(i, unsorted);
}

sortedP.innerHTML = unsorted.join(", ");
