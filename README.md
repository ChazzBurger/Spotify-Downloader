<img src="https://github.com/ChazzBurger/Spotify-Downloader/assets/54973797/0998c0ca-bc59-4cb4-a9f5-76956d3bbe27" align="right" width="12%" height="12%">

# Spotify Downloader
[![Latest Release](https://img.shields.io/github/v/release/WilliamSchack/Spotify-Downloader?label=Latest%20Release&color=007ec6)](https://github.com/ChazzBurger/Spotify-Downloader/releases)
[![Downloads](https://img.shields.io/github/downloads/WilliamSchack/Spotify-Downloader/total?label=Downloads&color=007ec6)](https://github.com/ChazzBurger/Spotify-Downloader/releases)
[![Open Issues](https://img.shields.io/github/issues/WilliamSchack/Spotify-Downloader?label=Issues)](https://github.com/ChazzBurger/Spotify-Downloader/issues?q=is%3Aissue+is%3Aopen)
[![Closed Issues](https://img.shields.io/github/issues-closed/WilliamSchack/Spotify-Downloader?label=Issues)](https://github.com/ChazzBurger/Spotify-Downloader/issues?q=is%3Aissue+is%3Aclosed)
[![Stars](https://img.shields.io/github/stars/WilliamSchack/Spotify-Downloader?label=Stars&color=007ec6)](https://github.com/ChazzBurger/Spotify-Downloader/stargazers)

Spotify Downloader is an application that can download songs from spotify with ease and for free unlike spotify premium requiring a subscription

## Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [License](#license)
- [FAQ](#faq)
- [Credits](#credits)

## Installation
***Only currently supports windows. Other platforms may be coming soon***

The latest release can be found [Here](https://github.com/WilliamSchack/Spotify-Downloader/releases/latest). **Installer Recommended**

Follow the instructions below depending on your chosen install type.

<details>
<summary><b> Installer </b></summary>

---
    
*Note: Installer requires administrator privileges otherwise install will fail*

**IF A WINDOW COMES UP SHOWING "Windows protected your PC" click:**
- More Info
- Run Anyway

<details>
<summary><b> Reasoning Behind This </b></summary>

This popup generally comes up when windows defender does not know much about a program being installed without a publisher. Since my program is not verified by microsoft, this will show up on first launch for almost everyone.
There is not really anything that I can do about this.

</details>

---

**Choose your install location. Default is "C:/Program Files/Spotify Downloader" but you can change this to anywhere you like.**

*Note: If the program is already installed in the chosen location, it will overwrite and update the old install*
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/ed720dd2-1862-4247-8714-b1ba9f8b3c4c" width="50%" height="50%">

**Select the Spotify Downloader component (selected by default)**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/8d64c8a9-1453-4b2d-b2ee-cf40742f31d3" width="50%" height="50%">

**The program will add a shortcut to the start menu and the name can be changed here**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/0a8b4ec7-8fd1-41ea-a522-0182c0f0ebca" width="50%" height="50%">

**Click install and wait for the installer to finish**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/d4e1628a-031a-4735-b454-ecb5b2cea886" width="50%" height="50%">

**Now click Finish and the program is ready to be ran**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/563d6a7a-2c8c-47ab-b45e-00d4c8939ab9" width="50%" height="50%">

You can open the program through the start menu or from the installed location through "Spotify Downloader.exe"

---

</details>

<details>
<summary><b> ZIP </b></summary>

---

**Unzip the file to any location through your chosen unzipping software.**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/acdfb267-7f91-49be-8c93-aca623b8749f" width="50%" height="50%">

**The program can now be ran through "Spotify Downloader.exe"**
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/2e7771fe-1ab3-4e7f-a040-befb0fc6f8da" width="50%" height="50%">

---

</details>

## Usage

<details>
<summary><b> Setup </b></summary>

---

<img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/84a4debe-4565-4154-84a7-413186f477c7" width="50%" height="50%">

**Enter Song/Playlist URL**
- The URL to your songs you would like to download
- Accepts:
    - Singlular Songs
    - Playlists
    - Albums

*Note: Your playlist or album must be public or else it will not work*

<details>
<summary><b> How To Find Your URL </b></summary>

**In App**
- Right click Your chosen song or playlist
- Share
- Copy link to playlist
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/7114f20e-9176-4e5b-990b-421f59ff8343" width="50%" height="50%">

**In Browser**
- Click on your playlist or song
- Copy the URL
> <img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/409a2b15-1c9a-48d7-a9a1-3b505b699b5a" width="50%" height="50%">

</details>

**Select A Save Location**
- The path to your download location. You can click the file icon directly to the right of the input box to browse to a location.

---
    
</details>

<details>
<summary><b> Settings </b></summary>
    
---

<img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/bc4ce06c-898e-4b23-b9ef-4e4f60b82e01" width="50%" height="50%">

**Overwrite Existing Files - Recommended: OFF**
- If enabled, downloading will overwrite previously downloaded files or not

**Show Status Notifications - Recommended: ON**
- If enabled, notifications will show when notable events happen during downloading to notify you incase it is in the background

**Downloader Threads - Recommended: 3**
- The amount of threads used while downloading songs. This will control how many songs download simultaneously but large values can negatively effect CPU usage. Cannot be changed during download.

**Download Speed Limit - Recommended: 0MB/s**
- The speed limit to downloading songs in MB/s. A value of 0 is uncapped

**Normalize Volume - Recommended: ON, -14dB**
- If enabled, changes the value of all songs to the same depending on its average volume.
    - Quite: -17dB
    - Normal: -14dB
    - Loud: -11dB

---
    
</details>

<details>
<summary><b> Downloading </b></summary>
    
---

<img src="https://github.com/WilliamSchack/Spotify-Downloader/assets/54973797/0b2a885f-09a7-4f37-8da9-1dd68b73345f" width="50%" height="50%">

Each track downloading will show its:
- Cover image
- Downloading index on that thread
- Title
- Artist(s)
- Progress Percent
- Downloading Status

You can see your total download progress on the counter at the bottom left.

The **Pause Button** will pause all current downloads

The **Settings Button** will open the settings menu allowing you to change most of the settings

---
    
</details>

<details>
<summary><b> Failed Downloads </b></summary>
    
---

<img src="https://github.com/ChazzBurger/Spotify-Downloader/assets/54973797/764b6460-fa02-47d6-96b3-ee259f23b4af" width="50%" height="50%">

Shows all of the songs that failed to download due to various reasons that can include:
- Song not available on youtube
- Song on youtube not close enough to spotify version

---
    
</details>

## Features

- **GUI**
    - Makes it easy to navigate the program
    - Multiple screens for easier understanding of what is currently happening
    - Clear communication of what is currently happening in each download
- **Easy Downloading**
    - Downloading starts with only two inputs and a button click making it easy to start
- **Multithreading**
    - Can download multiple songs at once by using multiple threads
    - Splits playlist into multiple smaller lists that download seperately to speed up the download time significantly
    - Automatically distributes songs after each thread is finished downloading to not waste any resources
- **Automatic Metadata**
    - Downloads automatically include metadata into each file containing:
    - Song Title
    - Artists
    - Album Name & Cover
    - Spotify & Youtube ID used to download the song
- **Customisable**
    - Allows you to have control over the main parts of the downloading including:
    - Overwriting
    - Thread Count
    - Download Speed
    - Volume Normalization
- **Automatic Cleanup**
    - When quitting the application it will automatically quit and cleanup any currently downloading and temp files that will not be needed later
    - If cleanup fails due to any reason, unused files are kept in the temp directory and will be cleaned on later use of the program or by windows automatically

## License
***Spotify Downloader is distributed under the GNU General Public License v3.0 from 17/04/2024 and Release v1.1.3***


Spotify Downloader is a program that downloads songs from Spotify.
Copyright (C) 2024  William Schack

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

## FAQ
<details>
<summary><b>Where are songs downloaded from?</b></summary>
Despite what the title implies, songs are actually downloaded from youtube. The program retrieves the data of each song from spotify and uses a combination of the duration, title, artists, album, and views in special cases, to determine which songs on youtube correspond to those on spotify. You can find the algorithm behind this in <a href="https://github.com/WilliamSchack/Spotify-Downloader/blob/main/Spotify%20Downloader/SongDownloader.cpp">SongDownloader.cpp</a> under "#pragma region Search For Song" at line 129 at the time of writing this.
</details>

<details>
<summary><b>How accurate are the downloads?</b></summary>
The downloads are almost always accurate and have only few times has downloaded the incorrect song being usually covers of a song. If the song is not on youtube at all, it will not download the song if there are no extremely similar songs in title, artists, duration, etc. After roughly 500 songs tested over many artists and genres I have only gotten around 5-10 incorrect which were all covers of songs that were not on youtube. You can find the algorithm behind this in <a href="https://github.com/WilliamSchack/Spotify-Downloader/blob/main/Spotify%20Downloader/SongDownloader.cpp">SongDownloader.cpp</a> under "#pragma region Search For Song" at line 129 at the time of writing this.
</details>

<details>
<summary><b>What can I download from spotify?</b></summary>
You can download a playlist, album, or individual songs. Episodes are also unsupported if in a playlist/album (cannot be inputted manully), but there may also be other types of media that I have not found yet. You also cannot download all songs from a given artist but if you need to get around this the only suggestion I have is to compile all of their songs into a playlist and input that into the program but I may have a look into supporting this in the future. If you need any help finding the link for your music, there is a guide <a href="https://github.com/WilliamSchack/Spotify-Downloader?tab=readme-ov-file#usage">Here</a> under Setup > How To Find Your URL.
</details>

<details>
<summary><b>What is the quality of the downloaded songs?</b></summary>
The audio quality of each song is the same as the highest on youtube. But this varies from song to song. Without audio normalization, I have seen bitrates ranging from 100-150kbps with no real pattern for it, really just depending on the channel that posted the song. With audio normalization turned on, all songs are then processed and outputted with a bitrate of 124kbps. This is an issue that I do need to look into and will in the future to hopefully allow for higher bitrates with settings to change the quality of the audio but for now, it is not a major issue and will be kept as is. To my ears it sounds pretty much the same as on spotify but I can see why this is a deal breaker for some and will definitely have a look into it.
</details>

<details>
<summary><b>Can I change the file extension of output files?</b></summary>
No. Not yet at least. For now they will always be outputed as an mp3 file, but this is planned to change in the future and more file extensions will come in later updates. Currently there are some things in the code that are created specially regarding mp3 files and would not work with other file extensions (taglib with the metadata assigning as an example) and would need more work put into it to accommodate for more. For now I have other updates planned before regarding this, but it will definitely be a feature soon.
</details>

<details>
<summary><b>Why have there been months between updates?</b></summary>
When I first created this project I has a lot of free time on my hands and was able to work on it for as long as I wanted, but now I have other responsibilities that are taking up a good chunk of my time and there are other projects that I work on outside of this one so I just do not have the time to work on this constantly. This project is being made out of passion and I do work on it often enough to now release updates hopefully monthly and if not bi-monthly, but do not let that put you off as I enjoy working on this project and no matter the breaks that I have taken, this will continue to be developed. If anything does happen where I am unable to work on the project anymore, I will update the readme to reflect that.
</details>

## Credits
**Packages Used**
- [Qt5](https://www.qt.io/) - [LGPL v3 License](https://doc.qt.io/qt-6.5/lgpl.html)
- [Python YT Music API](https://github.com/sigma67/ytmusicapi) - [MIT License](https://github.com/sigma67/ytmusicapi/blob/main/LICENSE) (Translated to C++)
- [ffmpeg](https://www.ffmpeg.org/) - [LGPL v2.1 License](https://www.ffmpeg.org/legal.html)
- [yt-dlp](https://github.com/yt-dlp/yt-dlp) - [Unlicense](https://github.com/yt-dlp/yt-dlp/blob/master/LICENSE)
- [Taglib](https://github.com/taglib/taglib) - [LGPL v2.1 License](https://github.com/taglib/taglib/blob/master/COPYING.LGPL), [Mozilla Public License](https://github.com/taglib/taglib/blob/master/COPYING.MPL)
- [Difflib C++](https://github.com/duckie/difflib) - [MIT License](https://github.com/duckie/difflib/blob/master/LICENSE)

Thanks to you for using my program :)
