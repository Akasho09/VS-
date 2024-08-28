// const options = {
// 	method: 'GET',
// 	headers: {
// 		'X-RapidAPI-Key': 'SIGN-UP-FOR-KEY',
		// 'X-RapidAPI-Host': 'andruxnet-random-famous-quotes.p.rapidapi.com'
// 	}
// };

let reference1 =document.getElementById("reference");
let edition1 =document.getElementById("edition");
let click1 =document.getElementById("click1");

click1.addEventListener("click" , ()=>{
    find(); 
});
async function find() {
    let reference=reference1.value;
    let edition=edition1.value;
    const url = `http://api.alquran.cloud/v1/ayah/${reference}`;
	const response = await fetch(url);
    console.log(response);
	const result = await response.text();
	console.log(result);
}
