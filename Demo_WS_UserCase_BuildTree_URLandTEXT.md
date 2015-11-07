# Instructions for using the demo  

## Tree from text instructions 

If you want to get TREE from text

1. Goto : http://128.123.177.13/WSRegistry/WSExecution/demoWSRunning
2. Login 
3. Select : Web Services Execution - Demo Running in Left hand-side menu
4. Put "http://128.123.177.13/WSRegistry/sites/default/files/wsdl/usecase2_workflow1_text.wsdl" into WSDL URI ( Please input WITHOUT quotation mark)
5. Select getPhylogeneticTree_FromText in Operation name combo box
6. Input your text you want to work on that in the last text area.  The use of GET method of gnrd globalnames API means that text limit is 2000 characters.
7. Click Execute and wait for Web Service working
8. After WS is done, Web site will move to Web Services Execution - Result site and have Raw Result that is result of your request as newick format
9. Click View Tree Data link below Raw Result and you can view the Tree => DONE

### Notes

I try to test this WS with text from 2 websites 
https://en.wikipedia.org/wiki/Setophaga
and https://en.wikipedia.org/wiki/Ant
With https://en.wikipedia.org/wiki/Setophaga, 

you can copy whole site ; paste to Text Input and run demo

With https://en.wikipedia.org/wiki/Ant, I think you can only copy apart of this site (because whole Ant site is too long , over 2000 characters). With me, I try to copy 3 parts of Ant site : Communication, Defense, Learning (in Behaviour and ecology) and it worked well

## Get TREE from URL

### Steps 
1. Goto : http://128.123.177.13/WSRegistry/WSExecution/demoWSRunning
2. Login 
3. Select : Web Services Execution - Demo Running in Left hand-side menu
4. Put "http://128.123.177.13/WSRegistry/sites/default/files/wsdl/usecase2_workflow1.wsdl" into WSDL URI ( Please input WITHOUT quotation mark)
5. Select getPhylogeneticTree_FromURL in Operation name combo box
This message was deleted
This message was deleted
6. Input URL you want to work on that in the last text area (URL textfield).
7. Click Execute and wait for Web Service working
8. After WS is done, Web site will move to Web Services Execution - Result site and have Raw Result that is result of your request as newick format
9. Click View Tree Data link below Raw Result and you can view the Tree => DONE

### Notes 
I try to test this WS with text from 2 websites : https://en.wikipedia.org/wiki/Setophaga
and https://en.wikipedia.org/wiki/Ant
