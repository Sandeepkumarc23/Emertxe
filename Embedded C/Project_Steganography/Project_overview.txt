                                                                        LSB Steganography
                                                                        
If I want to send some secret message to my friend via digital system, I don't want any third person to read and overwritr the data that I am sending over internet.
There comes Steganography technique to encode data in a image and sending that image to the reciever who will be decoding the image to get the information.
Here encoding means hiding data in the LSB of each byte in the image. To keep the stego image which is hiding the data look like normal image, I will be storing data in LSB.
I have used magic_string encoded which tells the reciever that this is the image which has got that secret information.
The reciever will decode the data by extracting LSB bit from each byte where 8 bits forming 1 character which inturn gets stored inside a file.
In the end, the reciever will get the decoded.txt file which has the secret information.

For encoding: 

./a.out -e beautiful.bmp secret.txt stego.bmp
where beautiful.bmp is the source image in which we hide data.
secret.txt is a text file which has the secret data.
stego.bmp is a file which contains the hidden data.

For decoding:

./a.out -d stego.bmp decode.txt
where decode.txt is the file which contains the secret data which has been extracted from stego.bmp image.

LSB Steganography technique is used in Military, Online Elections, Internet Banking etc.
