# Led On Test List

Write down what we need to do.

## Test List

Assume a single LED? Makes it harder to upgrade but easier to grok for this
example.
This example should probably only have a single LED.

  * initialize led subsystem
    * fail
    * success
  * create led
    * fail
      * success
  * turn led on
    * fail
    * success
    * fail if not initilized?
  * uninit
    * doesn't apply to embedded hw but will for Linux-based stuff
    * applies to socket demo
    * fail
      * what do we do? Maybe nothing - this is a simple demo.
      * production/calling code could print a message
    * success

Return error/success codes, test them, but let the calling app handle all
behavior. It decides if we log, how we log, what we do. Why?

  * behavior varies on architecture
    * embedded can't print
    * console can print
    * web app prints very differently

Don't turn the LED off - this is "Led On" only for simplicity.
