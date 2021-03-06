void allignSwitch (void);
{
    int allignment;
    
    cout<<"Choose your allignment to learn more about it: "<<endl<<endl;
    cout<<"1. Lawful Good"<<endl;
    cout<<"2. Neutral Good"<<endl;
    cout<<"3. Chaotic Good"<<endl;
    cout<<"4. Lawful Neutral"<<endl;
    cout<<"5. Neutral"<<endl;
    cout<<"6. Chaotic Neutral"<<endl;
    cout<<"7. Lawful Evil"<<endl;
    cout<<"8. Neutral Evil"<<endl;
    cout<<"9. Chaotic Evil"<<endl;
    cout<<"> ", cin>>allignment, cout<<endl;
    system("CLS");

    switch (allignment)
    {
        case 1:
            cout<<"A Lawful Good character typically acts with compassion, and always with honor and a sense of duty. A Lawful Good nation would consist of a well-organized government that works for the benefit of its citizens. Lawful Good characters include righteous knights, paladins, and most dwarves. Lawful Good creatures include the noble golden dragons. Lawful Good characters, especially paladins, may sometimes find themselves faced with the dilemma of whether to obey law or good when the two conflict � for example, upholding a sworn oath when it would lead innocents to come to harm � or conflicts between two orders, such as between their religious law and the law of the local ruler."<<endl;
            break;
        case 2:
            cout<<"A Neutral Good character is guided by his conscience and typically acts altruistically, without regard for or against Lawful precepts such as rules or tradition. A Neutral Good character has no problems with co-operating with lawful officials, but does not feel beholden to them. In the event that doing the right thing requires the bending or breaking of rules, they do not suffer the same inner conflict that a Lawful Good character would."<<endl;
            break;
        case 3:
            cout<<"A Chaotic Good character favors change for a greater good, disdains bureaucratic organizations that get in the way of social improvement, and places a high value on personal freedom, not only for oneself, but for others as well. They always intend to do the right thing, but their methods are generally disorganized and often out of alignment with the rest of society. They may create conflict in a team if they feel they are being pushed around, and often view extensive organization and planning as pointless, preferring to improvise."<<endl;
            break;
        case 4:
            cout<<"A Lawful Neutral character typically believes strongly in Lawful concepts such as honor, order, rules and tradition, and often follows a personal code. A Lawful Neutral society would typically enforce strict laws to maintain social order, and place a high value on traditions and historical precedent. Examples of Lawful Neutral characters might include a soldier who always follows orders, a judge or enforcer that adheres mercilessly to the word of the law, and a disciplined monk. Characters of this alignment are neutral with regard to good and evil. This does not mean that Lawful Neutral characters are amoral or immoral, or do not have a moral compass, but simply that their moral considerations come a distant second to what their code, tradition, or law dictates. They typically have a strong ethical code, but it is primarily guided by their system of belief, not by a commitment to good or evil."<<endl;
            break;
        case 5:
            cout<<"A Neutral character represents Neutral on both axes, and tends not to feel strongly towards any alignment. A farmer whose primary overriding concern is to feed his family is of this alignment. Most animals, lacking the capacity for moral judgment, are of this alignment since they are guided by instinct rather than conscious decision. Many roguish characters who play all sides to suit themselves are also of this alignment (such as a weapon merchant with no qualms selling his wares to both sides of a war for a profit). Some Neutral characters, rather than feeling undecided, are committed to a balance between the alignments. They may see good, evil, law and chaos as simply prejudices and dangerous extremes."<<endl;
            break;
        case 6:
            cout<<"A Chaotic Neutral character is an individualist who follows his or her own heart, and generally shirks rules and traditions. Although they promote the ideals of freedom, it is their own freedom that comes first. Good and Evil come second to their need to be free, and the only reliable thing about them is how totally unreliable they are. Chaotic Neutral characters are free-spirited and do not enjoy the unnecessary suffering of others, but if they join a team, it is because that team's goals happen to coincide with their own at the moment. They invariably resent taking orders and can be very selfish in their pursuit of personal goals. A Chaotic Neutral character does not have to be an aimless wanderer; they may have a specific goal in mind, but their methods of achieving that goal are often disorganized, unorthodox, or entirely unpredictable. A subset of Chaotic Neutral is: "strongly Chaotic Neutral"; describing a character who behaves chaotically to the point of appearing insane. Characters of this type may regularly change their appearance and attitudes for the sake of change and intentionally disrupt organizations for the sole reason of disrupting a lawful institution. "<<endl;
            break;
        case 7:
            cout<<"A Lawful Evil character sees a well-ordered system as being easier to exploit, and shows a combination of desirable and undesirable traits; while they usually obey their superiors and keep their word, they care nothing for the rights and freedoms of other individuals and are not averse to twisting the rules to work in their favor. Examples of this alignment include tyrants, devils, undiscriminating mercenary types who have a strict code of conduct, and loyal soldiers who enjoy the act of killing. Like Lawful Good Paladins, Lawful Evil characters may sometimes find themselves faced with the dilemma of whether to obey law or evil when the two conflict. However, their issues with Law versus Evil are more concerned with 'Will I get caught?' versus 'How does this benefit me?'"<<endl;
            break;
        case 8:
            cout<<"A Neutral Evil character is typically selfish and has no qualms about turning on their allies-of-the-moment, and usually makes allies primarily to further their own goals. They have no compunctions about harming others to get what they want, but neither will they go out of their way to cause carnage or mayhem when they see no direct benefit to it. They abide by laws for only as long as it is convenient for them. A villain of this alignment can be more dangerous than either Lawful or Chaotic Evil characters, since she or he is neither bound by any sort of honor or tradition nor disorganized and pointlessly violent. Another valid interpretation of Neutral Evil holds up evil as an ideal, doing evil for evil's sake and trying to spread its influence. Examples are an assassin who has little regard for formal laws but does not needlessly kill, a henchman who plots behind her or his superior's back, or a mercenary who switches sides if made a better offer. An example of the second type of Neutral Evil would be a masked killer who strikes only for the sake of causing fear and distrust in the community."<<endl;
            break;
        case 9:
            cout<<"A Chaotic Evil character tends to have no respect for rules, other people's lives, or anything but their own desires, which are typically selfish and cruel. They set a high value on personal freedom, but do not have any regard for the lives or freedom of other people. They do not work well in groups, as they resent being given orders, and usually behave themselves only out of fear of punishment. It is not compulsory for a Chaotic Evil character to be constantly performing sadistic acts just for the sake of being evil, or constantly disobeying orders just for the sake of causing chaos. They do however enjoy the suffering of others, and view honor and self-discipline as weaknesses. Serial killers and monsters of limited intelligence are typically Chaotic Evil."<<endl;
            break;
        default:
            cout<<"Invalid entry!"<<endl;
    }
    cout<<endl;
}
