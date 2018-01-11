let unsorted = [];

for (let l = 0; l < 1000; l++)
{
  unsorted[l] = Math.floor(Math.random() * 11);
}

let swapCount = -1;
// The last looped over element must be the one before last
// because we need to compare two elements at a time
// and we will run out of bounds if we loop to the end
let unsortedLength = unsorted.length - 1;
do
{
  swapCount = 0;
  for (let i = 0; i < unsortedLength; i++)
  {
    if (unsorted[i] > unsorted[i+1])
    {
      [unsorted[i], unsorted[i+1]] = [unsorted[i+1], unsorted[i]];
      swapCount++;
    }
  }
  unsortedLength--;
}
while(swapCount !== 0);

console.log(unsorted);