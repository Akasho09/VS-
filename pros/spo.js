let inputsongname=document.querySelector("#inputsong");
console.log(inputsongname);
let searchbox=document.querySelector("#searchbox");
let nameofsong=document.getElementById("name");
let artistname=document.querySelector("#artist");
let playbutton =document.querySelector(".playbutton");
let previewUrl="#";
let playbuttonid =document.querySelector("#playbuttonid");
let urlofsong= document.querySelector("#urlofsong");
let searchedsongs=document.querySelectorAll(".searchedsongs li");
let searchedsongs1=document.querySelector("#searchedsongs1");
let searchedsongs2=document.querySelector("#searchedsongs2");
let searchedsongs3=document.querySelector("#searchedsongs3");
let searchedsongs4=document.querySelector("#searchedsongs4");
let searchedsongs5=document.querySelector("#searchedsongs5");

const clientId = '8faa99a07bb74a889dd23707831e38b0';
const clientSecret = '5bdab1a896c04d5f89115bb21a78750f';

const trackName = inputsongname.value;

// Spotify API endpoints
const authEndpoint = 'https://accounts.spotify.com/api/token';
const apiEndpoint = 'https://api.spotify.com/v1/search';

// Base64 encoded client credentials
const base64Credentials = btoa(`${clientId}:${clientSecret}`);

// Function to obtain an access token
async function getAccessToken() {
  const response = await fetch(authEndpoint, {
    method: 'POST',
    headers: {
      'Content-Type': 'application/x-www-form-urlencoded',
      'Authorization': `Basic ${base64Credentials}`,
    },
    body: 'grant_type=client_credentials',
  });

  const data = await response.json();
  return data.access_token;
}


// Function to search for a track by name
async function searchTrack(token) {
  console.log(inputsongname);
  const trackName = inputsongname.value;
  console.log(trackName);

  const query = encodeURIComponent(trackName);
  console.log("query : " , query);
  const type = 'track';

  const response = await fetch(`${apiEndpoint}?q=${query}&type=${type}`, {
    method: 'GET',
    headers: {
      'Authorization': `Bearer ${token}`,
    },
  });

  const data = await response.json();
  return data.tracks.items;
}

// Main function to execute the process
searchbox.addEventListener("click" , async function () {
     console.log(inputsongname.value);
    //  console.log(trackName);

    // if (getAccessToken) {
    //   fetch('https://api.spotify.com/v1/me', 
    //   {
    //     headers: {
    //       'Authorization': `Bearer ${getAccessToken}`,
    //     },
    //   })
    //   .then(response => response.json())
    //   .then(data => {
    //     const userDataDiv = document.getElementById('userData');
    //     userDataDiv.innerText = `hiii`;  
    //   })
    //   .catch(error => console.error('Error fetching user data:', error));
    // }

     try {
    // Obtain access token
    const token = await getAccessToken();

    // Search for the track
    const tracks = await searchTrack(token);

    // Output the first track found
    if (tracks.length > 0) {
      console.log('Track founded are :', tracks);
      console.log('Track found:', tracks[0].name, 'by', tracks[0].artists[0].name);
      nameofsong.innerText= tracks[0].name ;
      artistname.innerText= tracks[0].artists[0].name ;
      previewUrl=tracks[0].preview_url;
      urlofsong.innerText=previewUrl;
      urlofsong.src=previewUrl;
      console.log('Preview URL:', previewUrl);
      playbuttonid.src=previewUrl;
      // for (let i of tracks.length ) {
      //  searchedsongs[i].innerText=`${tracks[i].name} by ${ tracks[i+1].artists[i].name} \n Popularity of song = ${tracks[i].popularity} \n Url of Song =${tracks[i].preview_url}`;}
    searchedsongs[0].innerText=`${tracks[1].name} by ${tracks[1].artists[0].name } \n Popularity of song = ${tracks[1].popularity} \n Url of Song =${tracks[1].preview_url}`;
    searchedsongs[1].innerText=`${tracks[2].name} by ${tracks[2].artists[0].name } \n Popularity of song = ${tracks[2].popularity} \n Url of Song =${tracks[2].preview_url}`;
    searchedsongs[2].innerText=`${tracks[3].name} by ${tracks[3].artists[0].name} \n Popularity of song = ${tracks[3].popularity} \n Url of Song =${tracks[3].preview_url}`;
    searchedsongs[3].innerText=`${tracks[4].name} by ${tracks[4].artists[0].name} \n Popularity of song = ${tracks[4].popularity} \n Url of Song =${tracks[4].preview_url}`;
    searchedsongs[4].innerText=`${tracks[5].name} by ${tracks[5].artists[0].name} \n Popularity of song = ${tracks[5].popularity} \n Url of Song =${tracks[5].preview_url}`;

    } else {
      console.log('No tracks found.');
    }
  } catch (error) {
    console.error('Error:', error.message);
  }
});

async function playsong(previewUrl){
    console.log(previewUrl);
    const response = await fetch(previewUrl);
    // console.log(response);
    playbuttonid.src=previewUrl;
}
playbutton.addEventListener("click" , playsong(previewUrl));




