# Miscellaneous
Design with inherited data

## Data visualization with the depth of the water and the sound volume
* Used water level and sound sensor to collect data
* Used Ardunio code to record data
* Used Python and other Grasshopper components to construct a 3D visualization object corresponding to the changes of the real time data
![](https://github.com/alisamao09/Miscellaneous-projects/blob/main/images/WX20201211-233936%402x.png)
![](https://github.com/alisamao09/Miscellaneous-projects/blob/main/images/WX20201211-233949%402x.png)
![](https://github.com/alisamao09/Miscellaneous-projects/blob/main/images/WX20201211-233956%402x.png)

## Re-construct artworks by Python in Grasshopper
* Re-created Manuel Barbadillo's artwork Typical Output by coding in Python component in Grasshopper
![](https://github.com/alisamao09/Miscellaneous-projects/blob/main/images/artwork.png)

## [Covid-19 What’s all the fuss?](https://github.com/alisamao09/ARC-480)
* Demonstrated patterns between COVID-19 case counts and the ongoing discussion of the virus on social media
* Scraped key phrases in tweets regarding COVID by ScrapeStorm, filtering them by tweet location (Toronto) and months (March to December)
* Found the most frequent words by calculating word frequencies using WriteWords
* Represented the varying frequency (number of appearances) of words within tweets by months by the Height of words
* Represented death cases in Toronto during the same time period by hospital bed changes in size
* Visualized the variation of word frequencies and death cases in Grasshopper:
- Created a list containing all data (number of words and cases) by month (8 months in all), extruded them using the data as the height (scaled death cases by 0.001 due to its huge amount)
- Visualized those changes by changing number slider, from the first month to the final month
- Applied materials to texts and the hospital bed
* Represented the rate of social activity of the Toronto Public Health account by birds flying around the words, according to data found on SocialBlade
* Analyzed limitations, subjectivity, data bias and the potential of this project
![](/images/WX20201208-200425%402x.png)
[Here's the video!](https://www.youtube.com/watch?v=ysZuOS9UK90)

# [Is systolic blood pressure reading related to gender, age, poverty, weight, sleep trouble, and smoking habit? American population-based study](https://github.com/alisamao09/STA302)
* Constructed multiple linear regression models and selected the one that has the largest impact on the change of systolic blood pressure and provides the most accurate predictions based on the dataset
* Explored mostly related variables to the change of systolic blood pressure reading (BPSysAve) and the best predictors for combined systolic blood pressure accurate reading
* Checked model inferences, predictability and scalability
* Performed diagnostic check
