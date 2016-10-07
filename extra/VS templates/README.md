## Visual Studio 2015 .ASI project templates
#### How to use it
1. Create 'Plugin-SDK' folder in `\Documents\Visual Studio 2015\Templates\ProjectTemplates\`
![Img1](http://i.imgur.com/U4axpG6.png)

##### GTA San Andreas
2. Download `GTASA.zip` and open it.
3. Extract ProjectSA.vcxproj somewhere, open it with Notepad.
4. With "Replace" command, replace all occurrences of `D:\Games\Grand Theft Auto - San Andreas\scripts\` with a path to your .asi plugins folder

##### GTA Vice City
2. Download `GTAVC.zip` and open it.
3. Extract ProjectVC.vcxproj somewhere, open it with Notepad.
4. With "Replace" command, replace all occurrences of `D:\Games\Grand Theft Auto - Vice City\scripts\` with a path to your .asi plugins folder


5. With "Replace" command, replace all occurrences of `D:\Projects\plugin-sdk\` with a path to "plugin-sdk" folder on your disc.
6. Save a file and replace it in a .zip archive.
7. Put .zip archive to `\Documents\Visual Studio 2015\Templates\ProjectTemplates\`
![Img2](http://i.imgur.com/oJalngi.png)

8. Restart Visual Studio if it was launched

After these steps, you'll see new templates in Visual C++/Plugin-SDK category.
![Img3](http://i.imgur.com/ns7jlRP.png)